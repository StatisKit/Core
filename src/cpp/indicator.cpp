#include "indicator.h"

namespace statiskit
{
    qualitative_sample_space_error::qualitative_sample_space_error() : parameter_error("data", "unexpected " + __impl::to_string(CATEGORICAL) + " outcome")
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
    { _location = location; }

    UnivariateMeanEstimation::UnivariateMeanEstimation(const UnivariateMeanEstimation& estimation)
    { _location = estimation._location; }

    UnivariateMeanEstimation::~UnivariateMeanEstimation()
    {}
    
    const double& UnivariateMeanEstimation::get_location() const
    { return _location; }

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
        if(total > 0)
        {
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            switch(data.get_sample_space()->get_outcome())
            {
                case DISCRETE:
                    while(generator->is_valid())
                    {
                        const UnivariateEvent* event = generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        { location += generator->weight() * static_cast< const DiscreteElementaryEvent* >(event)->get_value() / total; }
                        ++(*generator);
                    }
                    break;
                case CONTINUOUS:
                    while(generator->is_valid())
                    {
                        const UnivariateEvent* event = generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        { location += generator->weight() * static_cast< const ContinuousElementaryEvent* >(event)->get_value() / total; }
                        ++(*generator);
                    }
                    break;
                default:
                    location = std::numeric_limits< double >::quiet_NaN();
                    break;
            }
            estimation = std::make_unique< UnivariateMeanEstimation >(location);
        }
        else
        { throw sample_size_error(1); }
        return estimation;
    }

    std::unique_ptr< UnivariateLocationEstimation::Estimator > UnivariateMeanEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    MultivariateMeanEstimation::MultivariateMeanEstimation(const Eigen::VectorXd& location)
    { _location = location; }

    MultivariateMeanEstimation::MultivariateMeanEstimation(const MultivariateMeanEstimation& estimation)
    { _location = estimation._location; }

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
        Eigen::VectorXd mu = Eigen::VectorXd(data.get_sample_space()->size());
        UnivariateMeanEstimation::Estimator estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< UnivariateData > marginal;
        for(Index index = 0, max_index = mu.size(); index < max_index; ++index)
        {
            marginal = data.extract(index);
            mu(index) = estimator(*marginal)->get_location();
        }
        return std::make_unique< MultivariateMeanEstimation >(mu);
    }

    std::unique_ptr< MultivariateLocationEstimation::Estimator > MultivariateMeanEstimation::Estimator::copy() const
    { return std::make_unique< MultivariateMeanEstimation::Estimator >(*this); }

    const Eigen::VectorXd& MultivariateMeanEstimation::get_location() const
    { return _location; }

    UnivariateDispersionEstimation::UnivariateDispersionEstimation(const double& location)
    { _location = location; }

    UnivariateDispersionEstimation::UnivariateDispersionEstimation(const UnivariateDispersionEstimation& estimation)
    { _location = estimation._location; }

    UnivariateDispersionEstimation::~UnivariateDispersionEstimation()
    {}

    const double& UnivariateDispersionEstimation::get_location() const
    { return _location; }

    UnivariateDispersionEstimation::Estimator::~Estimator()
    {}

    MultivariateDispersionEstimation::MultivariateDispersionEstimation(const Eigen::VectorXd& location)
    { _location = location; }

    MultivariateDispersionEstimation::MultivariateDispersionEstimation(const MultivariateDispersionEstimation& estimation)
    { _location = estimation._location; }

    const Eigen::VectorXd& MultivariateDispersionEstimation::get_location() const
    { return _location; }

    MultivariateDispersionEstimation::~MultivariateDispersionEstimation()
    {}

    MultivariateDispersionEstimation::Estimator::~Estimator()
    {}

    UnivariateVarianceEstimation::UnivariateVarianceEstimation(const double& location, const bool& bias, const double& dispersion) : UnivariateDispersionEstimation(location)
    { 
        _bias = bias;
        _dispersion = dispersion;
    }

    UnivariateVarianceEstimation::UnivariateVarianceEstimation(const UnivariateVarianceEstimation& estimation) : UnivariateDispersionEstimation(estimation)
    {
        _bias = estimation._bias;
        _dispersion = estimation._dispersion;
    }

    UnivariateVarianceEstimation::~UnivariateVarianceEstimation()
    {}

    const bool& UnivariateVarianceEstimation::get_bias() const
    { return _bias; }

    const double& UnivariateVarianceEstimation::get_dispersion() const
    { return _dispersion; }
    
    UnivariateVarianceEstimation::Estimator::Estimator()
    { _bias = false; }

    UnivariateVarianceEstimation::Estimator::Estimator(const bool& bias)
    { _bias = bias; }

    UnivariateVarianceEstimation::Estimator::Estimator(const Estimator& estimator)
    { _bias = estimator._bias; }

    UnivariateVarianceEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateDispersionEstimation > UnivariateVarianceEstimation::Estimator::operator() (const UnivariateData& data, const double& location) const
    { 
        double total = data.compute_total(), total_square = 0.;
        std::unique_ptr< UnivariateDispersionEstimation > estimation;
        if(total > 0)
        {
            double dispersion = 0.;
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            switch(data.get_sample_space()->get_outcome())
            {
                case DISCRETE:
                    while(generator->is_valid())
                    {
                        const UnivariateEvent* event = generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        { 
                            dispersion += generator->weight() * pow(static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location, 2) / total;
                            total_square += pow(generator->weight(), 2);
                        }
                        ++(*generator);
                    }
                    break;
                case CONTINUOUS:
                    while(generator->is_valid())
                    {
                        const UnivariateEvent* event = generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        {
                            dispersion += generator->weight() * pow(static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location, 2)/ total;
                            total_square += pow(generator->weight(), 2);
                        }
                        ++(*generator);
                    }
                    break;
                default:
                    dispersion = std::numeric_limits< double >::quiet_NaN();
                    break;
            }
            if(!_bias)
            {
                total *= total;
                dispersion *= total/(total - total_square);
            }
            estimation = std::make_unique< UnivariateVarianceEstimation >(location, _bias, dispersion);
        }
        else
        { throw sample_size_error(1); }
        return estimation;
    }

    std::unique_ptr< UnivariateDispersionEstimation::Estimator > UnivariateVarianceEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    const bool& UnivariateVarianceEstimation::Estimator::get_bias() const
    { return _bias; }

    void UnivariateVarianceEstimation::Estimator::set_bias(const bool& bias)
    { _bias = bias; }

    MultivariateVarianceEstimation::MultivariateVarianceEstimation(const Eigen::VectorXd& location, const Eigen::MatrixXd& dispersion, const bool& bias) : MultivariateDispersionEstimation(location)
    { 
        _dispersion = dispersion;
        _bias = bias;
    }

    MultivariateVarianceEstimation::MultivariateVarianceEstimation(const MultivariateVarianceEstimation& estimation) : MultivariateDispersionEstimation(estimation)
    {
        _dispersion = estimation._dispersion;
        _bias = estimation._bias;
    }

    MultivariateVarianceEstimation::~MultivariateVarianceEstimation()
    {}

    const bool& MultivariateVarianceEstimation::get_bias() const
    { return _bias; }

    const Eigen::MatrixXd& MultivariateVarianceEstimation::get_dispersion() const
    { return _dispersion; }

    MultivariateVarianceEstimation::Estimator::Estimator()
    { _bias = false; }

    MultivariateVarianceEstimation::Estimator::Estimator(const bool& bias)
    { _bias = bias; }

    MultivariateVarianceEstimation::Estimator::Estimator(const Estimator& estimator)
    { _bias = estimator._bias; }

    MultivariateVarianceEstimation::Estimator::~Estimator()
    {}
    
    std::unique_ptr< MultivariateDispersionEstimation > MultivariateVarianceEstimation::Estimator::operator() (const MultivariateData& data, const Eigen::VectorXd& location) const
    {
        Eigen::MatrixXd dispersion = Eigen::MatrixXd(location.size(), location.size());
        for(Index i = 0, max_i = location.size(); i < max_i; ++i)
        {
            dispersion(i, i) = compute(data, location, i, i);
            for(Index j = 0; j < i; ++j)
            {
                dispersion(i, j) = compute(data, location, i, j);
                dispersion(j, i) = dispersion(i, j);
            }
        }
        if(!_bias)
        {}
        return std::make_unique< MultivariateVarianceEstimation >(location, dispersion, _bias);
    }

    std::unique_ptr< MultivariateDispersionEstimation::Estimator > MultivariateVarianceEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    const bool& MultivariateVarianceEstimation::Estimator::get_bias() const
    { return _bias; }

    void MultivariateVarianceEstimation::Estimator::set_bias(const bool& bias)
    { _bias = bias; }

    double MultivariateVarianceEstimation::Estimator::compute(const MultivariateData& data, const Eigen::VectorXd& location, const Index& i, const Index& j) const
    {
        double codispersion = 0., total = 0., total_square = 0.;
        switch(data.get_sample_space()->get(i)->get_outcome())
        {
            case CATEGORICAL:
                codispersion = std::numeric_limits< double >::quiet_NaN();
                break;
            case DISCRETE:
                switch(data.get_sample_space()->get(j)->get_outcome())
                {
                    case CATEGORICAL:
                        codispersion = std::numeric_limits< double >::quiet_NaN();
                        break;
                    case DISCRETE:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while(generator->is_valid())
                            {
                                double _codispersion = 0;
                                const UnivariateEvent* event = generator->event()->get(i);
                                if(event && event->get_event() == ELEMENTARY)
                                { 
                                    _codispersion = static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->event()->get(j);
                                    if(event && event->get_event() == ELEMENTARY)
                                    {
                                        _codispersion *= static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += _codispersion * generator->weight();
                                        total += generator->weight();
                                        total_square += pow(generator->weight(), 2);
                                    }
                                }
                                ++(*generator);
                            }
                        }
                        break;
                    case CONTINUOUS:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while(generator->is_valid())
                            {
                                double _codispersion = 0;
                                const UnivariateEvent* event = generator->event()->get(i);
                                if(event && event->get_event() == ELEMENTARY)
                                { 
                                    _codispersion = static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->event()->get(j);
                                    if(event && event->get_event() == ELEMENTARY)
                                    {
                                        _codispersion *= static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += _codispersion * generator->weight();
                                        total += generator->weight();
                                        total_square += pow(generator->weight(), 2);
                                    }
                                }
                                ++(*generator);
                            }
                        }
                        break;
                }
                break;
            case CONTINUOUS:
                switch(data.get_sample_space()->get(j)->get_outcome())
                {
                    case CATEGORICAL:
                        codispersion = std::numeric_limits< double >::quiet_NaN();
                        break;
                    case DISCRETE:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while(generator->is_valid())
                            {
                                double _codispersion = 0;
                                const UnivariateEvent* event = generator->event()->get(i);
                                if(event && event->get_event() == ELEMENTARY)
                                { 
                                    _codispersion = static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->event()->get(j);
                                    if(event && event->get_event() == ELEMENTARY)
                                    {
                                        _codispersion *= static_cast< const DiscreteElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += _codispersion * generator->weight();
                                        total += generator->weight();
                                        total_square += pow(generator->weight(), 2);
                                    }
                                }
                                ++(*generator);
                            }
                        }
                        break;
                    case CONTINUOUS:
                        {
                            std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                            while(generator->is_valid())
                            {
                                double _codispersion = 0;
                                const UnivariateEvent* event = generator->event()->get(i);
                                if(event && event->get_event() == ELEMENTARY)
                                { 
                                    _codispersion = static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(i);
                                    event = generator->event()->get(j);
                                    if(event && event->get_event() == ELEMENTARY)
                                    {
                                        _codispersion *= static_cast< const ContinuousElementaryEvent* >(event)->get_value() - location(j);
                                        codispersion += _codispersion * generator->weight();
                                        total += generator->weight();
                                        total_square += pow(generator->weight(), 2);
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
        if(!_bias)
        { 
            total = pow(total, 2.);
            codispersion *= total / (total - total_square);
        }
        return codispersion;
    }
    /*CoVarianceEstimation::CoVarianceEstimation(const std::array< double, 2 >& locations)
    { _locations = locations; }

    CoVarianceEstimation::CoVarianceEstimation(const CoVarianceEstimation& estimation)
    { _locations = estimation._locations; }

    const std::array< double, 2 >& CoVarianceEstimation::get_locations() const
    { return _locations; }
    
    std::unique_ptr< CoVarianceEstimation > CoVarianceEstimation::Estimator::operator() (const UnivariateData& data) const
    {
        UnivariateMeanEstimation::Estimator estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< MeanEstimation > estimation = estimator(data);
        double location = estimation->get_location();
        return operator() (data, location);
    }

    std::unique_ptr< CoVarianceEstimation > CoVarianceEstimation::Estimator::operator() (const UnivariateData& data, const double& location) const
    {
        std::unique_ptr< MultivariateDataFrame > datas = std::make_unique< MultivariateDataFrame >();
        datas->append_component(data);
        datas->append_component(data);
        std::array< double, 2 > locations{ {location, location} };
        return operator() (0, 1, datas, locations);
    }

    std::unique_ptr< CoVarianceEstimation > CoVarianceEstimation::Estimator::operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data) const
    {
        UnivariateMeanEstimation::Estimator estimator = UnivariateMeanEstimation::Estimator();
        std::unique_ptr< MeanEstimation > estimation_i = estimator(data.get_component(i));
        std::unique_ptr< MeanEstimation > estimation_j = estimator(data.get_component(j));
        std::array< double, 2 > locations{ {estimation_i->get_location(), estimation_j->get_location()} };
        return operator() (i, j, data, locations);
    }

    NaturalCoVarianceEstimation::NaturalCoVarianceEstimation(const std::array< double, 2 >& locations, const double& codispersion, const bool& bias) : CoVarianceEstimation(locations)
    {
        _codispersion = codispersion;
        _bias = bias;
    }

    NaturalCoVarianceEstimation::NaturalCoVarianceEstimation(const NaturalCoVarianceEstimation& estimation) : CoVarianceEstimation(estimation)
    {
        _codispersion = estimation._codispersion;
        _bias = estimation._bias;
    }

    const bool& NaturalCoVarianceEstimation::get_bias() const
    { return _bias; }

    const double& NaturalCoVarianceEstimation::get_codispersion() const
    { return _codispersion; }

    NaturalCoVarianceEstimation::Estimator::Estimator(const bool& bias)
    { _bias = bias; }

    NaturalCoVarianceEstimation::Estimator::Estimator(const Estimator& estimator)
    { _bias = estimator._bias; }

    std::unique_ptr< CoVarianceEstimation > NaturalCoVarianceEstimation::Estimator::operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data, const std::array< double, 2 >& locations) const
    {
        if(!data)
        { throw std::runtime_error("None"); }
        if(!*data)
        { throw std::runtime_error("invalid"); }
        double total = data.compute_total(), codispersion;
        if(total > 0 && data.size() > 0 && boost::math::isfinite(locations.at(0) + locations.at(1)))
        {
            Index index = 0, max_index = data.size();
            double total_square = 0;
            const UnivariateData&& data_i = data.get_component(i), data_j = data.get_component(j);
            switch(data_i->get_sample_space()->get_outcome())
            {
                case CATEGORICAL:
                    codispersion = std::numeric_limits< double >::quiet_NaN();
                    break;
                case DISCRETE:
                    switch(data_j->get_sample_space()->get_outcome())
                    {
                        case CATEGORICAL:
                            codispersion = std::numeric_limits< double >::quiet_NaN();
                            break;
                        case DISCRETE:
                            codispersion = 0.;
                            while(boost::math::isfinite(codispersion) && index < max_index)
                            {
                                const UnivariateEvent* event_i = data_i->get_event(index);
                                if(event_i && event_i->get_event() == ELEMENTARY)
                                {
                                    const UnivariateEvent* event_j = data_j->get_event(index);
                                    if(event_j && event_j->get_event() == ELEMENTARY)
                                    { 
                                        codispersion += data.get_weight(index) * (static_cast< const DiscreteElementaryEvent* >(event_i)->get_value() - locations.at(i)) * (static_cast< const DiscreteElementaryEvent* >(event_j)->get_value() - locations.at(j)) / total;
                                        total_square += pow(data.get_weight(index), 2);
                                    }
                                }
                                ++index;
                            }
                            break;
                        case CONTINUOUS:
                            codispersion = 0.;
                            while(boost::math::isfinite(codispersion) && index < max_index)
                            {
                                const UnivariateEvent* event_i = data_i->get_event(index);
                                if(event_i && event_i->get_event() == ELEMENTARY)
                                {
                                    const UnivariateEvent* event_j = data_j->get_event(index);
                                    if(event_j && event_j->get_event() == ELEMENTARY)
                                    { 
                                        codispersion += data.get_weight(index) * (static_cast< const DiscreteElementaryEvent* >(event_i)->get_value() - locations.at(i)) * (static_cast< const ContinuousElementaryEvent* >(event_j)->get_value() - locations.at(j)) / total; 
                                        total_square += pow(data.get_weight(index), 2);                                        
                                    }
                                }
                                ++index;
                            }
                            break;
                    }
                    break;
                case CONTINUOUS:
                    switch(data_j->get_sample_space()->get_outcome())
                    {
                        case CATEGORICAL:
                            codispersion = std::numeric_limits< double >::quiet_NaN();
                            break;
                        case DISCRETE:
                            codispersion = 0.;
                            while(boost::math::isfinite(codispersion) && index < max_index)
                            {
                                const UnivariateEvent* event_i = data_i->get_event(index);
                                if(event_i && event_i->get_event() == ELEMENTARY)
                                {
                                    const UnivariateEvent* event_j = data_j->get_event(index);
                                    if(event_j && event_j->get_event() == ELEMENTARY)
                                    {
                                        codispersion += data.get_weight(index) * (static_cast< const ContinuousElementaryEvent* >(event_i)->get_value() - locations.at(i)) * (static_cast< const DiscreteElementaryEvent* >(event_j)->get_value() - locations.at(j)) / total;
                                        total_square += pow(data.get_weight(index), 2);                                        
                                    }
                                }
                                ++index;
                            }
                            break;
                        case CONTINUOUS:
                            codispersion = 0.;
                            while(boost::math::isfinite(codispersion) && index < max_index)
                            {
                                const UnivariateEvent* event_i = data_i->get_event(index);
                                if(event_i && event_i->get_event() == ELEMENTARY)
                                {
                                    const UnivariateEvent* event_j = data_j->get_event(index);
                                    if(event_j && event_j->get_event() == ELEMENTARY)
                                    { 
                                        codispersion += data.get_weight(index) * (static_cast< const ContinuousElementaryEvent* >(event_i)->get_value() - locations.at(i)) * (static_cast< const ContinuousElementaryEvent* >(event_j)->get_value() - locations.at(j)) / total;
                                        total_square += pow(data.get_weight(index), 2);                                        
                                    }
                                }
                                ++index;
                            }
                            break;
                    }
                    break;
            }
            if(boost::math::isfinite(codispersion) && !_bias)
            {
                total *= total; 
                codispersion *= total / (total - total_square);
            }
        }
        else
        { codispersion = std::numeric_limits< double >::quiet_NaN(); }
        return std::make_unique< NaturalCoVarianceEstimation >(locations, codispersion, _bias);
    }

    const bool& NaturalCoVarianceEstimation::Estimator::get_bias() const
    { return _bias; }

    void NaturalCoVarianceEstimation::Estimator::set_bias(const bool& bias)
    { _bias = bias; }

    /*double MomentEstimator::operator() (const std::array< const UnivariateData*, 3 >& df) const
    {
        std::array< double, 3 > location{ {(*this)(df.at(0), na_omit),
                                       (*this)(df.at(1), na_omit),
                                       (*this)(df.at(2), na_omit)} };
        return (*this)(df, location, na_omit);
    }

    double MomentEstimator::operator() (const std::array< const UnivariateData*, 3 >& df, const std::array< double, 3 >& location) const
    {
        std::array< double, 3 > stderror{ {(*this)(std::array< const UnivariateData*, 2 >{ {df.at(0), df.at(0)} }, std::array< double, 2 >{ {location.at(0), location.at(0)} }, na_omit),
                                           (*this)(std::array< const UnivariateData*, 2 >{ {df.at(1), df.at(1)} }, std::array< double, 2 >{ {location.at(1), location.at(1)} }, na_omit),
                                           (*this)(std::array< const UnivariateData*, 2 >{ {df.at(2), df.at(2)} }, std::array< double, 2 >{ {location.at(2), location.at(2)} }, na_omit)} };
        stderror.at(0) = sqrt(stderror.at(0));
        stderror.at(1) = sqrt(stderror.at(1));
        stderror.at(2) = sqrt(stderror.at(2));
        return (*this)(df, location, stderror, na_omit);
    }

    double MomentEstimator::operator() (const std::array< const UnivariateData*, 4 >& df) const
    {
        std::array< double, 4 > location{ {(*this)(df.at(0), na_omit),
                                       (*this)(df.at(1), na_omit),
                                       (*this)(df.at(2), na_omit),
                                       (*this)(df.at(3), na_omit)} };
        return (*this)(df, location, na_omit);
    }

    double MomentEstimator::operator() (const std::array< const UnivariateData*, 4 >& df, const std::array< double, 4 >& location) const
    {
        std::array< double, 4 > stderror{ {(*this)(std::array< const UnivariateData*, 2 >{ {df.at(0), df.at(0)} }, std::array< double, 2 >{ {location.at(0), location.at(0)} }, na_omit),
                                           (*this)(std::array< const UnivariateData*, 2 >{ {df.at(1), df.at(1)} }, std::array< double, 2 >{ {location.at(1), location.at(1)} }, na_omit),
                                           (*this)(std::array< const UnivariateData*, 2 >{ {df.at(2), df.at(2)} }, std::array< double, 2 >{ {location.at(2), location.at(2)} }, na_omit),
                                           (*this)(std::array< const UnivariateData*, 2 >{ {df.at(3), df.at(3)} }, std::array< double, 2 >{ {location.at(3), location.at(3)} }, na_omit)} };
        stderror.at(0) = sqrt(stderror.at(0));
        stderror.at(1) = sqrt(stderror.at(1));
        stderror.at(2) = sqrt(stderror.at(2));
        stderror.at(3) = sqrt(stderror.at(3));
        return (*this)(df, location, stderror, na_omit);
    }

    NaturalMomentEstimator::NaturalMomentEstimator(const bool& biased)
    { _biased = biased; }

    NaturalMomentEstimator::NaturalMomentEstimator(const NaturalMomentEstimator& estimator)
    { _biased = estimator._biased; }

    NaturalMomentEstimator::~NaturalMomentEstimator()
    {}

    double NaturalMomentEstimator::operator() (const UnivariateData* df) const
    {
        double total;
        if(df && df->get_sample_space()->get_outcome() != CATEGORICAL)
        { total = df->compute_total(na_omit); }
        else
        { total = std::numeric_limits< double >::quiet_NaN(); }
        double location;
        if(boost::math::isfinite(total))
        {
            location = 0.;
            switch(df->get_sample_space()->get_outcome())
            {
                case DISCRETE:
                    for(Index index = 0, max_index = df->size(); index < max_index; ++index)
                    { location += get_value< DiscreteEvent >(df, index, na_omit)/total; }
                    break;
                case CONTINUOUS:
                    for(Index index = 0, max_index = df->size(); index < max_index; ++index)
                    { location += get_value< ContinuousEvent >(df, index, na_omit)/total; }
                    break;
                default:
                    location = std::numeric_limits< double >::quiet_NaN();
                    break;
            }
        }
        else
        { location = total; }
        return location;
    }

    double NaturalMomentEstimator::operator() (const std::array< const UnivariateData*, 2 >& df, const std::array< double, 2 >& location) const
    {
        double total;
        if(df.at(0) && df.at(1) && df.at(0)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(1)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(0)->size() == df.at(1)->size())
        { total = std::min(df.at(0)->compute_total(na_omit), df.at(1)->compute_total(na_omit)); }
        else
        { total = std::numeric_limits< double >::quiet_NaN(); }
        double codispersion;
        if(boost::math::isfinite(total))
        {
            codispersion = 0.;
            Index index = 0;
            std::array< Index, 2 > max_index{ {df.at(0)->size(), df.at(1)->size()} };
            switch(df.at(0)->get_sample_space()->get_outcome())
            {
                case DISCRETE:
                    switch(df.at(1)->get_sample_space()->get_outcome())
                    {
                        case DISCRETE:
                            while(index < max_index.at(0) || index < max_index.at(1))
                            {
                                codispersion += (get_value< DiscreteEvent >(df.at(0), index, location[0], na_omit)-location[0]) *
                                    (get_value< DiscreteEvent >(df.at(1), index, location[1], na_omit)-location[1])/total;
                                ++index;
                            }
                            break;
                        case CONTINUOUS:
                            while(index < max_index.at(0) || index < max_index.at(1))
                            {
                                codispersion += (get_value< DiscreteEvent >(df.at(0), index, location[0], na_omit)-location[0]) * 
                                    (get_value< ContinuousEvent >(df.at(1), index, location[1], na_omit)-location[1])/total;
                                ++index;
                            }
                            break;
                        default:
                            codispersion = std::numeric_limits< double >::quiet_NaN();
                            break;
                    }
                    break;
                case CONTINUOUS:
                    switch(df.at(1)->get_sample_space()->get_outcome())
                    {
                        case DISCRETE:
                            while(index < max_index.at(0) || index < max_index.at(1))
                            {
                                codispersion += (get_value< ContinuousEvent >(df.at(0), index, location[0], na_omit)-location[0]) *
                                    (get_value< DiscreteEvent >(df.at(1), index, location[1], na_omit)-location[1])/total;
                                ++index;
                            }
                            break;
                        case CONTINUOUS:
                            while(index < max_index.at(0) || index < max_index.at(1))
                            {
                                codispersion += (get_value< ContinuousEvent >(df.at(0), index, location[0], na_omit)-location[0]) *
                                    (get_value< ContinuousEvent >(df.at(1), index, location[1], na_omit)-location[1])/total;
                                ++index;
                            }
                            break;
                        default:
                            codispersion = std::numeric_limits< double >::quiet_NaN();
                            break;
                    }
                    break;
                default:
                    codispersion = std::numeric_limits< double >::quiet_NaN();
                    break;
            }
            if(boost::math::isfinite(codispersion) && !_biased)
            { codispersion *= total/(total-1); }
        }
        else
        { codispersion = total; }
        return codispersion;
    }

    double NaturalMomentEstimator::operator() (const std::array< const UnivariateData*, 3 >& df, const std::array<double, 3>& location, const std::array<double, 3>& stderror) const
    {
        double total;
        if(df.at(0) && df.at(1) && df.at(2) && df.at(0)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(1)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(2)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(0)->size() == df.at(1)->size() && df.at(1)->size() == df.at(2)->size())
        { total = std::min(df.at(0)->compute_total(na_omit), std::min(df.at(1)->compute_total(na_omit), df.at(2)->compute_total(na_omit))); }
        else
        { total = std::numeric_limits< double >::quiet_NaN(); }
        double coskewness;
        if(boost::math::isfinite(total))
        {
            coskewness = 0.;
            Index index = 0;
            std::array< Index, 3 > max_index{ {df.at(0)->size(), df.at(1)->size(), df.at(2)->size()} };
            switch(df.at(0)->get_sample_space()->get_outcome())
            {
                case DISCRETE:
                    switch(df.at(1)->get_sample_space()->get_outcome())
                    {
                        case DISCRETE:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< DiscreteEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< DiscreteEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< DiscreteEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                case CONTINUOUS:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< DiscreteEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< DiscreteEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< ContinuousEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                default:
                                    coskewness = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        case CONTINUOUS:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< DiscreteEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< ContinuousEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< DiscreteEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                case CONTINUOUS:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< DiscreteEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< ContinuousEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< ContinuousEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                default:
                                    coskewness = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        default:
                            coskewness = std::numeric_limits< double >::quiet_NaN();
                            break;
                    }
                    break;
                case CONTINUOUS:
                    switch(df.at(1)->get_sample_space()->get_outcome())
                    {
                        case DISCRETE:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< ContinuousEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< DiscreteEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< DiscreteEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                case CONTINUOUS:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< ContinuousEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< DiscreteEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< ContinuousEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                default:
                                    coskewness = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        case CONTINUOUS:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< ContinuousEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< ContinuousEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< DiscreteEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                case CONTINUOUS:
                                    while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2))
                                    {
                                        coskewness += ((get_value< ContinuousEvent >(df.at(0), index, location[0], na_omit)-location[0])/stderror[0] *
                                                (get_value< ContinuousEvent >(df.at(1), index, location[1], na_omit)-location[1])/stderror[1] *
                                                (get_value< ContinuousEvent >(df.at(2), index, location[2], na_omit)-location[2])/stderror[2])/total;
                                        ++index;
                                    }
                                    break;
                                default:
                                    coskewness = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        default:
                            coskewness = std::numeric_limits< double >::quiet_NaN();
                            break;
                    }
                    break;
                default:
                    coskewness = std::numeric_limits< double >::quiet_NaN();
                    break;
            }
            if(boost::math::isfinite(coskewness) && !_biased)
            { coskewness *= total/(total-1)*total/(total-2); }
        }
        else
        { coskewness = total; }
        return coskewness;
    }

    double NaturalMomentEstimator::operator() (const std::array< const UnivariateData*, 4 >& df, const std::array<double, 4>& location, const std::array<double, 4>& stderror) const
    {
        double total;
        if(df.at(0) && df.at(1) && df.at(2) && df.at(3) && df.at(0)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(1)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(2)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(3)->get_sample_space()->get_outcome() != CATEGORICAL && df.at(0)->size() == df.at(1)->size() && df.at(1)->size() == df.at(2)->size() && df.at(2)->size() == df.at(3)->size())
        { total = std::min(df.at(0)->compute_total(na_omit), std::min(df.at(1)->compute_total(na_omit), std::min(df.at(2)->compute_total(na_omit), df.at(3)->compute_total(na_omit)))); }
        else
        { total = std::numeric_limits< double >::quiet_NaN(); }
        double cokurtosis;
        if(boost::math::isfinite(total))
        {
            cokurtosis = 0.;
            Index index = 0;
            std::array< Index, 4 > max_index = { {df.at(0)->size(), df.at(1)->size(), df.at(2)->size(), df.at(3)->size()} };
            switch(df.at(0)->get_sample_space()->get_outcome())
            {
                case DISCRETE:
                    switch(df.at(1)->get_sample_space()->get_outcome())
                    {
                        case DISCRETE:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                case CONTINUOUS:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                default:
                                    cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        case CONTINUOUS:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                case CONTINUOUS:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< ContinuousEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< DiscreteEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< ContinuousEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                default:
                                    cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        default:
                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                            break;
                    }
                    break;
                case CONTINUOUS:
                    switch(df.at(1)->get_sample_space()->get_outcome())
                    {
                        case DISCRETE:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                case CONTINUOUS:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                default:
                                    cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        case CONTINUOUS:
                            switch(df.at(2)->get_sample_space()->get_outcome())
                            {
                                case DISCRETE:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< DiscreteEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< DiscreteEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                case CONTINUOUS:
                                    switch(df.at(3)->get_sample_space()->get_outcome())
                                    {
                                        case DISCRETE:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< ContinuousEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< DiscreteEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                            break;
                                        case CONTINUOUS:
                                            while(index < max_index.at(0) || index < max_index.at(1) || index < max_index.at(2) || index < max_index.at(3))
                                            {
                                                cokurtosis += ((get_value< ContinuousEvent >(df.at(0)->get_event(index).get(), location[0], na_omit)-location[0])/stderror[0] *
                                                        (get_value< ContinuousEvent >(df.at(1)->get_event(index).get(), location[1], na_omit)-location[1])/stderror[1] *
                                                        (get_value< ContinuousEvent >(df.at(2)->get_event(index).get(), location[2], na_omit)-location[2])/stderror[2] *
                                                        (get_value< ContinuousEvent >(df.at(3)->get_event(index).get(), location[3], na_omit)-location[3])/stderror[3])/total;
                                                ++index;
                                            }
                                        default:
                                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                            break;
                                    }
                                    break;
                                default:
                                    cokurtosis = std::numeric_limits< double >::quiet_NaN();
                                    break;
                            }
                            break;
                        default:
                            cokurtosis = std::numeric_limits< double >::quiet_NaN();
                            break;
                    }
                    break;
                default:
                    cokurtosis = std::numeric_limits< double >::quiet_NaN();
                    break;
            }
            if(boost::math::isfinite(cokurtosis) && !_biased)
            {
                cokurtosis *= total/(total-1)*total/(total-2)*(total+1)/(total-3);
                cokurtosis -= 3*(total-1)*(total-1)/((total-2)*(total-3));
            }
            else
            { cokurtosis -= 3.; }
        }
        else
        { cokurtosis = total; }
        return cokurtosis;
    }

    const bool& NaturalMomentEstimator::get_biased() const
    { return _biased; }

    std::unique_ptr< MomentEstimator > NaturalMomentEstimator::copy() const
    { return std::make_unique< NaturalMomentEstimator >(*this); }*/
}
