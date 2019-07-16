#include "estimator.h"
#include "singular.h"

#include <boost/math/special_functions/digamma.hpp>

namespace statiskit
{    
    NominalDistributionEstimator::distribution_type* NominalDistributionEstimator::create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const
    {
        return new NominalDistribution(values, pi);
    }

    DiscreteUnivariateFrequencyDistributionEstimator::distribution_type* DiscreteUnivariateFrequencyDistributionEstimator::create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const
    {
        return new DiscreteUnivariateFrequencyDistribution(values, pi);
    }

    ContinuousUnivariateFrequencyDistributionEstimator::distribution_type* ContinuousUnivariateFrequencyDistributionEstimator::create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const
    {
        return new ContinuousUnivariateFrequencyDistribution(values, pi);
    }

    PoissonDistributionMLEstimation::Estimator::Estimator()
    {}

    PoissonDistributionMLEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    PoissonDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< PoissonDistributionMLEstimation::Estimator::estimation_type > PoissonDistributionMLEstimation::Estimator::operator() (const UnivariateData& data) const
    {
        this->check(data);
        UnivariateMeanEstimation::Estimator estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< UnivariateLocationEstimation > estimation = estimator(data);
        double mean = estimation->get_location(); 
        return std::make_unique< PoissonDistributionMLEstimation >(data.copy().release(), 
                                                                   new PoissonDistribution(mean));
    }

    BinomialDistributionMLEstimation::Estimator::Estimator() : PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >()
    { 
        this->force = false;
    }
    
    BinomialDistributionMLEstimation::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >(estimator)
    {
        this->force = estimator.force;
    }

    BinomialDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< BinomialDistributionMLEstimation::Estimator::estimation_type > BinomialDistributionMLEstimation::Estimator::operator() (const UnivariateData& data) const
    {
        this->check(data);
        UnivariateMeanEstimation::Estimator mean_estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< UnivariateLocationEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_location();
        UnivariateVarianceEstimation::Estimator variance_estimator = UnivariateVarianceEstimation::Estimator(false);
        std::unique_ptr< UnivariateDispersionEstimation > variance_estimation = variance_estimator(data, mean);
        double variance = variance_estimation->get_dispersion(); 
        if (variance > mean && !this->force) {
            throw overdispersion_error();
        }
        unsigned int kappa = std::max<int>(round(pow(mean, 2)/(mean - variance)), static_cast< DiscreteElementaryEvent* >(data.compute_maximum().get())->get_value());
        BinomialDistribution* binomial = new BinomialDistribution(kappa, mean/double(kappa));
        std::unique_ptr< BinomialDistributionMLEstimation > estimation = std::make_unique< BinomialDistributionMLEstimation >(binomial, &data);
        estimation->steps.push_back(kappa);
        double curr, prev = binomial->loglikelihood(data);
        unsigned int its = 1;
        --kappa;
        if(kappa > mean) {
            estimation->steps.push_back(kappa);
            binomial->set_kappa(kappa);
            binomial->set_pi(mean / double(kappa));
            curr = binomial->loglikelihood(data);
        } else {
            curr = prev;
        }
        if (curr > prev) {
            if (mean / (kappa - 1) >= 0.0 && mean / (kappa - 1) <= 1.0) {
                do {
                    prev = curr;
                    --kappa;
                    estimation->steps.push_back(kappa);
                    binomial->set_kappa(kappa);
                    binomial->set_pi(mean / double(kappa));
                    curr = binomial->loglikelihood(data);
                    ++its;
                } while (run(its, __impl::reldiff(prev, curr)) && curr > prev);
            }
            if (curr < prev) {
                ++kappa;
                estimation->steps.push_back(kappa);
                binomial->set_kappa(kappa);
                binomial->set_pi(mean / double(kappa));
            }
        } else {
            curr = prev;
            do {
                prev = curr;
                ++kappa;
                estimation->steps.push_back(kappa);
                binomial->set_kappa(kappa);
                binomial->set_pi(mean / double(kappa));
                curr = binomial->loglikelihood(data);
                ++its;
            } while (run(its, __impl::reldiff(prev, curr)) && curr > prev);
            if (curr < prev) {
                --kappa;
                estimation->steps.push_back(kappa);
                binomial->set_kappa(kappa);
                binomial->set_pi(mean / double(kappa));
            }
        }
        return estimation;
    }

