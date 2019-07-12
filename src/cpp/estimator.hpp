#ifndef AUTOWIG
#pragma once

namespace statiskit
{    
    template<class D, class B>
        ShiftedDistributionEstimation< D, B >::ShiftedDistributionEstimation() : LazyEstimation< ShiftedDistribution< D >, B >()
        { 
            _estimation = nullptr;
            _data = nullptr;
        }

    template<class D, class B>
        ShiftedDistributionEstimation< D, B >::ShiftedDistributionEstimation(LazyEstimation< D, B >* estimation, const UnivariateDataFrame* data, const typename D::event_type::value_type& shift) : LazyEstimation< ShiftedDistribution< D >, B >(new ShiftedDistribution< D >(*static_cast< const D* >(estimation->get_estimated()), shift))
        {
             _estimation = estimation;
             _data = data;
        }

    template<class D, class B>
        ShiftedDistributionEstimation< D, B >::ShiftedDistributionEstimation(const ShiftedDistributionEstimation< D, B >& estimation) : LazyEstimation< ShiftedDistribution< D >, B >(estimation)
        { 
            _estimation = estimation._estimation;
            _data = estimation._data;
        }

    template<class D, class B>
        ShiftedDistributionEstimation< D, B >::~ShiftedDistributionEstimation()
        { 
            if(_estimation)
            {
                delete _estimation;
                _estimation = nullptr;
            }
            if(_data)
            {
                delete _data;
                _data = nullptr;
            }
        }

    template<class D, class B>
        const LazyEstimation< D, B >* ShiftedDistributionEstimation< D, B >::get_estimation() const
        { return _estimation; }

    template<class D, class B>
        ShiftedDistributionEstimation< D, B >::Estimator::Estimator()
        {
            _shift = 0;
            _estimator = nullptr;
        }

    template<class D, class B>
        ShiftedDistributionEstimation< D, B >::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< UnivariateDistributionEstimation::Estimator, Estimator, typename B::Estimator >(estimator)
        {
            _shift = estimator._shift;
            if(estimator._estimator)
            { _estimator = static_cast< typename B::Estimator* >(estimator._estimator->copy().release()); }
            else
            { _estimator = nullptr; }
        }

    template<class D, class B>
        ShiftedDistributionEstimation< D, B >::Estimator::~Estimator()
        {
            if(_estimator)
            { delete _estimator; }
        }

    template<class D, class B>
        std::unique_ptr< UnivariateDistributionEstimation > ShiftedDistributionEstimation< D, B >::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
        { 
            if(!_estimator)
            { throw member_error("estimator", "you must give an estimator in order to compute a shifted estimation"); }
            UnivariateDataFrame* shifted = new UnivariateDataFrame(*data.get_sample_space());
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            while(generator->is_valid())
            {
                const UnivariateEvent* event = generator->event();
                if(event->get_event() == ELEMENTARY)
                { 
                    typename D::event_type::value_type value = static_cast< const ElementaryEvent< typename D::event_type >* >(event)->get_value();
                    ElementaryEvent< typename D::event_type >* shifted_event = new ElementaryEvent< typename D::event_type >(value - _shift);
                    shifted->add_event(shifted_event);
                    delete shifted_event;
                }
                ++(*generator);
            }
            WeightedUnivariateData weighted = WeightedUnivariateData(shifted);
            generator = data.generator();
            Index index = 0;
            while(generator->is_valid())
            {
                weighted.set_weight(index, generator->weight());
                ++(*generator);
                ++index;
            }
            std::unique_ptr< UnivariateDistributionEstimation > estimation;
            if(lazy)
            {
                estimation = std::make_unique< LazyEstimation< ShiftedDistribution< D >, B > >(new ShiftedDistribution< D >(*static_cast< const D* >((*_estimator)(weighted, lazy)->get_estimated()), _shift));
                delete shifted;
            }
            else
            { estimation = std::make_unique< ShiftedDistributionEstimation< D, B > >(static_cast< LazyEstimation< D, B >* >((*_estimator)(weighted, lazy).release()), shifted, _shift); }
            return estimation;
        }

    template<class D, class B>
        typename D::event_type::value_type ShiftedDistributionEstimation< D, B >::Estimator::get_shift() const
        { return _shift; }

    template<class D, class B>
        void ShiftedDistributionEstimation< D, B >::Estimator::set_shift(const typename D::event_type::value_type& shift)
        { _shift = shift; }

