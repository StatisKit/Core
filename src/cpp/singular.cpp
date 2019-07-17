#include "singular.h"

#include <boost/random/poisson_distribution.hpp>
#include <boost/random/binomial_distribution.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/gamma_distribution.hpp>
#include <boost/random/beta_distribution.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/math/special_functions/erf.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <boost/math/special_functions/beta.hpp>

namespace statiskit
{
    SingularDistribution::~SingularDistribution()
    {}
    
    double SingularDistribution::loglikelihood(const MultivariateData& data) const
    {
        double llh = 0.;
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        while (generator->is_valid() && boost::math::isfinite(llh)) { 
            double weight = generator->get_weight();
            if (weight > 0.) {
                llh += weight * this->probability(generator.get(), true);
            }
            ++(*generator);
        }
        return llh;
    }

    MultinomialSingularDistribution::MultinomialSingularDistribution(const Eigen::VectorXd& pi)
    {
        this->pi = Eigen::VectorXd::Zero(pi.size());
        this->set_pi(pi);
    }

    MultinomialSingularDistribution::MultinomialSingularDistribution(const MultinomialSingularDistribution& splitting)
    {
        this->pi = splitting.pi;
    }

    MultinomialSingularDistribution::~MultinomialSingularDistribution()
    {}

    Index MultinomialSingularDistribution::get_nb_components() const
    {
        return this->pi.size();
    }

    unsigned int MultinomialSingularDistribution::get_nb_parameters() const
    {
        return this->pi.size() - 1;
    }

