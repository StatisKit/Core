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
            double weight = generator->weight();
            if (weight > 0.) {
                llh += weight * this->probability(generator->event(), true);
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
                    const UnivariateEvent* uevent = event->get(component);
                    if (uevent) {
                        if (uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY) {
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
            } catch(const std::exception& error) {
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
            event->set(component, DiscreteElementaryEvent(value));
            sum -= value;
            ++component;
        }
        for (; component < max_component; ++component) {
            event->set(component, DiscreteElementaryEvent(0));
        }
        event->set(max_component, DiscreteElementaryEvent(sum));
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
                    const UnivariateEvent* uevent = event->get(component);
                    if (uevent) {
                        if (uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY) {
                            int value = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                            if (!(this->alpha[component] <= 0. && value == 0)) {
                                p += boost::math::lgamma(this->alpha[component] + value);
                                p -= boost::math::lgamma(this->alpha[component]) + boost::math::lgamma(value + 1);
                                sum += value;
                            }
                        } else {
                            throw std::exception();
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
        Eigen::VectorXd this->pi = Eigen::VectorXd::Zero(this->get_nb_components());
        for (Index component = 0, max_component = this->get_nb_components(); component < max_component; ++component) {
            boost::random::gamma_distribution<> dist(this->alpha(component), 1.);
            boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
            this->pi(component) = simulator(); 
        }
        this->pi /= this->pi.sum();
        double pi = 0.;
        Index component = 0, max_component = this->get_nb_components() - 1;
        std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(max_component + 1);
        while (component < max_component && sum > 0) {
            boost::binomial_distribution<> dist(sum, this->pi[component] / (1 - pi));
            boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(__impl::get_random_generator(), dist);
            int value = simulator();
            pi += this->pi[component];
            event->set(component, DiscreteElementaryEvent(value));
            sum -= value;
            ++component;
        }
        for (; component < max_component; ++component) {
            event->set(component, DiscreteElementaryEvent(0));
        }
        event->set(max_component, DiscreteElementaryEvent(sum));
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

    SingularDistributionEstimation::~SingularDistributionEstimation()
    {}

    SingularDistributionEstimation::Estimator::~Estimator()
    {}

    MultinomialSingularDistributionEstimation::MultinomialSingularDistributionEstimation(MultinomialSingularDistribution const * estimated, MultivariateData const * data) : ActiveEstimation< MultinomialSingularDistribution, SingularDistributionEstimation >(estimated, data)
    {}

    MultinomialSingularDistributionEstimation::MultinomialSingularDistributionEstimation(const MultinomialSingularDistributionEstimation& estimation) : ActiveEstimation< MultinomialSingularDistribution, SingularDistributionEstimation >(estimation)
    {}

    MultinomialSingularDistributionEstimation::~MultinomialSingularDistributionEstimation()
    {}

    MultinomialSingularDistributionEstimation::Estimator::Estimator()
    {}

    MultinomialSingularDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    MultinomialSingularDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< SingularDistributionEstimation > MultinomialSingularDistributionEstimation::Estimator::operator() (const MultivariateData& data) const
    {
        std::unique_ptr< SingularDistributionEstimation > estimation;
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        Eigen::VectorXd pi = Eigen::VectorXd::Zero(generator->event()->size());
        while(generator->is_valid())
        {
            const MultivariateEvent* mevent = generator->event();
            for(Index component = 0, max_component = mevent->size(); component < max_component; ++component)
            {
                const UnivariateEvent* uevent = mevent->get(component);
                if(uevent && uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                { pi[component] += generator->weight() * static_cast< const DiscreteElementaryEvent* >(uevent)->get_value(); }
            }
            ++(*generator);
        }
        MultinomialSingularDistribution* estimated = new MultinomialSingularDistribution(pi);
        if(lazy)
        { estimation = std::make_unique< LazyEstimation< MultinomialSingularDistribution, SingularDistributionEstimation > >(estimated); }
        else
        { estimation = std::make_unique< MultinomialSingularDistributionEstimation >(estimated, &data); }
        return estimation;
    }

    DirichletMultinomialSingularDistributionEstimation::DirichletMultinomialSingularDistributionEstimation(DirichletMultinomialSingularDistribution const * estimated, MultivariateData const * data) : OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSingularDistribution, SingularDistributionEstimation >(estimated, data)
    {}

    DirichletMultinomialSingularDistributionEstimation::DirichletMultinomialSingularDistributionEstimation(const DirichletMultinomialSingularDistributionEstimation& estimation) : OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSingularDistribution, SingularDistributionEstimation >(estimation)
    {}

    DirichletMultinomialSingularDistributionEstimation::~DirichletMultinomialSingularDistributionEstimation()
    {}

    DirichletMultinomialSingularDistributionEstimation::Estimator::Estimator() : PolymorphicCopy<SingularDistributionEstimation::Estimator, Estimator, OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSingularDistribution, SingularDistributionEstimation >::Estimator >() 
    {}

    DirichletMultinomialSingularDistributionEstimation::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy<SingularDistributionEstimation::Estimator, Estimator, OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSingularDistribution, SingularDistributionEstimation >::Estimator >(estimator)
    {}

    DirichletMultinomialSingularDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< SingularDistributionEstimation > DirichletMultinomialSingularDistributionEstimation::Estimator::operator() (const MultivariateData& data) const
    {
        std::unique_ptr< SingularDistributionEstimation > estimation;
        double total = data.compute_total();
        Eigen::VectorXd prev, curr = Eigen::VectorXd::Ones(data.get_sample_space()->size());
        DirichletMultinomialSingularDistribution* estimated = new DirichletMultinomialSingularDistribution(curr);
        if(lazy)
        { estimation = std::make_unique< LazyEstimation< DirichletMultinomialSingularDistribution, SingularDistributionEstimation > >(estimated); }
        else
        { estimation = std::make_unique< DirichletMultinomialSingularDistributionEstimation >(estimated, &data); }
        unsigned int its = 0;
        do
        {
            prev = curr;
            Eigen::VectorXd temp = Eigen::VectorXd::Zero(data.get_sample_space()->size());
            for(Index component = 0, max_component = data.get_sample_space()->size(); component < max_component; ++component)
            {
                std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                while(generator->is_valid())
                {
                    const MultivariateEvent* mevent = generator->event();
                    if(mevent)
                    {
                        const UnivariateEvent* uevent = mevent->get(component);
                        if(uevent && uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                        { temp[component] += generator->weight() * boost::math::digamma(static_cast< const DiscreteElementaryEvent* >(uevent)->get_value() + prev[component]); }
                    }
                    ++(*generator);
                }
                temp[component] -= total * boost::math::digamma(prev[component]);
            }
            std::pair< double, double > sums = std::make_pair(0., curr.sum());
            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
            while(generator->is_valid())
            {
                const MultivariateEvent* event = generator->event();
                if(event)
                {
                    int value = 0;
                    for(Index component = 0, max_component = data.get_sample_space()->size(); component < max_component; ++component)
                    {
                        const UnivariateEvent* uevent = event->get(component);
                        if(uevent && uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                        { value += static_cast< const DiscreteElementaryEvent* >(uevent)->get_value(); }
                    }
                    sums.first += generator->weight() * boost::math::digamma(value + sums.second);
                }
                ++(*generator);
            }
            sums.first -= total * boost::math::digamma(sums.second);
            temp /= sums.first;
            if(temp.minCoeff() >= 0.)
            { 
                curr = prev.cwiseProduct(temp);
                if(!lazy)
                { static_cast< DirichletMultinomialSingularDistributionEstimation* >(estimation.get())->_iterations.push_back(curr); }
            }
            ++its;
        } while(run(its, __impl::reldiff(prev, curr)));
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

    SplittingDistributionEstimation::SplittingDistributionEstimation(SplittingDistribution const * estimated, MultivariateData const * data) : ActiveEstimation< SplittingDistribution, DiscreteMultivariateDistributionEstimation >(estimated, data)
    {
        _sum = nullptr;
        _singular = nullptr;
    }

    SplittingDistributionEstimation::SplittingDistributionEstimation(const SplittingDistributionEstimation& estimation) : ActiveEstimation< SplittingDistribution, DiscreteMultivariateDistributionEstimation >(estimation)
    {
        _sum = estimation._sum;
        _singular = estimation._singular;
    }

    SplittingDistributionEstimation::~SplittingDistributionEstimation()
    {
        if(_sum)
        { delete _sum; }
        if(_singular)
        { delete _singular; }
    }

    const DiscreteUnivariateDistributionEstimation* SplittingDistributionEstimation::get_sum() const
    { return _sum; }

    const SingularDistributionEstimation* SplittingDistributionEstimation::get_singular() const
    { return _singular; }

    SplittingDistributionEstimation::Estimator::Estimator()
    {
        _sum = nullptr;
        _singular = nullptr;
    }

    SplittingDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        if(estimator._sum)
        { _sum = static_cast< DiscreteUnivariateDistributionEstimation::Estimator* >((estimator._sum->copy()).release()); }
        else
        { _sum = nullptr; }
        if(estimator._singular)
        { _singular = estimator._singular->copy().release(); }
        else
        { _singular = nullptr; }    
    }

    SplittingDistributionEstimation::Estimator::~Estimator()
    {
        if(_sum)
        {
            delete _sum;
            _sum = nullptr;
        }
        if(_singular)
        {
            delete _singular;
            _singular = nullptr;
        }
    }

    std::unique_ptr< MultivariateDistributionEstimation > SplittingDistributionEstimation::Estimator::operator() (const MultivariateData& data) const
    {
        UnivariateDataFrame* sum_data = new UnivariateDataFrame(get_NN());
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        while(generator->is_valid())
        {
            int value = 0;
            const MultivariateEvent* mevent = generator->event();
            for(Index component = 0, max_component = mevent->size(); component < max_component; ++component)
            {
                const UnivariateEvent* uevent = mevent->get(component);
                if(uevent && uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                { value += static_cast< const DiscreteElementaryEvent* >(uevent)->get_value(); }
            }
            DiscreteElementaryEvent* sum_event = new DiscreteElementaryEvent(value);
            sum_data->add_event(sum_event);
            ++(*generator);
        }
        WeightedUnivariateData weighted_sum_data = WeightedUnivariateData(sum_data);
        Index index = 0;
        generator = data.generator();
        while(generator->is_valid())
        {
            weighted_sum_data.set_weight(index, generator->weight());
            ++index;
            ++(*generator);
        }
        DiscreteUnivariateDistributionEstimation* sum = static_cast< DiscreteUnivariateDistributionEstimation* >(((*_sum)(weighted_sum_data, lazy)).release());
        delete sum_data;
        SingularDistributionEstimation* singular = (*_singular)(data, lazy).release();
        SplittingDistribution* estimated = new SplittingDistribution(*(static_cast< const DiscreteUnivariateDistribution* >(sum->get_estimated())), *(singular->get_estimated()));
        std::unique_ptr< MultivariateDistributionEstimation > estimation;
        if(lazy)
        { 
            estimation = std::make_unique< LazyEstimation< SplittingDistribution, DiscreteMultivariateDistributionEstimation > >(estimated);
            if(sum)
            { delete sum; }
            if(singular)
            { delete singular; }
        }
        else
        {
            estimation = std::make_unique< SplittingDistributionEstimation >(estimated, &data);
            static_cast< SplittingDistributionEstimation* >(estimation.get())->_sum = sum;
            static_cast< SplittingDistributionEstimation* >(estimation.get())->_singular = singular;
        }
        return estimation;
    }

    const DiscreteUnivariateDistributionEstimation::Estimator* SplittingDistributionEstimation::Estimator::get_sum() const
    { return _sum; }

    void  SplittingDistributionEstimation::Estimator::set_sum(const DiscreteUnivariateDistributionEstimation::Estimator& sum)
    {
        if(_sum)
        { delete _sum; }
        _sum = static_cast< DiscreteUnivariateDistributionEstimation::Estimator* >(sum.copy().release());
    }

    const SingularDistributionEstimation::Estimator* SplittingDistributionEstimation::Estimator::get_singular() const
    { return _singular; }

    void SplittingDistributionEstimation::Estimator::set_singular(const SingularDistributionEstimation::Estimator& singular)
    { 
        if(_singular)
        { delete _singular; }
        _singular = static_cast< SingularDistributionEstimation::Estimator* >(singular.copy().release());
    }
}