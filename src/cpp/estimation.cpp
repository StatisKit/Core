#include "estimation.h"

namespace statiskit
{
    sample_space_error::sample_space_error(const outcome_type& expected) : parameter_error("data", "expected " + __impl::to_string(expected) + " outcome")
    {}

    sample_size_error::sample_size_error(const unsigned int& minsize) : parameter_error("data", "must contains at least " + __impl::to_string(minsize) + " different observations")
    {}

    overdispersion_error::overdispersion_error() : parameter_error("data", " is overdispersed")
    {}

    underdispersion_error::underdispersion_error() : parameter_error("data", " is underdispersed")
    {}

    UnivariateDistributionEstimation::~UnivariateDistributionEstimation()
    {}

    UnivariateDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< estimation_type > UnivariateDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Index& variable, const bool& lazy=true) const
    {
        return (*this)(data.select(variable), lazy);
    }

    CategoricalUnivariateDistributionEstimation::Estimator::Estimator()
    {}

    CategoricalUnivariateDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    CategoricalUnivariateDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateDistributionEstimation > CategoricalUnivariateDistributionEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != CATEGORICAL)
        { throw statiskit::sample_space_error(CATEGORICAL); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        std::set< std::string > values;
        double total = data.compute_total();
        if(total > 0. && boost::math::isfinite(total))
        {
            const CategoricalSampleSpace* sample_space = static_cast< const CategoricalSampleSpace* >(data.get_sample_space());
            values = sample_space->get_values();
            Eigen::VectorXd masses = Eigen::VectorXd::Zero(values.size());
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            while(generator->is_valid())
            {
                auto event = generator->event();
                if(event)
                {
                    if(event->get_event() == ELEMENTARY)
                    {
                        std::set< std::string >::iterator it = values.find(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                        masses[distance(values.begin(), it)] += generator->weight() / total;
                    }
                }
                ++(*generator);
            }
            CategoricalUnivariateDistribution* distribution;
            switch(sample_space->get_ordering())
            {
                case NONE:
                case PARTIAL:
                    distribution = new NominalDistribution(values, masses);
                    break;
                case TOTAL:
                    distribution = new OrdinalDistribution(static_cast< const OrdinalSampleSpace* >(sample_space)->get_ordered(), masses);
                    break;
            }
            if(lazy)
            { estimation = std::make_unique< CategoricalUnivariateDistributionLazyEstimation >(distribution); }
            else
            { estimation = std::make_unique< CategoricalUnivariateDistributionActiveEstimation >(distribution, &data); }
        }
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > CategoricalUnivariateDistributionEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    MultivariateDistributionEstimation::~MultivariateDistributionEstimation()
    {}

    MultivariateDistributionEstimation::Estimator::~Estimator()
    {}

    UnivariateConditionalDistributionEstimation::~UnivariateConditionalDistributionEstimation()
    {}

    MultivariateConditionalDistributionEstimation::~MultivariateConditionalDistributionEstimation()
    {}
}
