#include "indicator.h"

namespace statiskit
{
    qualitative_sample_space_error::qualitative_sample_space_error() : parameter_error("data", "unexpected " + __impl::to_string(outcome_type::CATEGORICAL) + " outcome")
    {}

    UnivariateLocationEstimation::~UnivariateLocationEstimation()
    {}

    UnivariateLocationEstimation::Estimator::~Estimator()
    {}

    MultivariateLocationEstimation::~MultivariateLocationEstimation()
    {}

    MultivariateLocationEstimation::Estimator::~Estimator()
    {}

    UnivariateMeanEstimation::UnivariateMeanEstimation(const double& location)
    {
        this->location = location;
    }

    UnivariateMeanEstimation::UnivariateMeanEstimation(const UnivariateMeanEstimation& estimation)
    {
        this->location = estimation.location;
    }

    UnivariateMeanEstimation::~UnivariateMeanEstimation()
    {}
    
    const double& UnivariateMeanEstimation::get_location() const
    {
        return this->location;
    }

    UnivariateMeanEstimation::Estimator::Estimator()
    {}

    UnivariateMeanEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    UnivariateMeanEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateLocationEstimation > UnivariateMeanEstimation::Estimator::operator() (const UnivariateData& data) const
    {
        double total = data.compute_total();
        double location = 0.;
        std::unique_ptr< UnivariateLocationEstimation > estimation;
        if (total <= 0) {
            throw sample_size_error(1);
        }
        std::unique_ptr< UnivariateData::Generator > generator = data.generator();
        switch(data.get_sample_space()->get_outcome()) {
            case outcome_type::DISCRETE:
                while (generator->is_valid()) {
                    const UnivariateEvent* event = generator->get_event();
                    if (event && event->get_censoring() == censoring_type::NONE) {
                        location += generator->get_weight() * static_cast< const DiscreteElementaryEvent* >(event)->get_value() / total;
                    }
                    ++(*generator);
                }
                break;
            case outcome_type::CONTINUOUS:
                while (generator->is_valid()) {
                    const UnivariateEvent* event = generator->get_event();
                    if (event && event->get_censoring() == censoring_type::NONE) {
                        location += generator->get_weight() * static_cast< const ContinuousElementaryEvent* >(event)->get_value() / total;
                    }
                    ++(*generator);
                }
                break;
            default:
                location = std::numeric_limits< double >::quiet_NaN();
                break;
        }
        return std::make_unique< UnivariateMeanEstimation >(location);
    }

    MultivariateMeanEstimation::MultivariateMeanEstimation(const Eigen::VectorXd& location)
    {
        this->location = location;
    }

    MultivariateMeanEstimation::MultivariateMeanEstimation(const MultivariateMeanEstimation& estimation)
    {
        this->location = estimation.location;
    }

    MultivariateMeanEstimation::~MultivariateMeanEstimation()
    {}

    MultivariateMeanEstimation::Estimator::Estimator()
    {}

    MultivariateMeanEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    MultivariateMeanEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< MultivariateLocationEstimation > MultivariateMeanEstimation::Estimator::operator() (const MultivariateData& data) const
    {
        Eigen::VectorXd location = Eigen::VectorXd(data.get_nb_components());
        UnivariateMeanEstimation::Estimator estimator = UnivariateMeanEstimation::Estimator();
        for (Index index = 0, max_index = location.size(); index < max_index; ++index) {
            std::unique_ptr< UnivariateData > marginal = data.select(index);
            location(index) = estimator(*marginal)->get_location();
        }
        return std::make_unique< MultivariateMeanEstimation >(location);
    }

    const Eigen::VectorXd& MultivariateMeanEstimation::get_location() const
    {
        return this->location;
    }

    UnivariateDispersionEstimation::UnivariateDispersionEstimation(const double& location)
    {
        this->location = location;
    }

    UnivariateDispersionEstimation::UnivariateDispersionEstimation(const UnivariateDispersionEstimation& estimation)
    {
        this->location = estimation.location;
    }

    UnivariateDispersionEstimation::~UnivariateDispersionEstimation()
    {}

    const double& UnivariateDispersionEstimation::get_location() const
    {
        return this->location;
    }

    UnivariateDispersionEstimation::Estimator::~Estimator()
    {}

    MultivariateDispersionEstimation::MultivariateDispersionEstimation(const Eigen::VectorXd& location)
    {
        this->location = location;
    }

    MultivariateDispersionEstimation::MultivariateDispersionEstimation(const MultivariateDispersionEstimation& estimation)
    {
        this->location = estimation.location;
    }