    template<class D, class B>
        const typename ShiftedDistributionEstimation< D, B >::Estimator::estimator_type* ShiftedDistributionEstimation< D, B >::Estimator::get_estimator() const
        { return _estimator; }

    template<class D, class B>
        void ShiftedDistributionEstimation< D, B >::Estimator::set_estimator(const estimator_type& estimator)
        { _estimator = static_cast< estimator_type* >(estimator.copy().release()); }

    template<class D, class B>
        std::unordered_set< uintptr_t > ShiftedDistributionEstimation< D, B >::Estimator::children() const
        {
            std::unordered_set< uintptr_t > ch;
            ch.insert(this->compute_identifier(*_estimator));
            __impl::merge(ch, this->compute_children(*_estimator));
            return ch;
        }

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::UnivariateFrequencyDistributionEstimation() : ActiveEstimation< D, B >()
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::UnivariateFrequencyDistributionEstimation(D const * estimated, typename B::data_type const * data) : ActiveEstimation< D, B >(estimated, data)
        {}

     template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::UnivariateFrequencyDistributionEstimation(const UnivariateFrequencyDistributionEstimation< D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::~UnivariateFrequencyDistributionEstimation()
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::Estimator::Estimator()
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::Estimator::Estimator(const Estimator& estimator)
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::Estimator::~Estimator()
        {}

    template<class D, class B>
        std::unique_ptr< UnivariateDistributionEstimation > UnivariateFrequencyDistributionEstimation< D, B >::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
        {
            std::unique_ptr< UnivariateDistributionEstimation > estimation;
            std::set< typename D::event_type::value_type > values;
            double total = data.compute_total();
            if(total > 0. && boost::math::isfinite(total))
            {
                std::unique_ptr< UnivariateData::Generator > generator = data.generator();
                while(generator->is_valid())
                {
                    auto event = generator->event();
                    if(event)
                    {
                        if(event->get_event() == ELEMENTARY)
                        { values.insert(static_cast< const ElementaryEvent< typename D::event_type >* >(event)->get_value()); }
                    }
                    ++(*generator);
                }
                Eigen::VectorXd masses = Eigen::VectorXd::Zero(values.size());
                generator = data.generator();
                while(generator->is_valid())
                {
                    auto event = generator->event();
                    if(event)
                    {
                        if(event->get_event() == ELEMENTARY)
                        {
                            typename std::set< typename D::event_type::value_type >::iterator it = values.find(static_cast< const ElementaryEvent< typename D::event_type >* >(event)->get_value());
                            masses[distance(values.begin(), it)] += generator->weight() / total;
                        }
                    }
                    ++(*generator);
                }
                if(lazy)
                { estimation = std::make_unique< LazyEstimation< D, B > >(new D(values, masses)); }
                else
                { estimation = std::make_unique< UnivariateFrequencyDistributionEstimation< D, B > >(new D(values, masses), &data); }
            }
            return estimation;
        }

    template<class D, class B>
        std::unique_ptr< UnivariateDistributionEstimation::Estimator > UnivariateFrequencyDistributionEstimation< D, B >::Estimator::copy() const
        { return std::make_unique< Estimator >(*this); }

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
        std::unique_ptr< MultivariateDistributionEstimation > IndependentMultivariateDistributionEstimation< D, E >::Estimator::operator() (const MultivariateData& data, const bool& lazy) const 
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

    template<class D, class E>
        MixtureDistributionEMEstimation< D, E >::MixtureDistributionEMEstimation() : OptimizationEstimation< D*, D, E >()
        {}

    template<class D, class E>
        MixtureDistributionEMEstimation< D, E >::MixtureDistributionEMEstimation(D const * estimated, typename E::data_type const * data) : OptimizationEstimation< D*, D, E >(estimated, data)
        {}   

    template<class D, class E>
        MixtureDistributionEMEstimation< D, E >::MixtureDistributionEMEstimation(const MixtureDistributionEMEstimation< D, E >& estimation) : OptimizationEstimation< D*, D, E >(estimation)
        {}    

    template<class D, class E>
        MixtureDistributionEMEstimation< D, E >::~MixtureDistributionEMEstimation()
        {}    

    template<class D, class E>
        MixtureDistributionEMEstimation< D, E >::Estimator::Estimator(): OptimizationEstimation< D*, D, E >::Estimator()
        {
            _pi = true;
            _initializator = nullptr;
            _default_estimator = nullptr;
            _estimators.clear();
            _limit = true;
            this->_minits = 10;
        }    

    template<class D, class E>
        MixtureDistributionEMEstimation< D, E >::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimation< D*, D, E >::Estimator(estimator)
        {
            _pi = estimator._pi;
            if(estimator._initializator)
            { _initializator = static_cast< D* >(estimator._initializator->copy().release()); }
            else
            { _initializator = nullptr; }
            if(estimator._default_estimator)
            { _default_estimator = static_cast< typename E::Estimator* >(estimator._default_estimator->copy().release()); }
            else
            { _default_estimator = nullptr; }
            _estimators.clear();
            for(typename std::map< Index, typename E::Estimator* >::const_iterator it = estimator._estimators.cbegin(), it_end = estimator._estimators.cend(); it != it_end; ++it)            
            { _estimators[it->first] = static_cast< typename E::Estimator* >(it->second->copy().release()); }
            _limit = estimator._limit;
        }

    template<class D, class E>
        MixtureDistributionEMEstimation< D, E >::Estimator::~Estimator() 
        {
            delete _initializator;
            delete _default_estimator;
            for(typename std::map< Index, typename E::Estimator* >::iterator it = _estimators.begin(), it_end = _estimators.end(); it != it_end; ++it)            
            {
                delete it->second;
                it->second = nullptr;
            }
            _estimators.clear();
        }

    template<class D, class E>
        std::unique_ptr< typename E::Estimator::estimation_type > MixtureDistributionEMEstimation< D, E >::Estimator::operator() (const typename E::Estimator::estimation_type::data_type& data, const bool& lazy) const
        {
            if(!_initializator)
            { throw member_error("initializator", "you must give an initial mixture distribution in order to initialize the expectation-maximization algorithm"); }
            D* mixture = static_cast< D* >(_initializator->copy().release());
            typename E::Estimator::estimation_type::data_type::weighted_type weighted = typename E::Estimator::estimation_type::data_type::weighted_type(&data);
            double prev, curr = mixture->loglikelihood(data);
            unsigned int its = 0;
            std::unique_ptr< typename E::Estimator::estimation_type > estimation;
            D* buffer = nullptr;
            if(!lazy)
            {
                estimation = std::make_unique< MixtureDistributionEMEstimation< D, E > >(mixture, &data);
                static_cast< MixtureDistributionEMEstimation< D, E >* >(estimation.get())->_iterations.push_back(static_cast< D* >(mixture->copy().release()));
            }
            else
            { estimation = std::make_unique< LazyEstimation< D, MixtureDistributionEMEstimation< D, E > > >(mixture); }
            std::unordered_set< uintptr_t > ch = this->children();
            do
            {
                if(_limit)
                {
                    for(std::unordered_set< uintptr_t >::const_iterator it = ch.begin(), it_end = ch.end(); it != it_end; ++it)
                    { __impl::set_maxits(*it, its + 1); }
                }
                delete buffer;
                buffer = static_cast< D* >((mixture->copy().release()));
                prev = curr;
                Eigen::VectorXd pi = mixture->get_pi();
                std::vector< typename E::Estimator::estimation_type* > estimations(mixture->get_nb_states(), nullptr);
                for(Index state = 0, max_state = mixture->get_nb_states(); state < max_state; ++state)
                {
                    typename E::Estimator::estimation_type::data_type::weighted_type::Generator* generator = static_cast< typename E::Estimator::estimation_type::data_type::weighted_type::Generator* >(weighted.generator().release());
                    while(generator->is_valid())
                    {
                        generator->weight(mixture->posterior(generator->event())[state]);
                        ++(*generator);
                    }
                    const typename E::Estimator* estimator = get_estimator(state);
                    if(estimator)
                    {
                        try
                        { estimations[state] = (*estimator)(weighted, true).release(); }
                        catch(const std::exception& exception)
                        { estimations[state] = nullptr; }
                    }
                    else
                    { estimations[state] = nullptr; }
                    pi[state] = weighted.compute_total();
                }
                for(Index state = 0, max_state = mixture->get_nb_states(); state < max_state; ++state)
                {
                    if(estimations[state])
                    {
                        mixture->set_observation(state, *(static_cast< const typename D::observation_type* >(estimations[state]->get_estimated())));
                        delete estimations[state];
                    }
                }
                pi = pi / pi.sum();
                if(_pi)
                { mixture->set_pi(pi); }
                curr = mixture->loglikelihood(data);
                if(!lazy)
                { static_cast< MixtureDistributionEMEstimation< D, E >* >(estimation.get())->_iterations.push_back(static_cast< D* >(mixture->copy().release())); }
                ++its;
            } while(this->run(its, __impl::reldiff(prev, curr)) && curr > prev);
            if(!boost::math::isfinite(curr) || curr < prev)
            {
                mixture->set_pi(buffer->get_pi());
                for(Index state = 0, max_state = buffer->get_nb_states(); state < max_state; ++state)
                { mixture->set_observation(state, *(buffer->get_observation(state))); }
            }
            delete buffer;
            if(_limit)
            {
                for(std::unordered_set< uintptr_t >::const_iterator it = ch.begin(), it_end = ch.end(); it != it_end; ++it)
                { __impl::unset_maxits(*it); }
            }
            return estimation;
        }

    template<class D, class E>
        std::unique_ptr< typename E::Estimator::estimation_type::Estimator > MixtureDistributionEMEstimation< D, E >::Estimator::copy() const
        { return std::make_unique< Estimator >(*this); }

    template<class D, class E>
        bool MixtureDistributionEMEstimation< D, E >::Estimator::get_pi() const
        { return _pi; }

    template<class D, class E>
        void MixtureDistributionEMEstimation< D, E >::Estimator::set_pi(const bool& pi)
        { _pi = pi; }

    template<class D, class E>
        const typename E::Estimator* MixtureDistributionEMEstimation< D, E >::Estimator::get_default_estimator() const
        { return _default_estimator; }

    template<class D, class E>
        void MixtureDistributionEMEstimation< D, E >::Estimator::set_default_estimator(const typename E::Estimator* estimator)
        { 
            if(_default_estimator)
            { delete _default_estimator; }
            if(estimator)
            { _default_estimator = static_cast< typename E::Estimator* >(estimator->copy().release()); }
            else
            { _default_estimator = nullptr; }
        }

    template<class D, class E>
        const typename E::Estimator* MixtureDistributionEMEstimation< D, E >::Estimator::get_estimator(const Index& index) const
        { 
            typename std::map< Index, typename E::Estimator* >::const_iterator it = _estimators.find(index);
            typename E::Estimator* estimator;
            if(it == _estimators.cend())
            { estimator = _default_estimator; }
            else
            { estimator = it->second; }
            return estimator;
        }

    template<class D, class E>
        void MixtureDistributionEMEstimation< D, E >::Estimator::set_estimator(const Index& index, const typename E::Estimator* estimator)
        { 
            typename std::map< Index, typename E::Estimator* >::iterator it = _estimators.find(index);
            if(it == _estimators.end() && estimator)
            { _estimators[index] = static_cast< typename E::Estimator* >(estimator->copy().release()); }
            else if(estimator)
            { 
                delete it->second;
                it->second = static_cast< typename E::Estimator* >(estimator->copy().release());
            }
            else
            {
                delete it->second;
                _estimators.erase(it);
            }
        }

    template<class D, class E>
        const D* MixtureDistributionEMEstimation< D, E >::Estimator::get_initializator() const
        { return _initializator; }

    template<class D, class E>
        void MixtureDistributionEMEstimation< D, E >::Estimator::set_initializator(const D& initializator)
        { _initializator = static_cast< D* >(initializator.copy().release()); }

    template<class D, class E>
        bool MixtureDistributionEMEstimation< D, E >::Estimator::get_limit() const
        { return _limit; }

    template<class D, class E>
        void MixtureDistributionEMEstimation< D, E >::Estimator::set_limit(const bool& limit)
        { _limit = limit; }

    template<class D, class E>
        std::unordered_set< uintptr_t > MixtureDistributionEMEstimation< D, E >::Estimator::children() const
        {
            std::unordered_set< uintptr_t > ch;
            for(typename std::map< Index, typename E::Estimator* >::const_iterator it = _estimators.cbegin(), it_end = _estimators.cend(); it != it_end; ++it)
            {
                ch.insert(this->compute_identifier(*(it->second)));
                __impl::merge(ch, this->compute_children(*(it->second)));
            }
            ch.insert(this->compute_identifier(*_default_estimator));
            __impl::merge(ch, this->compute_children(*_default_estimator));
            return ch;
        }
}

#endif