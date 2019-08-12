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

    void CategoricalUnivariateDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        UnivariateDistributionEstimation::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::CATEGORICAL) {
            throw sample_space_error(outcome_type::CATEGORICAL);
        }
    }

    void DiscreteUnivariateDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        UnivariateDistributionEstimation::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::DISCRETE) {
            throw sample_space_error(outcome_type::DISCRETE);
        }
    }

    void ContinuousUnivariateDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        UnivariateDistributionEstimation::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::CONTINUOUS) {
            throw sample_space_error(outcome_type::CONTINUOUS);
        }
    }

    void CategoricalMultivariateDistributionEstimation::Estimator::check(const MultivariateData& data) const
    {
        MultivariateDistributionEstimation::Estimator::check(data);
        for (Index index = 0, max_index = data.get_nb_components(); index < max_index; ++index) {
            if (data.get_sample_space(index)->get_outcome() != outcome_type::CATEGORICAL) {
                throw sample_space_error(outcome_type::CATEGORICAL);
            }
        }
    }

    void DiscreteMultivariateDistributionEstimation::Estimator::check(const MultivariateData& data) const
    {
        MultivariateDistributionEstimation::Estimator::check(data);
        for (Index index = 0, max_index = data.get_nb_components(); index < max_index; ++index) {
            if (data.get_sample_space(index)->get_outcome() != outcome_type::DISCRETE) {
                throw sample_space_error(outcome_type::DISCRETE);
            }
        }
    }

    void ContinuousMultivariateDistributionEstimation::Estimator::check(const MultivariateData& data) const
    {
        MultivariateDistributionEstimation::Estimator::check(data);
        for (Index index = 0, max_index = data.get_nb_components(); index < max_index; ++index) {
            if (data.get_sample_space(index)->get_outcome() != outcome_type::CONTINUOUS) {
                throw sample_space_error(outcome_type::CONTINUOUS);
            }
        }
    }

    std::unique_ptr< UnivariateConditionalDistributionEstimation::Estimator::estimation_type > UnivariateConditionalDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Index& response, const Indices& explanatories) const
    {
        return this->operator()(*data.select(response), *data.select(explanatories));
    }

    void CategoricalUnivariateConditionalDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        UnivariateConditionalDistributionEstimation::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::CATEGORICAL) {
            throw sample_space_error(outcome_type::CATEGORICAL);
        }
    }

    void DiscreteUnivariateConditionalDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        UnivariateConditionalDistributionEstimation::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::DISCRETE) {
            throw sample_space_error(outcome_type::DISCRETE);
        }
    }

    void ContinuousUnivariateConditionalDistributionEstimation::Estimator::check(const UnivariateData& data) const
    {
        UnivariateConditionalDistributionEstimation::Estimator::check(data);
        if (data.get_sample_space()->get_outcome() != outcome_type::CONTINUOUS) {
            throw sample_space_error(outcome_type::CONTINUOUS);
        }
    }

    std::unique_ptr< MultivariateConditionalDistributionEstimation::Estimator::estimation_type > MultivariateConditionalDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Indices& responses, const Indices& explanatories) const
    {
        return this->operator()(*data.select(responses), *data.select(explanatories));
    }

    void CategoricalMultivariateConditionalDistributionEstimation::Estimator::check(const MultivariateData& data) const
    {
        MultivariateConditionalDistributionEstimation::Estimator::check(data);
        for (Index index = 0, max_index = data.get_nb_components(); index < max_index; ++index) {
            if (data.get_sample_space(index)->get_outcome() != outcome_type::CATEGORICAL) {
                throw sample_space_error(outcome_type::CATEGORICAL);
            }
        }
    }

    void DiscreteMultivariateConditionalDistributionEstimation::Estimator::check(const MultivariateData& data) const
    {
        MultivariateConditionalDistributionEstimation::Estimator::check(data);
        for (Index index = 0, max_index = data.get_nb_components(); index < max_index; ++index) {
            if (data.get_sample_space(index)->get_outcome() != outcome_type::DISCRETE) {
                throw sample_space_error(outcome_type::DISCRETE);
            }
        }
    }

    void ContinuousMultivariateConditionalDistributionEstimation::Estimator::check(const MultivariateData& data) const
    {
        MultivariateConditionalDistributionEstimation::Estimator::check(data);
        for (Index index = 0, max_index = data.get_nb_components(); index < max_index; ++index) {
            if (data.get_sample_space(index)->get_outcome() != outcome_type::CONTINUOUS) {
                throw sample_space_error(outcome_type::CONTINUOUS);
            }
        }
    }
}