    const Eigen::VectorXd& MultivariateDispersionEstimation::get_location() const
    {
        return this->location;
    }

    MultivariateDispersionEstimation::~MultivariateDispersionEstimation()
    {}

    MultivariateDispersionEstimation::Estimator::~Estimator()
    {}

    UnivariateVarianceEstimation::UnivariateVarianceEstimation(const double& location, const bool& bias, const double& dispersion) : PolymorphicCopy<UnivariateVarianceEstimation, UnivariateDispersionEstimation>(location)
    { 
        this->bias = bias;
        this->dispersion = dispersion;
    }

    UnivariateVarianceEstimation::UnivariateVarianceEstimation(const UnivariateVarianceEstimation& estimation) : PolymorphicCopy<UnivariateVarianceEstimation, UnivariateDispersionEstimation>(estimation)
    {
        this->bias = estimation.bias;
        this->dispersion = estimation.dispersion;
    }

    UnivariateVarianceEstimation::~UnivariateVarianceEstimation()
    {}

    const bool& UnivariateVarianceEstimation::get_bias() const
    {
        return this->bias;
    }

    const double& UnivariateVarianceEstimation::get_dispersion() const
    {
        return this->dispersion;
    }
    
    UnivariateVarianceEstimation::Estimator::Estimator()
    {
        this->bias = false;
    }

    UnivariateVarianceEstimation::Estimator::Estimator(const bool& bias)
    {
        this->bias = bias;
    }

    UnivariateVarianceEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        this->bias = estimator.bias;
    }

    UnivariateVarianceEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateDispersionEstimation > UnivariateVarianceEstimation::Estimator::operator() (const UnivariateData& data, const double& location) const
    { 
        double total = data.compute_total(), total_square = 0.;
        std::unique_ptr< UnivariateDispersionEstimation > estimation;
        if (total <= 0) {
            throw sample_size_error(1);
        }
        double dispersion = 0.;
        std::unique_ptr< UnivariateData::Generator > generator = data.generator();
        switch (data.get_sample_space()->get_outcome()) {
            case outcome_type::DISCRETE:
                while(generator->is_valid()) {
                    const UnivariateEvent* event = generator->get_event();
                    if (event && event->get_censoring() == censoring_type::NONE) { 
                        dispersion += generator->get_weight() * pow(static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location, 2) / total;
                        total_square += pow(generator->get_weight(), 2);
                    }
                    ++(*generator);
                }
                break;
            case outcome_type::CONTINUOUS:
                while (generator->is_valid()) {
                    const UnivariateEvent* event = generator->get_event();
                    if (event && event->get_censoring() == censoring_type::NONE) {
                        dispersion += generator->get_weight() * pow(static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location, 2)/ total;
                        total_square += pow(generator->get_weight(), 2);
                    }
                    ++(*generator);
                }
                break;
            default:
                dispersion = std::numeric_limits< double >::quiet_NaN();
                break;
        }
        if (!this->bias) {
            total *= total;
            dispersion *= total/(total - total_square);
        }
        return std::make_unique< UnivariateVarianceEstimation >(location, this->bias, dispersion);
    }

    const bool& UnivariateVarianceEstimation::Estimator::get_bias() const
    {
        return this->bias;
    }

    void UnivariateVarianceEstimation::Estimator::set_bias(const bool& bias)
    {
        this->bias = bias;
    }

    MultivariateVarianceEstimation::MultivariateVarianceEstimation(const Eigen::VectorXd& location, const Eigen::MatrixXd& dispersion, const bool& bias) : PolymorphicCopy<MultivariateVarianceEstimation, MultivariateDispersionEstimation>(location)
    { 
        this->dispersion = dispersion;
        this->bias = bias;
    }

    MultivariateVarianceEstimation::MultivariateVarianceEstimation(const MultivariateVarianceEstimation& estimation) : PolymorphicCopy<MultivariateVarianceEstimation, MultivariateDispersionEstimation>(estimation)
    {
        this->dispersion = estimation.dispersion;
        this->bias = estimation.bias;
    }

    MultivariateVarianceEstimation::~MultivariateVarianceEstimation()
    {}

    const bool& MultivariateVarianceEstimation::get_bias() const
    {
        return this->bias;
    }

    const Eigen::MatrixXd& MultivariateVarianceEstimation::get_dispersion() const
    {
        return this->dispersion;
    }

    MultivariateVarianceEstimation::Estimator::Estimator()
    {
        this->bias = false;
    }

    MultivariateVarianceEstimation::Estimator::Estimator(const bool& bias)
    {
        this->bias = bias;
    }

    MultivariateVarianceEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        this->bias = estimator.bias;
    }

    MultivariateVarianceEstimation::Estimator::~Estimator()
    {}
    
    std::unique_ptr< MultivariateDispersionEstimation > MultivariateVarianceEstimation::Estimator::operator() (const MultivariateData& data, const Eigen::VectorXd& location) const
    {
        Eigen::MatrixXd dispersion = Eigen::MatrixXd(location.size(), location.size());
        for (Index row = 0, max_row = location.size(); row < max_row; ++row) {
            dispersion(row, row) = compute(data, location, row, row);
            for (Index column = 0; column < row; ++column) {
                dispersion(row, column) = compute(data, location, row, column);
                dispersion(column, row) = dispersion(row, column);
            }
        }
        return std::make_unique< MultivariateVarianceEstimation >(location, dispersion, this->bias);
    }

    const bool& MultivariateVarianceEstimation::Estimator::get_bias() const
    {
        return this->bias;
    }

    void MultivariateVarianceEstimation::Estimator::set_bias(const bool& bias)
    {
        this->bias = bias;
    }

    double MultivariateVarianceEstimation::Estimator::compute(const MultivariateData& data, const Eigen::VectorXd& location, const Index& i, const Index& j) const
    {
        double codispersion = 0.;
        double total = 0.;
        double total_square = 0.;
        switch (data.get_sample_space(i)->get_outcome()) {
            case outcome_type::CATEGORICAL:
                codispersion = std::numeric_limits< double >::quiet_NaN();
                break;
            case outcome_type::DISCRETE:
                switch (data.get_sample_space(j)->get_outcome()) {
                    case outcome_type::CATEGORICAL:
                        codispersion = std::numeric_limits< double >::quiet_NaN();
                        break;
                    case outcome_type::DISCRETE:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while (generator->is_valid()) {
                                double local_codispersion = 0;
                                const UnivariateEvent* event = generator->get_event(i);
                                if (event && event->get_censoring() == censoring_type::NONE) { 
                                    local_codispersion = static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->get_event(j);
                                    if (event && event->get_censoring() == censoring_type::NONE) {
                                        local_codispersion *= static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += local_codispersion * generator->get_weight();
                                        total += generator->get_weight();
                                        total_square += pow(generator->get_weight(), 2);
                                    }
                                }
                                ++(*generator);
                            }
                        }
                        break;
                    case outcome_type::CONTINUOUS:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while (generator->is_valid()) {
                                double local_codispersion = 0;
                                const UnivariateEvent* event = generator->get_event(i);
                                if (event && event->get_censoring() == censoring_type::NONE) { 
                                    local_codispersion = static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->get_event(j);
                                    if(event && event->get_censoring() == censoring_type::NONE)
                                    {
                                        local_codispersion *= static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += local_codispersion * generator->get_weight();
                                        total += generator->get_weight();
                                        total_square += pow(generator->get_weight(), 2);
                                    }
                                }
                                ++(*generator);
                            }
                        }
                        break;
                }
                break;
            case outcome_type::CONTINUOUS:
                switch(data.get_sample_space(j)->get_outcome())
                {
                    case outcome_type::CATEGORICAL:
                        codispersion = std::numeric_limits< double >::quiet_NaN();
                        break;
                    case outcome_type::DISCRETE:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while (generator->is_valid()) {
                                double local_codispersion = 0;
                                const UnivariateEvent* event = generator->get_event(i);
                                if (event && event->get_censoring() == censoring_type::NONE) { 
                                    local_codispersion = static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->get_event(j);
                                    if (event && event->get_censoring() == censoring_type::NONE) {
                                        local_codispersion *= static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += local_codispersion * generator->get_weight();
                                        total += generator->get_weight();
                                        total_square += pow(generator->get_weight(), 2);
                                    }
                                }
                                ++(*generator);
                            }
                        }
                        break;
                    case outcome_type::CONTINUOUS:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while(generator->is_valid())
                            {
                                double local_codispersion = 0;
                                const UnivariateEvent* event = generator->get_event(i);
                                if(event && event->get_censoring() == censoring_type::NONE)
                                { 
                                    local_codispersion = static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->get_event(j);
                                    if (event && event->get_censoring() == censoring_type::NONE) {
                                        local_codispersion *= static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += local_codispersion * generator->get_weight();
                                        total += generator->get_weight();
                                        total_square += pow(generator->get_weight(), 2);
                                    }
                                }
                                ++(*generator);
                            }
                        }
                        break;
                }
                break;
        }
        codispersion /= total;
        if(!this->bias)
        { 
            total = pow(total, 2.);
            codispersion *= total / (total - total_square);
        }
        return codispersion;
    }
}
