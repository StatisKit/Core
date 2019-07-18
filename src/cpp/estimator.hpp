#ifndef AUTOWIG
#pragma once

namespace statiskit
{    

    template<class B>
        ShiftedDistributionEstimation<B>::Estimator::Estimator()
        {
            this->shift = 0;
            this->estimator = nullptr;
        }

    template<class B>
        ShiftedDistributionEstimation<B>::Estimator::Estimator(const Estimator& estimator)
        {
            this->shift = estimator.shift;
            if (estimator.estimator) {
                this->estimator = static_cast< typename B::Estimator* >(estimator._estimator->copy().release());
            } else {
                this->estimator = nullptr;
            }
        }

    template<class B>
        ShiftedDistributionEstimation<B>::Estimator::~Estimator()
        {
            if (this->estimator) {
                delete this->estimator;
            }
        }

    template<class B>
        std::unique_ptr< typename ShiftedDistributionEstimation<B>::Estimator::estimation_type > ShiftedDistributionEstimation<B>::Estimator::operator() (const data_type& data) const
        { 
            using event_type = ElementaryEvent< typename B::event_type >;
            using value_type = typename event_type::value_type;
            using distribution_type = ShiftedDistribution< typename B::observation_type >;
            this->check(data);
            if (!this->estimator) {
                throw member_error("estimator", "you must give an estimator in order to compute a shifted estimation");
            }
            UnivariateDataFrame shifted(*data.get_sample_space());
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            while (generator->is_valid()) {
                const UnivariateEvent* event = generator->get_event();
                if (event->get_censoring() == censoring_type::NONE) { 
                    value_type value = static_cast< const event_type* >(event)->get_value();
                    event_type* shifted_event = new event_type(value - this->shift);
                    shifted.add_event(shifted_event);
                    delete shifted_event;
                }
                ++(*generator);
            }
            UnivariateData::weighted_type* weighted = new UnivariateData::weighted_type(shifted);
            generator = data.generator();
            Index index = 0;
            while (generator->is_valid()) {
                weighted->set_weight(index, generator->get_weight());
                ++(*generator);
                ++index;
            }
            return std::make_unique< ShiftedDistributionEstimation<B> >(weighted,
                                                                        new distribution_type(*(*this->estimator(weighted))->get_distribution(), this->shift));
        }

    template<class B>
        typename ShiftedDistributionEstimation<B>::Estimator::event_type::value_type ShiftedDistributionEstimation<B>::Estimator::get_shift() const
        {
            return this->shift;
        }

    template<class B>
        void ShiftedDistributionEstimation<B>::Estimator::set_shift(const typename event_type::value_type& shift)
        {
            this->shift = shift;
        }

    template<class B>
        const typename ShiftedDistributionEstimation<B>::Estimator::estimator_type* ShiftedDistributionEstimation<B>::Estimator::get_estimator() const
        {
            return this->estimator;
        }

    template<class B>
        UnivariateFrequencyDistributionEstimation<B>::Estimator::Estimator()
        {}

    template<class B>
        UnivariateFrequencyDistributionEstimation<B>::Estimator::Estimator(const Estimator& estimator)
        {}

    template<class B>
        UnivariateFrequencyDistributionEstimation<B>::Estimator::~Estimator()
        {}

    template<class B>
        std::unique_ptr< typename UnivariateFrequencyDistributionEstimation<B>::Estimator::estimation_type > UnivariateFrequencyDistributionEstimation<B>::Estimator::operator() (const data_type& data) const
        {
            using event_type = ElementaryEvent< typename B::Estimator::event_type >;
            using value_type = typename event_type::value_type;
            this->check(data);
            std::unique_ptr< UnivariateDistributionEstimation > estimation;
            std::set< value_type > values;
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            while (generator->is_valid()) {
                auto event = generator->get_event();
                if (event) {
                    if(event->get_censoring() == censoring_type::NONE) {
                        values.insert(static_cast< const event_type* >(event)->get_value());
                    }
                }
                ++(*generator);
            }
            Eigen::VectorXd masses = Eigen::VectorXd::Zero(values.size());
            generator = data.generator();
            double total = data.compute_total();
            while (generator->is_valid()) {
                auto event = generator->get_event();
                if (event) {
                    if (event->get_censoring() == censoring_type::NONE) {
                        typename std::set< value_type >::iterator it = values.find(static_cast< const event_type* >(event)->get_value());
                        masses[distance(values.begin(), it)] += generator->get_weight() / total;
                    }
                }
                ++(*generator);
            }
            return std::make_unique< UnivariateFrequencyDistributionEstimation<B> >(data.copy().release(),
                                                                                    this->create(values, masses));
        }