    bool BinomialDistributionMLEstimation::Estimator::get_force() const
    {
        return this->force;
    }

    void BinomialDistributionMLEstimation::Estimator::set_force(const bool& force)
    {
        this->force = force;
    }

    BinomialDistributionMMEstimation::Estimator::Estimator()
    {
        this->location = new UnivariateMeanEstimation::Estimator();
        this->dispersion = new UnivariateVarianceEstimation::Estimator(false);
    }

    BinomialDistributionMMEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        this->location = estimator.location->copy().release();
        this->dispersion = estimator.dispersion->copy().release();
    }

    BinomialDistributionMMEstimation::Estimator::~Estimator()
    {
        delete this->location;
        delete this->dispersion;
    }

    std::unique_ptr< BinomialDistributionMMEstimation::Estimator::estimation_type > BinomialDistributionMMEstimation::Estimator::operator() (const UnivariateData& data) const
    {
        this->check(data);
        std::unique_ptr< UnivariateDistributionEstimation > estimation; 
        std::unique_ptr< UnivariateLocationEstimation > mean_estimation = (*this->location)(data);
        double mean = mean_estimation->get_location(); 
        std::unique_ptr< UnivariateDispersionEstimation > variance_estimation = (*this->dispersion)(data, mean);
        double variance = variance_estimation->get_dispersion(); 
        if (variance > mean) {
            throw overdispersion_error();
        }
        unsigned int kappa = std::max<int>(round(pow(mean, 2)/(mean - variance)), static_cast< DiscreteElementaryEvent* >(data.compute_maximum().get())->get_value());
        return std::make_unique< BinomialDistributionMMEstimation >(data.copy().release(),
                                                                    new BinomialDistribution(kappa, mean / double(kappa)));
    }

    UnivariateLocationEstimation::Estimator* BinomialDistributionMMEstimation::Estimator::get_location()
    {
        return this->location;
    }

    void BinomialDistributionMMEstimation::Estimator::set_location(const UnivariateLocationEstimation::Estimator& location)
    {
        this->location = location.copy().release();
    }

    UnivariateDispersionEstimation::Estimator* BinomialDistributionMMEstimation::Estimator::get_dispersion()
    {
        return this->dispersion;
    }

    void BinomialDistributionMMEstimation::Estimator::set_dispersion(const UnivariateDispersionEstimation::Estimator& dispersion)
    {
        this->dispersion = dispersion.copy().release();
    }

    LogarithmicDistributionMLEstimation::Estimator::Estimator() : PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >()
    {}

    LogarithmicDistributionMLEstimation::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >(estimator)
    {}

    LogarithmicDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< LogarithmicDistributionMLEstimation::Estimator::estimation_type > LogarithmicDistributionMLEstimation::Estimator::operator() (const UnivariateData& data) const
    {
        this->check(data);
        UnivariateMeanEstimation::Estimator mean_estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< UnivariateLocationEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_location();
        double theta = 1 + 2 * (mean - 1);
        if (theta <= 1) {
            throw parameter_error("data", " has a mean inferior or equal to 1");
        }
        theta = 1 - 1 / theta;
        LogarithmicDistribution* logarithmic = new LogarithmicDistribution(theta);
        std::unique_ptr< LogarithmicDistributionMLEstimation > estimation = std::make_unique< LogarithmicDistributionMLEstimation >(logarithmic, &data);
        estimation->steps.push_back(theta);
        double prev, curr = logarithmic->loglikelihood(data);
        unsigned int its = 0;
        do {
            prev = curr;
            theta = mean * log(1 - theta) / (mean * log(1 - theta) - 1);
            if (theta > 0. && theta < 1.) {
                estimation->steps.push_back(theta);
                logarithmic->set_theta(theta);
                curr = logarithmic->loglikelihood(data);
                ++its;
            }
        } while (run(its, __impl::reldiff(prev, curr)) && curr > prev);
        return estimation;
    }

    GeometricDistributionMLEstimation::Estimator::Estimator()
    {}

    GeometricDistributionMLEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    GeometricDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< GeometricDistributionMLEstimation::Estimator::estimation_type > GeometricDistributionMLEstimation::Estimator::operator() (const data_type& data) const
    {
        this->check(data);
        UnivariateMeanEstimation::Estimator mean_estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< UnivariateLocationEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_location(); 
        return std::make_unique< GeometricDistributionMLEstimation >(data.copy().release(),
                                                                     new GeometricDistribution(1 - 1 / mean));
    }

    NegativeBinomialDistributionMLEstimation::Estimator::Estimator() : PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >()
    {
        this->force = false;
    }
    
    NegativeBinomialDistributionMLEstimation::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >(estimator)
    {
        this->force = estimator.force;
    }

    NegativeBinomialDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< NegativeBinomialDistributionMLEstimation::Estimator::estimation_type > NegativeBinomialDistributionMLEstimation::Estimator::operator() (const UnivariateData& data) const
    {
        this->check(data);
        UnivariateMeanEstimation::Estimator mean_estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< UnivariateLocationEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_location();
        UnivariateVarianceEstimation::Estimator variance_estimator = UnivariateVarianceEstimation::Estimator(false);
        std::unique_ptr< UnivariateDispersionEstimation > variance_estimation = variance_estimator(data, mean);
        double variance = variance_estimation->get_dispersion();
        if (variance < mean && !this->force) {
            throw underdispersion_error();
        }
        double total = data.compute_total();
        double kappa;
        if (variance > mean) {
            kappa = pow(mean, 2)/(variance - mean);
        } else {
            kappa = 1.;
        }
        NegativeBinomialDistribution* negative_binomial = new NegativeBinomialDistribution(kappa, mean / (mean + kappa));
        std::unique_ptr< NegativeBinomialDistributionMLEstimation > estimation = std::make_unique< NegativeBinomialDistributionMLEstimation >(data.copy().release(),
                                                                                                                                              negative_binomial);
        estimation->steps.push_back(kappa);
        double prev;
        double curr = negative_binomial->loglikelihood(data);
        unsigned int its = 1;
        do {
            prev = curr;
            double alpha = 0;
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            while (generator->is_valid()) {
                const UnivariateEvent* event = generator->get_event();
                if (event && event->get_censoring() == censoring_type::NONE) {
                    for (int nu = 0, max_nu = static_cast< const DiscreteElementaryEvent* >(event)->get_value(); nu < max_nu; ++nu) {
                        alpha += nu / (nu + kappa);
                    }
                }
                ++(*generator);
            }
            alpha /= -total;
            alpha += mean;
            kappa = alpha / log(1 + mean/kappa);
            if (kappa > 0.) {
                estimation->steps.push_back(kappa);
                negative_binomial->set_kappa(kappa);
                negative_binomial->set_pi(mean / (mean + kappa));
                curr = negative_binomial->loglikelihood(data);
                ++its;
            }
        } while (run(its, __impl::reldiff(prev, curr)) && curr > prev);
        return estimation;
    }

    bool NegativeBinomialDistributionMLEstimation::Estimator::get_force() const
    {
        return this->force;
    }

    void NegativeBinomialDistributionMLEstimation::Estimator::set_force(const bool& force)
    {
        this->force = force;
    }

    NegativeBinomialDistributionMMEstimation::Estimator::Estimator()
    {
        this->location = new UnivariateMeanEstimation::Estimator();
        this->dispersion = new UnivariateVarianceEstimation::Estimator(false);
    }

    NegativeBinomialDistributionMMEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        this->location = estimator.location->copy().release();
        this->dispersion = estimator.dispersion->copy().release();
    }

    NegativeBinomialDistributionMMEstimation::Estimator::~Estimator()
    {
        delete this->location;
        delete this->dispersion;
    }

    std::unique_ptr< NegativeBinomialDistributionMMEstimation::Estimator::estimation_type > NegativeBinomialDistributionMMEstimation::Estimator::operator() (const data_type& data) const
    {
        this->check(data);
        std::unique_ptr< UnivariateDistributionEstimation > estimation; 
        std::unique_ptr< UnivariateLocationEstimation > mean_estimation = (*this->location)(data);
        double mean = mean_estimation->get_location(); 
        std::unique_ptr< UnivariateDispersionEstimation > variance_estimation = (*this->dispersion)(data, mean);
        double variance = variance_estimation->get_dispersion(); 
        if (variance < mean)
        { throw underdispersion_error(); }
        return std::make_unique< NegativeBinomialDistributionMMEstimation >(data.copy().release(),
                                                                            new NegativeBinomialDistribution(pow(mean, 2)/(variance - mean), 1. - mean/variance));
    }
    
    UnivariateLocationEstimation::Estimator* NegativeBinomialDistributionMMEstimation::Estimator::get_location()
    {
        return this->location;
    }

    void NegativeBinomialDistributionMMEstimation::Estimator::set_location(const UnivariateLocationEstimation::Estimator& mean)
    {
        this->location = mean.copy().release();
    }

    UnivariateDispersionEstimation::Estimator* NegativeBinomialDistributionMMEstimation::Estimator::get_dispersion()
    {
        return this->dispersion;
    }

    void NegativeBinomialDistributionMMEstimation::Estimator::set_dispersion(const UnivariateDispersionEstimation::Estimator& dispersion)
    {
        this->dispersion = dispersion.copy().release();
    }

    NormalDistributionMLEstimation::Estimator::Estimator()
    {}

    NormalDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< NormalDistributionMLEstimation::Estimator::estimation_type > NormalDistributionMLEstimation::Estimator::operator() (const data_type& data) const
    {
        this->check(data);
        UnivariateMeanEstimation::Estimator mean_estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< UnivariateLocationEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_location(); 
        UnivariateVarianceEstimation::Estimator variance_estimator = UnivariateVarianceEstimation::Estimator(false);
        std::unique_ptr< UnivariateDispersionEstimation > variance_estimation = variance_estimator(data, mean);
        double std_err = sqrt(variance_estimation->get_dispersion()); 
        return std::make_unique< NormalDistributionMLEstimation >(data.copy().release(),
                                                                  new NormalDistribution(mean, std_err));
    }

    UnivariateHistogramDistributionEstimation::Estimator::Estimator()
    {
        this->nb_bins = 0;
    }

    UnivariateHistogramDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        this->nb_bins = estimator.nb_bins;
    }

    UnivariateHistogramDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateHistogramDistributionEstimation::Estimator::estimation_type > UnivariateHistogramDistributionEstimation::Estimator::operator() (const data_type& data) const
    {
        this->check(data);
        std::set< double > bins = std::set< double >();
        double total = 0.;
        double min = std::numeric_limits< double >::infinity();
        double max = -1 * std::numeric_limits< double >::infinity();
        std::unique_ptr< UnivariateData::Generator > generator = data.generator();
        double nb_bins = 0;
        while (generator->is_valid()) {
            const UnivariateEvent* event = generator->get_event();
            if (event && event->get_censoring() == censoring_type::NONE) {
                const ContinuousElementaryEvent* cevent = static_cast< const ContinuousElementaryEvent* >(event);
                min = std::min(min, cevent->get_value());
                max = std::max(max, cevent->get_value());
                total += generator->get_weight(); 
                nb_bins += 1;                           
            }
            ++(*generator);
        }
        if (this->nb_bins != 0) {
            nb_bins = this->nb_bins;
        }
        bins.insert(min - .5 / total * (max - min));
        for (Index index = 1; index < nb_bins; ++index) {
            bins.insert(*(bins.rbegin()) + 1. / nb_bins * (max-min));
        }
        bins.insert(max + .5 / nb_bins * (max - min));
        std::vector< double > lengths = std::vector< double >(bins.size()-1, 0.);
        std::set< double >::iterator itl = bins.begin();
        std::set< double >::iterator it_end = bins.end();
        std::set< double >::iterator itr = itl;
        ++itr;
        while (itr != it_end) {
            lengths[distance(bins.begin(), itl)] = *itr - *itl;
            ++itl;
            ++itr;
        }
        std::vector< double > densities = std::vector< double >(bins.size()-1, 0.);
        std::set< double >::iterator it;
        generator = data.generator();
        while (generator->is_valid()) {
            const UnivariateEvent* event = generator->get_event();
            if (event) {
                if (event->get_censoring() == censoring_type::NONE) {
                    it = bins.upper_bound(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                    if (it == bins.end()){
                        densities.back() += generator->get_weight() / (lengths.back() * total);
                    } else if(it == bins.begin()) {
                        densities.front() += generator->get_weight() / (lengths.front() * total);
                    } else {
                        densities[distance(bins.begin(), it) - 1] += generator->get_weight() /(lengths[distance(bins.begin(), it) - 1] * total);
                    }
                }
            }
            ++(*generator);
        }
        return std::make_unique< UnivariateHistogramDistributionEstimation >(data.copy().release(),
                                                                             new UnivariateHistogramDistribution(bins, densities));
    }

    const unsigned int& UnivariateHistogramDistributionEstimation::Estimator::get_nb_bins() const
    {
        return this->nb_bins;
    }

    void UnivariateHistogramDistributionEstimation::Estimator::set_nb_bins(const unsigned int& nb_bins)
    {
        this->nb_bins = nb_bins;
    }

    RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::Estimator()
    {
        this->maxbins = 100;
    }

    RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::Estimator(const Estimator& estimator)
    {
        this->maxbins = estimator.maxbins;
    }

    RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::~Estimator()
    {}

    std::unique_ptr< RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::estimation_type > RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::operator() (const UnivariateData& data) const
    {
        this->check(data);
        std::unique_ptr< RegularUnivariateHistogramDistributionSlopeHeuristicSelection > estimation = std::make_unique< RegularUnivariateHistogramDistributionSlopeHeuristicSelection >(data.copy().release());
        std::set< double > bins = std::set< double >();
        UnivariateHistogramDistributionEstimation::Estimator estimator = UnivariateHistogramDistributionEstimation::Estimator();
        for (Index nb_bins = this->maxbins; nb_bins > 0; --nb_bins) {
            estimator.set_nb_bins(nb_bins);
            try {
                std::unique_ptr< estimation_type > local_estimation = estimator(data);
                UnivariateHistogramDistribution* distribution = const_cast< UnivariateHistogramDistribution* >(static_cast< const UnivariateHistogramDistribution* >(local_estimation->get_distribution()));
                estimation->add(distribution->get_nb_parameters(), distribution->loglikelihood(data), static_cast< UnivariateHistogramDistribution* >(distribution->copy().release()));
            } catch (const std::exception& error) {
            }
        }
        estimation->finalize();
        return estimation;
    }

    const unsigned int& RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_maxbins() const
    {
        return this->maxbins;
    }

    void RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_maxbins(const unsigned int& maxbins)
    {
        if (maxbins == 0) {
            throw statiskit::lower_bound_error("maxbins", 0, 0, true);
        }
        this->maxbins = maxbins;
    }

    IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::Estimator()
    {
        this->maxbins = 100; 
        this->constant = 1.;
    }

    IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::Estimator(const Estimator& estimator)
    { 
        this->maxbins = estimator.maxbins;
        this->constant = estimator.constant;
    }

    IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::~Estimator()
    {}

    std::unique_ptr< IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::estimation_type > IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::operator() (const data_type& data) const
    {
        this->check(data);
        std::unique_ptr< IrregularUnivariateHistogramDistributionSlopeHeuristicSelection > estimation = std::make_unique< IrregularUnivariateHistogramDistributionSlopeHeuristicSelection >(data.copy().release());
        std::set< double > bins = std::set< double >();
        unsigned int elements = 0;
        double total = 0., min = std::numeric_limits< double >::infinity(), max = -1 * std::numeric_limits< double >::infinity();
        std::unique_ptr< UnivariateData::Generator > generator = data.generator();
        while (generator->is_valid()) {
            const UnivariateEvent* event = generator->get_event();
            if (event && event->get_censoring() == censoring_type::NONE) {
                const ContinuousElementaryEvent* cevent = static_cast< const ContinuousElementaryEvent* >(event);
                min = std::min(min, cevent->get_value());
                max = std::max(max, cevent->get_value());
                total += generator->get_weight();    
            }
            ++(*generator);
        }
        bins.insert(min - .5 / this->maxbins * (max - min));
        for (Index index = 1; index < this->maxbins; ++index) {
            bins.insert(*(bins.rbegin()) + 1. / this->maxbins * (max-min));
        }
        bins.insert(max + .5 / this->maxbins * (max - min));
        std::vector< double > lengths = std::vector< double >(bins.size()-1, 0.);
        std::set< double >::iterator itl = bins.begin(), itr, it_end = bins.end();
        itr = itl;
        ++itr;
        while (itr != it_end) {
            lengths[distance(bins.begin(), itl)] = *itr - *itl;
            ++itl;
            ++itr;
        }
        std::vector< double > densities = std::vector< double >(bins.size()-1, 0.);
        std::set< double >::iterator it;
        generator = data.generator();
        while (generator->is_valid()) {
            const UnivariateEvent* event = generator->get_event();
            if (event && event->get_censoring() == censoring_type::NONE) {
                it = bins.upper_bound(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                if (it == bins.end()) {
                    densities.back() += generator->get_weight() /(lengths.back() * total);
                } else if(it == bins.begin()) {
                    densities.front() +=  generator->get_weight() /(lengths.front() * total);
                } else {
                    densities[distance(bins.begin(), it) - 1] += generator->get_weight() /(lengths[distance(bins.begin(), it) - 1] * total);
                }
            }
            ++(*generator);
        }
        std::vector< double > entropies = std::vector< double >(densities.size()-1, std::numeric_limits< double >::quiet_NaN());
        for (Index index = 0, max_index = densities.size()-1; index < max_index; ++index) {
            entropies[index] = 0;
            if (densities[index] > 0.) {
                entropies[index] += lengths[index] * densities[index] * log(densities[index]);
            }
            if (densities[index + 1] > 0.) {
                entropies[index] += lengths[index + 1] * densities[index + 1] * log(densities[index + 1]);
            }
            double p = (lengths[index] * densities[index] + lengths[index + 1] * densities[index+1]) / (lengths[index] + lengths[index + 1]);
            if (p > 0.) {
                entropies[index] -= (lengths[index] + lengths[index + 1]) * p * log(p);
            } else {
                entropies[index] = std::numeric_limits< double >::infinity();
            }
        }
        double score = 0.;
        while (bins.size() > 2) {
            std::vector< double >::iterator it = std::min_element(entropies.begin(), entropies.end()), itr;
            if (*it > 0) {
                score -= *it;
                // if(bins.size() < this->maxbins)
                // {
                    UnivariateHistogramDistribution* current = new UnivariateHistogramDistribution(bins, densities);
                    double penshape = bins.size()-1;
                    penshape = penshape * (1 + this->constant * log(this->maxbins) - this->constant * log(penshape));
                    estimation->add(penshape, score, current);
                // }
            }
            itr = it;
            ++itr;
            densities[distance(entropies.begin(), itr)] = lengths[distance(entropies.begin(), it)] * densities[distance(entropies.begin(), it)] + lengths[distance(entropies.begin(), itr)] * densities[distance(entropies.begin(), itr)];
            densities[distance(entropies.begin(), itr)] /= lengths[distance(entropies.begin(), it)] + lengths[distance(entropies.begin(), itr)];
            lengths[distance(entropies.begin(), itr)] = lengths[distance(entropies.begin(), it)] + lengths[distance(entropies.begin(), itr)];
            std::vector< double >::iterator itd = densities.begin();
            advance(itd, distance(entropies.begin(), it));
            densities.erase(itd);
            std::vector< double >::iterator itl = lengths.begin();
            advance(itl, distance(entropies.begin(), it));
            lengths.erase(itl);
            std::set< double >::iterator itb = bins.begin();
            advance(itb, distance(entropies.begin(), itr));
            bins.erase(itb);
            // TODO optimize
            entropies = std::vector< double >(densities.size()-1, std::numeric_limits< double >::quiet_NaN());
            for (Index index = 0, max_index = densities.size()-1; index < max_index; ++index) { 
                entropies[index] = 0;
                if (densities[index] > 0.) {
                    entropies[index] += lengths[index] * densities[index] * log(densities[index]);
                }
                if (densities[index + 1] > 0.) {
                    entropies[index] += lengths[index + 1] * densities[index + 1] * log(densities[index + 1]);
                }
                double p = (lengths[index] * densities[index] + lengths[index + 1] * densities[index+1]) / (lengths[index] + lengths[index + 1]);
                if (p > 0.) {
                    entropies[index] -= (lengths[index] + lengths[index + 1]) * p * log(p);
                } else {
                    entropies[index] = std::numeric_limits< double >::infinity();
                }
            }
        }
        estimation->finalize();
        return estimation;
    }

    const unsigned int& IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_maxbins() const
    {
        return this->maxbins;
    }

    void IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_maxbins(const unsigned int& maxbins)
    {
        if (maxbins == 0) {
            throw statiskit::lower_bound_error("maxbins", 0, 0, true);
        }
        this->maxbins = maxbins;
    }
    
    const double& IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_constant() const
    {
        return this->constant;
    }

    void IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_constant(const double& constant)
    {
        if (constant <= 0.) {
            throw statiskit::lower_bound_error("constant", constant, 0.0, true);
        }
        this->constant = constant;
    }

    NegativeMultinomialDistributionEstimation::WZ99Estimator::WZ99Estimator() : PolymorphicCopy<WZ99Estimator, DiscreteMultivariateDistributionEstimation::Estimator>()
    {}

    NegativeMultinomialDistributionEstimation::WZ99Estimator::WZ99Estimator(const WZ99Estimator& estimator) : PolymorphicCopy<WZ99Estimator, DiscreteMultivariateDistributionEstimation::Estimator>(estimator)
    {}

    NegativeMultinomialDistributionEstimation::WZ99Estimator::~WZ99Estimator()
    {}

    std::unique_ptr< NegativeMultinomialDistributionEstimation::WZ99Estimator::estimation_type > NegativeMultinomialDistributionEstimation::WZ99Estimator::operator() (const data_type& data) const
    {
        this->check(data);
        MultivariateMeanEstimation::Estimator mean_estimator = MultivariateMeanEstimation::Estimator();
        std::unique_ptr< MultivariateLocationEstimation > mean_estimation = mean_estimator(data);
        Eigen::VectorXd mean = mean_estimation->get_location();
        MultivariateVarianceEstimation::Estimator covariance_estimator = MultivariateVarianceEstimation::Estimator();
        std::unique_ptr< MultivariateDispersionEstimation > covariance_estimation = covariance_estimator(data, mean);
        Eigen::MatrixXd covariance = covariance_estimation->get_dispersion();
        double total = data.compute_total();
        double location = mean.sum();
        double variance = 0.;
        unsigned int nb_components = data.get_nb_components();
        for (Index line = 0, max_line = nb_components; line < max_line; ++line) {
            for (Index column = 0; column <= line; ++column) {
                variance += covariance(line, column );
            }
        }
        double kappa;
        if (variance > location) {
            kappa = pow(location, 2)/(variance - location);
        } else {
            kappa = 1.;
        }
        double q =  location / (location + kappa);
        NegativeBinomialDistribution negative_binomial = NegativeBinomialDistribution(kappa, 1. - q);
        SplittingDistribution* negative_multinomial = new SplittingDistribution(negative_binomial, MultinomialSingularDistribution(mean * q / kappa));
        std::unique_ptr< NegativeMultinomialDistributionEstimation > estimation = std::make_unique< NegativeMultinomialDistributionEstimation >(data.copy().release(),
                                                                                                                                                negative_multinomial);
        estimation->steps.push_back(kappa);
        double prev;
        double curr = kappa;
        unsigned int its = 1;
        double chisq = 0.;
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        while (generator->is_valid()) {
            for (Index index = 0, max_index = nb_components; index < max_index; ++index) {
                const UnivariateEvent* event = generator->get_event(index); 
                if (event && event->get_censoring() == censoring_type::NONE) {
                    chisq += generator->get_weight() / total * pow(static_cast< const DiscreteElementaryEvent* >(event)->get_value() - mean(index), 2.) / mean(index);
                }
            }
            ++(*generator);
        }        
        do {
            prev = curr;
            double local_chisq = 0;
            generator = data.generator();
            while (generator->is_valid()) {
                for (Index index = 0, max_index = nb_components; index < max_index; ++index) {
                    const UnivariateEvent* event = generator->get_event(index); 
                    if (event && event->get_censoring() == censoring_type::NONE) {
                        local_chisq += generator->get_weight() / total * pow(static_cast< const DiscreteElementaryEvent* >(event)->get_value() - mean(index), 2.) / (mean(index) * (1 + mean(index) / kappa));
                    }
                }
                ++(*generator);
            }    
            kappa *= chisq / local_chisq;
            if (kappa > 0.) {
                estimation->steps.push_back(kappa);
                negative_binomial.set_kappa(kappa);
                q =  location / (location + kappa);
                negative_binomial.set_pi(1. - q);
                negative_multinomial->set_sum(negative_binomial);
                static_cast< MultinomialSingularDistribution* >(negative_multinomial->get_singular())->set_pi(mean * q / kappa);
                curr = kappa;
                ++its;
            }
        } while (this->run(its, __impl::reldiff(prev, curr)));
        return estimation;
    }
}
