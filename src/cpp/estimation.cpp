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

    std::unique_ptr< UnivariateDistributionEstimation::Estimator::estimation_type > UnivariateDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Index& variable) const
    {
        return this->operator()(*data.select(variable));
    }

    void CategoricalUnivariateDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        DistributionEstimation< distribution_type >::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::CATEGORICAL) {
            throw sample_space_error(outcome_type::CATEGORICAL);
        }
    }

    void DiscreteUnivariateDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        DistributionEstimation< distribution_type >::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::DISCRETE) {
            throw sample_space_error(outcome_type::DISCRETE);
        }
    }

    void ContinuousUnivariateDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        DistributionEstimation< distribution_type >::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::CONTINUOUS) {
            throw sample_space_error(outcome_type::CONTINUOUS);
        }
    }

    std::unique_ptr< MultivariateDistributionEstimation::Estimator::estimation_type > MultivariateDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Indices& variables) const
    {
        return this->operator()(*data.select(variables));
    }

    std::unique_ptr< UnivariateConditionalDistributionEstimation::Estimator::estimation_type > UnivariateConditionalDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Index& response, const Indices& explanatories) const
    {
        return this->operator()(*data.select(response), *data.select(explanatories));
    }

    std::unique_ptr< MultivariateConditionalDistributionEstimation::Estimator::estimation_type > MultivariateConditionalDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Indices& responses, const Indices& explanatories) const
    {
        return this->operator()(*data.select(responses), *data.select(explanatories));
    }
}