    /*template<class E>
        SplittingDistributionEstimation< E >::SplittingDistributionEstimation() : E()
        { _sum = nullptr; }

    template<class E>
        SplittingDistributionEstimation< E >::SplittingDistributionEstimation(typename E::estimated_type const * estimated, MultivariateData const * data) : E(estimated, data)
        { _sum = nullptr; }

    template<class E>
        SplittingDistributionEstimation< E >::SplittingDistributionEstimation(const SplittingDistributionEstimation< E >& estimation) : E(estimation)
        { _sum = estimation._sum; }

    template<class E>
        SplittingDistributionEstimation< E >::~SplittingDistributionEstimation()
        { 
            if(_sum)
            { delete _sum; }
            _sum = nullptr;
        }

    template<class E>
        const DiscreteUnivariateDistributionEstimation* SplittingDistributionEstimation< E >::get_sum() const
        { return _sum; }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::Estimator()
        { _sum = nullptr; }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::Estimator(const Estimator& estimator)
        {
            if(estimator._sum)
            { _sum = static_cast< DiscreteUnivariateDistributionEstimation::Estimator* >(estimator._sum->copy().release()); }
            else
            { _sum = nullptr; }
        }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::~Estimator()
        {
            if(_sum)
            {
                delete _sum;
                _sum = nullptr;
            }
        }

    template<class E>
        const DiscreteUnivariateDistributionEstimation::Estimator* SplittingDistributionEstimation< E >::Estimator::get_sum() const
        { return _sum; }

    template<class E>
        void SplittingDistributionEstimation< E >::Estimator::set_sum(const DiscreteUnivariateDistributionEstimation::Estimator& sum)
        { _sum = static_cast< DiscreteUnivariateDistributionEstimation::Estimator* >(sum.copy().release()); }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::SumData::SumData(const MultivariateData* data)
        { _data = data; }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::SumData::~SumData()
        {}

    template<class E>
        std::unique_ptr< UnivariateData::Generator > SplittingDistributionEstimation< E >::Estimator::SumData::generator() const
        { return std::make_unique< SplittingDistributionEstimation< E >::Estimator::SumData::Generator >(_data); }

    template<class E>
        const UnivariateSampleSpace* SplittingDistributionEstimation< E >::Estimator::SumData::get_sample_space() const
        { return &get_NN(); }

    template<class E>
        std::unique_ptr< UnivariateData > SplittingDistributionEstimation< E >::Estimator::SumData::copy() const
        {
            UnivariateDataFrame* data = new UnivariateDataFrame(get_NN());
            std::unique_ptr< UnivariateData::Generator > _generator = generator();
            while(_generator->is_valid())
            {
                data->add_event(_generator->event());
                ++(*_generator);
            }
            _generator = generator();
            WeightedSumData* weighted = new WeightedSumData(data);
            for(Index index = 0, max_index = weighted->get_nb_weights(); index < max_index; ++index)
            {
                weighted->set_weight(index, _generator->weight());
                ++(*_generator);
            }
            return std::unique_ptr< UnivariateData >(weighted);
        }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::WeightedSumData::WeightedSumData(const UnivariateData* data)
        { this->init(data); }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::WeightedSumData::WeightedSumData(const WeightedSumData& data)
        { 
            this->init(data);
            this->_data = data._data->copy().release();
        }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::WeightedSumData::~WeightedSumData()
        { delete this->_data; }


    template<class E>
        SplittingDistributionEstimation< E >::Estimator::SumData::Generator::Generator(const MultivariateData* data)
        {
           _sum = nullptr;
           _generator = data->generator().release();
        }

    template<class E>
        SplittingDistributionEstimation< E >::Estimator::SumData::Generator::~Generator()
        {
            if(_sum)
            { delete _sum; }
            _sum = nullptr;
            if(_generator)
            { delete _generator; }
            _generator = nullptr;
        }

    template<class E>
        bool SplittingDistributionEstimation< E >::Estimator::SumData::Generator::is_valid() const
        { return _generator->is_valid(); }

    template<class E>
        UnivariateData::Generator& SplittingDistributionEstimation< E >::Estimator::SumData::Generator::operator++()
        {
           ++(*_generator);
           return *this;
        }

    template<class E>
        const UnivariateEvent* SplittingDistributionEstimation< E >::Estimator::SumData::Generator::event() const
        {
            if(_sum)
            { delete _sum; }
            int value = 0;
            const MultivariateEvent* mevent = _generator->event();
            for(Index component = 0, max_component = mevent->size(); component < max_component; ++component)
            {
                const UnivariateEvent* uevent = mevent->get(component);
                if(uevent && uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                { value += static_cast< const DiscreteElementaryEvent* >(uevent)->get_value(); }
            }
            _sum = new DiscreteElementaryEvent(value);
            return _sum;
        }

    template<class E>
        double SplittingDistributionEstimation< E >::Estimator::SumData::Generator::weight() const
        { return _generator->weight(); }*/