    double MultinomialSingularDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if (event && event->size() == this->get_nb_components()) {
            try {
                p = 0.;
                int sum = 0;
                for (Index component = 0, max_component = this->get_nb_components(); component < max_component; ++component) {
                    const UnivariateEvent* uevent = event->get_event(component);
                    if (uevent) {
                        if (uevent->get_outcome() == outcome_type::DISCRETE && uevent->get_censoring() == censoring_type::NONE) {
                            int value = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                            if (!(this->pi[component] <= 0. && value == 0)) {
                                p += value * log(this->pi[component]) - boost::math::lgamma(value + 1);
                                sum += value;
                            }
                        } else {
                            throw std::exception();
                        }
                    }
                }
                p += boost::math::lgamma(sum + 1);
            } catch (const std::exception& error) {
                p = log(0.);
            }
        } else {
            p = log(0.);
        }
        if (!logarithm) {
            p = exp(p);
        }
        return p;
    }

    std::unique_ptr< MultivariateEvent > MultinomialSingularDistribution::simulate(unsigned int sum) const
    {
        double pi = 0.;
        Index component = 0, max_component = this->get_nb_components() - 1;
        std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(max_component + 1);
        while (component < max_component && sum > 0) {
            boost::binomial_distribution<> dist(sum, this->pi[component] / (1 - pi));
            boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(__impl::get_random_generator(), dist);
            int value = simulator();
            pi += this->pi[component];
            DiscreteElementaryEvent* uevent = new DiscreteElementaryEvent(value);
            event->set_event(component, uevent);
            delete uevent;
            sum -= value;
            ++component;
        }
        for (; component < max_component; ++component) {
            DiscreteElementaryEvent* uevent = new DiscreteElementaryEvent(0);
            event->set_event(component, uevent);
            delete uevent;
        }
        DiscreteElementaryEvent* uevent = new DiscreteElementaryEvent(sum);
        event->set_event(max_component, uevent);
        return std::move(event);
    }

    const Eigen::VectorXd& MultinomialSingularDistribution::get_pi() const
    {
        return this->pi;
    }

    void MultinomialSingularDistribution::set_pi(const Eigen::VectorXd& pi)
    {
        if (pi.rows() == this->pi.size() - 1) {
            Index j = 0; 
            while (j < pi.rows() && pi[j] >= 0.) { ++j; }
            if (j < pi.rows()) {
                throw parameter_error("pi", "contains negative values");
            } 
            double sum = pi.sum();
            if (sum < 1) {
                this->pi.block(0, 0, this->pi.size() - 1, 1) = pi / sum;
                this->pi[this->pi.size()-1] = 1 - sum;
            } else {
                throw parameter_error("pi", "last category values");
            }                
        } else if(pi.rows() == this->pi.size()) {
            Index j = 0; 
            while (j < pi.rows() && pi[j] >= 0.) {
                ++j;
            }
            if (j < pi.rows()) {
                throw parameter_error("pi", "contains negative values");
            } 
            this->pi = pi / pi.sum();
        } else {
            throw parameter_error("pi", "number of parameters");
        }
    }

    DirichletMultinomialSingularDistribution::DirichletMultinomialSingularDistribution(const Eigen::VectorXd& alpha)
    {
        this->alpha = Eigen::VectorXd::Zero(alpha.size());
        this->set_alpha(alpha);
    }

    DirichletMultinomialSingularDistribution::DirichletMultinomialSingularDistribution(const DirichletMultinomialSingularDistribution& splitting)
    {
        this->alpha = splitting.alpha;
    }

    DirichletMultinomialSingularDistribution::~DirichletMultinomialSingularDistribution()
    {}

    Index DirichletMultinomialSingularDistribution::get_nb_components() const
    {
        return this->alpha.size();
    }


    unsigned int DirichletMultinomialSingularDistribution::get_nb_parameters() const
    {
        return this->alpha.size();
    }

    double DirichletMultinomialSingularDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if (event && event->size() == this->get_nb_components()) {
            try {
                p = 0.;
                int sum = 0;
                for (Index component = 0, max_component = this->get_nb_components(); component < max_component; ++component) {
                    const UnivariateEvent* uevent = event->get_event(component);
                    if (uevent && uevent->get_outcome() == outcome_type::DISCRETE && uevent->get_censoring() == censoring_type::NONE) {
                        int value = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                        if (!(this->alpha[component] <= 0. && value == 0)) {
                            p += boost::math::lgamma(this->alpha[component] + value);
                            p -= boost::math::lgamma(this->alpha[component]) + boost::math::lgamma(value + 1);
                            sum += value;
                        }
                    }
                }
                double alpha = this->alpha.sum();
                p += boost::math::lgamma(sum + 1) + boost::math::lgamma(alpha) - boost::math::lgamma(alpha + sum);
            }
            catch (const std::exception& error) {
                p = log(0.);
            }
        } else {
            p = log(0.);
        }
        if (!logarithm) {
            p = exp(p);
        }
        return p;
    }

    std::unique_ptr< MultivariateEvent > DirichletMultinomialSingularDistribution::simulate(unsigned int sum) const
    {
        Eigen::VectorXd pi = Eigen::VectorXd::Zero(this->get_nb_components());
        for (Index component = 0, max_component = this->get_nb_components(); component < max_component; ++component) {
            boost::random::gamma_distribution<> dist(this->alpha(component), 1.);
            boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
            pi(component) = simulator(); 
        }
        pi /= pi.sum();
        double cum_pi = 0.;
        Index component = 0;
        Index max_component = this->get_nb_components() - 1;
        std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(max_component + 1);
        while (component < max_component && sum > 0) {
            boost::binomial_distribution<> dist(sum, pi[component] / (1 - cum_pi));
            boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(__impl::get_random_generator(), dist);
            int value = simulator();
            cum_pi += pi[component];
            DiscreteElementaryEvent* uevent = new DiscreteElementaryEvent(value);
            event->set_event(component, uevent);
            delete uevent;
            sum -= value;
            ++component;
        }
        for (; component < max_component; ++component) {
            DiscreteElementaryEvent* uevent = new DiscreteElementaryEvent(0);
            event->set_event(component, uevent);
            delete uevent;
        }
        DiscreteElementaryEvent* uevent = new DiscreteElementaryEvent(sum);
        event->set_event(max_component, uevent);
        delete uevent;
        return std::move(event);
    }

    const Eigen::VectorXd& DirichletMultinomialSingularDistribution::get_alpha() const
    {
        return this->alpha;
    }

    void DirichletMultinomialSingularDistribution::set_alpha(const Eigen::VectorXd& alpha)
    {
        if (alpha.rows() == this->alpha.size()) {
            Index j = 0; 
            while (j < alpha.rows() && alpha[j] >= 0.) {
                ++j;
            }
            if (j < alpha.rows()) {
                throw parameter_error("alpha", "contains negative values");
            } 
            this->alpha = alpha;
        } else {
            throw parameter_error("alpha", "number of parameters");
        }
    }

    MultinomialSingularDistributionEstimation::Estimator::Estimator()
    {}

    MultinomialSingularDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    MultinomialSingularDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< MultinomialSingularDistributionEstimation::Estimator::estimation_type > MultinomialSingularDistributionEstimation::Estimator::operator() (const data_type& data) const
    {
        this->check(data);
        Eigen::VectorXd pi = Eigen::VectorXd::Zero(data.get_nb_components());
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        while (generator->is_valid()) {
            for (Index component = 0, max_component = data.get_nb_components(); component < max_component; ++component) {
                const UnivariateEvent* event = generator->get_event(component);
                if (event && event->get_outcome() == outcome_type::DISCRETE && event->get_censoring() == censoring_type::NONE) {
                    pi[component] += generator->get_weight() * static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                }
            }
            ++(*generator);
        }
        return std::make_unique< MultinomialSingularDistributionEstimation >(data.copy().release(),
                                                                             new MultinomialSingularDistribution(pi));
    }

    DirichletMultinomialSingularDistributionEstimation::Estimator::Estimator() : PolymorphicCopy< Estimator, Optimization< SingularDistributionEstimation::Estimator > >()
    {}

    DirichletMultinomialSingularDistributionEstimation::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< Estimator, Optimization< SingularDistributionEstimation::Estimator > >(estimator)
    {}

    DirichletMultinomialSingularDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< SingularDistributionEstimation > DirichletMultinomialSingularDistributionEstimation::Estimator::operator() (const MultivariateData& data) const
    {
        double total = data.compute_total();
        Eigen::VectorXd prev;
        Eigen::VectorXd curr = Eigen::VectorXd::Ones(data.get_nb_components());
        DirichletMultinomialSingularDistribution* estimated = new DirichletMultinomialSingularDistribution(curr);
        std::unique_ptr< DirichletMultinomialSingularDistributionEstimation > estimation = std::make_unique< DirichletMultinomialSingularDistributionEstimation >(data.copy().release(),
                                                                                                                                                                  estimated);
        unsigned int its = 0;
        do {
            prev = curr;
            Eigen::VectorXd temp = Eigen::VectorXd::Zero(data.get_nb_components());
            for (Index component = 0, max_component = temp.size(); component < max_component; ++component) {
                std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                while (generator->is_valid()) {
                    const UnivariateEvent* event = generator->get_event(component);
                    if (event && event->get_outcome() == outcome_type::DISCRETE && event->get_censoring() == censoring_type::NONE) {
                        temp[component] += generator->get_weight() * boost::math::digamma(static_cast< const DiscreteElementaryEvent* >(event)->get_value() + prev[component]);
                    }
                    ++(*generator);
                }
                temp[component] -= total * boost::math::digamma(prev[component]);
            }
            std::pair< double, double > sums = std::make_pair(0., curr.sum());
            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
            while (generator->is_valid()) {
                int value = 0;
                for (Index component = 0, max_component = data.get_nb_components(); component < max_component; ++component) {
                    const UnivariateEvent* event = generator->get_event(component);
                    if (event && event->get_outcome() == outcome_type::DISCRETE && event->get_censoring() == censoring_type::NONE) {
                        value += static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                    }
                }
                sums.first += generator->get_weight() * boost::math::digamma(value + sums.second);
                ++(*generator);
            }
            sums.first -= total * boost::math::digamma(sums.second);
            temp /= sums.first;
            if (temp.minCoeff() >= 0.) { 
                curr = prev.cwiseProduct(temp);
                estimation->steps.push_back(curr); 
            }
            ++its;
        } while (this->run(its, __impl::reldiff(prev, curr)));
        estimated->set_alpha(curr);
        return estimation;
    }

    SplittingDistribution::SplittingDistribution()
    {
        this->sum = nullptr;
        this->singular = nullptr;
    }

    SplittingDistribution::SplittingDistribution(const DiscreteUnivariateDistribution& sum, const SingularDistribution& singular)
    {
        this->sum = nullptr;
        this->set_sum(sum);
        this->singular = nullptr;
        this->set_singular(singular);
    }

    SplittingDistribution::SplittingDistribution(const SplittingDistribution& splitting)
    {
        if (splitting.sum) {
            this->sum = static_cast< DiscreteUnivariateDistribution* >(splitting.sum->copy().release());
        } else {
            this->sum = nullptr;
        }
        if (splitting.singular) {
            this->singular = splitting.singular->copy().release();
        } else {
            this->singular = nullptr;
        }
    }

    SplittingDistribution::~SplittingDistribution()
    {
        if (this->sum) {
            delete this->sum;
            this->sum = nullptr;
        }
        if (this->singular) {
            delete this->singular;
            this->singular = nullptr;
        }
    }

    Index SplittingDistribution::get_nb_components() const
    {
        return this->singular->get_nb_components();
    }

    unsigned int SplittingDistribution::get_nb_parameters() const
    { return this->sum->get_nb_parameters() + this->singular->get_nb_parameters(); }

    double SplittingDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if (event && event->size() == this->get_nb_components()) {
            try {
                int sum = 0;
                for (Index component = 0, max_component = this->get_nb_components(); component < max_component; ++component) {
                    const UnivariateEvent* uevent = event->get_event(component);
                    if (uevent) {
                        if (uevent->get_outcome() == outcome_type::DISCRETE && uevent->get_censoring() == censoring_type::NONE) {
                            sum += static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                        } else {
                            throw std::exception();
                        }
                    }
                }  
                p = this->sum->ldf(sum) + this->singular->probability(event, logarithm);
            } catch (const std::exception& error) {
                p = log(0.);
            }
        } else {
            p = log(0.);
        }
        if (!logarithm) {
            p = exp(p);
        }
        return p;
    }

    std::unique_ptr< MultivariateEvent > SplittingDistribution::simulate() const
    {
        int sum = static_cast< DiscreteElementaryEvent* >(this->sum->simulate().get())->get_value();
        return this->singular->simulate(sum);
    }

    const DiscreteUnivariateDistribution* SplittingDistribution::get_sum() const
    {
        return this->sum;
    }
    
    void SplittingDistribution::set_sum(const DiscreteUnivariateDistribution& sum)
    { 
        if (sum.cdf(-1) > 0.) {
            throw parameter_error("sum", "must have a natural numbers subset as support");
        }
        if (this->sum) {
            delete this->sum;
        }
        this->sum = static_cast< DiscreteUnivariateDistribution* >(sum.copy().release()); 
    }

    SingularDistribution* SplittingDistribution::get_singular() const
    {
        return this->singular;
    }

    void SplittingDistribution::set_singular(const SingularDistribution& singular)
    {
        if (this->singular && !singular.get_nb_components() == this->get_nb_components()) {
            throw parameter_error("singular", "has not the required number of components");
        } 
        if (this->singular) {
            delete this->singular;
        }
        this->singular = singular.copy().release();
    }

    SplittingDistributionEstimation::SplittingDistributionEstimation(const SplittingDistributionEstimation& estimation) : PolymorphicCopy< SplittingDistributionEstimation, DiscreteMultivariateDistributionEstimation >(estimation)
    {
        if (estimation.sum) {
            this->sum = static_cast< DiscreteUnivariateDistributionEstimation* >(estimation.sum->copy().release());
        } else {
            this->sum = nullptr;
        }
        if (estimation.singular) {
            this->singular = estimation.singular->copy().release();
        } else {
            this->singular = nullptr;
        }
    }

    SplittingDistributionEstimation::~SplittingDistributionEstimation()
    {
        if (this->sum) {
            delete this->sum;
        }
        if (this->singular)
        {
            delete this->singular;
        }
    }

    const DiscreteUnivariateDistributionEstimation* SplittingDistributionEstimation::get_sum() const
    {
        return this->sum;
    }

    const SingularDistributionEstimation* SplittingDistributionEstimation::get_singular() const
    {
        return this->singular;
    }

    SplittingDistributionEstimation::Estimator::Estimator()
    {
        this->sum = nullptr;
        this->singular = nullptr;
    }

    SplittingDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        if (estimator.sum) {
            this->sum = static_cast< DiscreteUnivariateDistributionEstimation::Estimator* >(estimator.sum->copy().release());
        } else {
            this->sum = nullptr;
        }
        if (estimator.singular) {
            this->singular = estimator.singular->copy().release();
        } else {
            this->singular = nullptr;
        }    
    }

    SplittingDistributionEstimation::Estimator::~Estimator()
    {
        if(this->sum)
        {
            delete this->sum;
            this->sum = nullptr;
        }
        if(this->singular)
        {
            delete this->singular;
            this->singular = nullptr;
        }
    }

    std::unique_ptr< SplittingDistributionEstimation::Estimator::estimation_type > SplittingDistributionEstimation::Estimator::operator() (const data_type& data) const
    {
        UnivariateDataFrame sum_data = UnivariateDataFrame(get_NN());
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        while(generator->is_valid()) {
            int value = 0;
            for (Index component = 0, max_component = data.get_nb_components(); component < max_component; ++component) {
                const UnivariateEvent* event = generator->get_event(component);
                if (event && event->get_outcome() == outcome_type::DISCRETE && event->get_censoring() == censoring_type::NONE) {
                    value += static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                }
            }
            DiscreteElementaryEvent* sum_event = new DiscreteElementaryEvent(value);
            sum_data.add_event(sum_event);
            delete sum_event;
            ++(*generator);
        }
        WeightedUnivariateData weighted_sum_data = WeightedUnivariateData(sum_data);
        Index index = 0;
        generator = data.generator();
        while (generator->is_valid()) {
            weighted_sum_data.set_weight(index, generator->get_weight());
            ++index;
            ++(*generator);
        }
        DiscreteUnivariateDistributionEstimation* sum = static_cast< DiscreteUnivariateDistributionEstimation* >(((*this->sum)(weighted_sum_data)).release());
        SingularDistributionEstimation* singular = (*this->singular)(data).release();
        std::unique_ptr< SplittingDistributionEstimation > estimation = std::make_unique< SplittingDistributionEstimation >(data.copy().release(),
                                                                                                                            new SplittingDistribution(*(static_cast< const DiscreteUnivariateDistribution* >(sum->get_distribution())), *(singular->get_distribution())));
        estimation->sum = sum;
        estimation->singular = singular;
        return estimation;
    }

    const DiscreteUnivariateDistributionEstimation::Estimator* SplittingDistributionEstimation::Estimator::get_sum() const
    {
        return this->sum;
    }

    void  SplittingDistributionEstimation::Estimator::set_sum(const DiscreteUnivariateDistributionEstimation::Estimator& sum)
    {
        if (this->sum) {
            delete this->sum;
        }
        this->sum = static_cast< DiscreteUnivariateDistributionEstimation::Estimator* >(sum.copy().release());
    }

    const SingularDistributionEstimation::Estimator* SplittingDistributionEstimation::Estimator::get_singular() const
    {
        return this->singular;
    }

    void SplittingDistributionEstimation::Estimator::set_singular(const SingularDistributionEstimation::Estimator& singular)
    { 
        if (this->singular) {
            delete this->singular;
        }
        this->singular = static_cast< SingularDistributionEstimation::Estimator* >(singular.copy().release());
    }
}