    /* template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::IndependentMultivariateDistributionEstimation() : ActiveEstimation< IndependentMultivariateDistribution< D >, E >()
        {}

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::IndependentMultivariateDistributionEstimation(IndependentMultivariateDistribution< D > const * estimated, typename E::data_type const * data) : ActiveEstimation< IndependentMultivariateDistribution< D >, E >(estimated, data)
        {}

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::IndependentMultivariateDistributionEstimation(const IndependentMultivariateDistributionEstimation< D, E >& estimation) : ActiveEstimation< IndependentMultivariateDistribution< D >, E >(estimation)
        {}

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::~IndependentMultivariateDistributionEstimation()
        {}

    template<class D, class E>
        Index IndependentMultivariateDistributionEstimation< D, E >::size() const 
        { return _estimations.size(); }

    template<class D, class E>
        const UnivariateDistributionEstimation* IndependentMultivariateDistributionEstimation< D, E >::get_estimation(const Index& index) const 
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            return _estimations[index]; 
        }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::Estimator() 
        { 
            _default_estimator = nullptr;
            _estimators.clear();
        }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::Estimator(const Estimator& estimator) 
        {
            if(estimator._default_estimator)
            { _default_estimator = static_cast< typename E::Estimator::marginal_type* >(estimator._default_estimator->copy().release()); }
            else
            { _default_estimator = nullptr; }
            _estimators.clear();
            for(typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = estimator._estimators.cbegin(), it_end = estimator._estimators.cend(); it != it_end; ++it)            
            { _estimators[it->first] = it->second->copy().release(); }
        }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::~Estimator() 
        {
            delete _default_estimator;
            for(typename std::map< Index, typename E::Estimator::marginal_type* >::iterator it = _estimators.begin(), it_end = _estimators.end(); it != it_end; ++it)            
            {
                delete it->second;
                it->second = nullptr;
            }
            _estimators.clear();
        }

    template<class D, class E>
        std::unique_ptr< MultivariateDistributionEstimation > IndependentMultivariateDistributionEstimation< D, E >::Estimator::operator() (const MultivariateData& data) const 
        { 
            std::unique_ptr< MultivariateDistributionEstimation > estimation;
            typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = _estimators.cbegin(), it_end = _estimators.cend();
            typename E::Estimator::marginal_type* estimator;
            std::vector< UnivariateDistributionEstimation* > estimations(data.get_sample_space()->size(), nullptr);
            for(Index component = 0, max_component = estimations.size(); component < max_component; ++component)
            {
                while(it != it_end && it->first < component)
                { ++it; }
                if(it != it_end && it->first == component)
                { estimator = it->second; }
                else
                { estimator = _default_estimator; }
                estimations[component] = (*estimator)(*(data.extract(component).get()), lazy).release();
            }
            std::vector< typename D::marginal_type > distributions(estimations.size());
            for(Index component = 0, max_component = estimations.size(); component < max_component; ++component)
            { distributions[component] = *static_cast< typename D::marginal_type* >(estimations[component]->get_estimated()); }
            IndependentMultivariateDistribution< D > * distribution = new IndependentMultivariateDistribution< D >(distributions);
            if(lazy)
            {
                estimation = std::make_unique< LazyEstimation< IndependentMultivariateDistribution< D >, E > >(distribution);
                for(Index component = 0, max_component = estimations.size(); component < max_component; ++component)
                {
                    delete estimations[component];
                    estimations[component] = nullptr;
                }
            }
            else
            {
                IndependentMultivariateDistributionEstimation< D, E >* _estimation =  new IndependentMultivariateDistributionEstimation< D, E >(distribution, &data);
                _estimation->_estimations = estimations;
                estimation.reset(_estimation);
            }
            return estimation;
        }
    
    template<class D, class E>
        std::unique_ptr< MultivariateDistributionEstimation::Estimator > IndependentMultivariateDistributionEstimation< D, E >::Estimator::copy() const
        { return std::make_unique< Estimator >(*this); }

    template<class D, class E>
        const typename E::Estimator::marginal_type* IndependentMultivariateDistributionEstimation< D, E >::Estimator::get_default_estimator() const
        { return _default_estimator; }

    template<class D, class E>
        void IndependentMultivariateDistributionEstimation< D, E >::Estimator::set_default_estimator(const typename E::Estimator::marginal_type& estimator)
        { 
            if(_default_estimator)
            { delete _default_estimator; }
            _default_estimator = static_cast< typename E::Estimator::marginal_type* >(estimator.copy().release());
        }

    template<class D, class E>
        const typename E::Estimator::marginal_type* IndependentMultivariateDistributionEstimation< D, E >::Estimator::get_estimator(const Index& index) const
        { 
            typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = _estimators.find(index);
            typename E::Estimator::marginal_type* estimator;
            if(it == _estimators.cend())
            { estimator = _default_estimator; }
            else
            { estimator = it->second; }
            return estimator;
        }

    template<class D, class E>
        void IndependentMultivariateDistributionEstimation< D, E >::Estimator::set_estimator(const Index& index, const typename E::Estimator::marginal_type* estimator)
        { 
            typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = _estimators.find(index);
            if(it == _estimators.end() && estimator)
            { _estimators[index] = static_cast< typename E::Estimator::marginal_type* >(estimator->copy().release()); }
            else if(estimator)
            { 
                delete it->second;
                it->second = static_cast< typename E::Estimator::marginal_type* >(estimator->copy().release());
            }
            else
            {
                delete it->second;
                _estimators.erase(it);
            }
        }*/
}

#endif