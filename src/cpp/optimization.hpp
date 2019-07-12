
    template<typename T>
        Optimization< T >::Optimization()
        {
            _mindiff = 1e-5;
            _minits = 1;
            _maxits = 10e6;
        }

    template<typename T>
        Optimization< T >::Optimization(const Optimization< T >& optimization)
        {
            _mindiff = optimization._mindiff;
            _minits = optimization._minits;
            _maxits = optimization._maxits;
        }

    template<typename T>
        Optimization< T >::~Optimization()
        {}

    template<typename T>
        const double& Optimization< T >::get_mindiff() const
        { return _mindiff; }

    template<typename T>
        void Optimization< T >::set_mindiff(const double& mindiff)
        { _mindiff = mindiff; }

    template<typename T>
        unsigned int Optimization< T >::get_minits() const
        { return _minits; }

    template<typename T>
        void Optimization< T >::set_minits(const unsigned int& minits)
        { _minits = minits; }

    template<typename T>
        unsigned int Optimization< T >::get_maxits() const
        { return _maxits; }

    template<typename T>
        void Optimization< T >::set_maxits(const unsigned int& maxits)
        { _maxits = maxits; }

    template<typename T>
        bool Optimization< T >::run(const unsigned int& its, const double& delta) const
        { 
            bool status = true;
            if(its > _minits)
            {
                if(!boost::math::isfinite(delta) || its > __impl::get_maxits((uintptr_t)(this), _maxits))
                { status = false; }
                else if(delta < _mindiff)
                { status = false; }
            }
            return status;
        }

    template<typename T>
        SimulatedAnnealing< T >::SimulatedAnnealing()
        {
            _schedule = new ExponentialSchedule(1.);
            _minits = 1;
            _maxits = 10e6;
        }

    template<typename T>
        SimulatedAnnealing< T >::SimulatedAnnealing(const SimulatedAnnealing< T >& simulated_annealing)
        {
            if(simulated_annealing._schedule)
            { _schedule = simulated_annealing._schedule->copy().release(); }
            else
            { _schedule = nullptr; }
            _minits = simulated_annealing._minits;
            _maxits = simulated_annealing._maxits;
        }

    template<typename T>
        SimulatedAnnealing< T >::~SimulatedAnnealing()
        {
            if(_schedule)
            {
                delete _schedule;
                _schedule = nullptr;
            }
        }

    template<typename T>
        const Schedule* SimulatedAnnealing< T >::get_schedule() const
        { return _schedule; }

    template<typename T>
        void SimulatedAnnealing< T >::set_schedule(const Schedule& schedule)
        { _schedule = schedule.copy().release(); }

    template<typename T>
        unsigned int SimulatedAnnealing< T >::get_minits() const
        { return _minits; }

    template<typename T>
        void SimulatedAnnealing< T >::set_minits(const unsigned int& minits)
        { _minits = minits; }

    template<typename T>
        unsigned int SimulatedAnnealing< T >::get_maxits() const
        { return _maxits; }

    template<typename T>
        void SimulatedAnnealing< T >::set_maxits(const unsigned int& maxits)
        { _maxits = maxits; }

    template<typename T>
        bool SimulatedAnnealing< T >::accept(const unsigned int& its, const double& delta) const
        { 
            bool status = true;
            if(its > _minits && delta < 0)
            {
                double maxits = __impl::get_maxits((uintptr_t)(this), _maxits);
                if(its > maxits)
                { status = false; }
                else 
                {
                    double u = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
                    status = u < exp(- delta / (*_schedule)((its - _minits) / maxits));
                }
            }
            return status;
        }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::OptimizationEstimationImpl() : ActiveEstimation< D, B >()
        { _iterations.clear(); }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::OptimizationEstimationImpl(const D * estimated, const typename B::data_type* data) : ActiveEstimation< D, B >(estimated, data)
        { _iterations.clear(); }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::OptimizationEstimationImpl(const OptimizationEstimationImpl< T, D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        { _iterations = estimation._iterations; }
        
    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::~OptimizationEstimationImpl()
        { _iterations.clear(); }

    template<class T, class D, class B>
        Index OptimizationEstimationImpl< T, D, B >::size() const
        { return _iterations.size(); }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::Estimator::Estimator() : Optimization< typename B::Estimator >()
        {}

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::Estimator::Estimator(const Estimator& estimator) : Optimization< typename B::Estimator >(estimator)
        {}

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::Estimator::~Estimator()
        {}

    template<class T, class D, class B>
        SimulatedAnnealingEstimation< T, D, B >::SimulatedAnnealingEstimation() : ActiveEstimation< D, B >()
        { _iterations.clear(); }

    template<class T, class D, class B>
        SimulatedAnnealingEstimation< T, D, B >::SimulatedAnnealingEstimation(const D * estimated, const typename B::data_type* data) : ActiveEstimation< D, B >(estimated, data)
        { _iterations.clear(); }

    template<class T, class D, class B>
        SimulatedAnnealingEstimation< T, D, B >::SimulatedAnnealingEstimation(const SimulatedAnnealingEstimation< T, D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        { 
            for(Index index = 0, max_index = this->_iterations.size(); index < max_index; ++index)
            { _iterations[index] = static_cast< T >(_iterations[index]->copy().release()); }
        }
        
    template<class T, class D, class B>
        SimulatedAnnealingEstimation< T, D, B >::~SimulatedAnnealingEstimation()
        { _iterations.clear(); }

    template<class T, class D, class B>
        Index SimulatedAnnealingEstimation< T, D, B >::size() const
        { return _iterations.size(); }

    template<class T, class D, class B>
        SimulatedAnnealingEstimation< T, D, B >::Estimator::Estimator() : SimulatedAnnealing< typename B::Estimator >()
        {}

    template<class T, class D, class B>
        SimulatedAnnealingEstimation< T, D, B >::Estimator::Estimator(const Estimator& estimator) : SimulatedAnnealing< typename B::Estimator >(estimator)
        {}

    template<class T, class D, class B>
        SimulatedAnnealingEstimation< T, D, B >::Estimator::~Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation() : OptimizationEstimationImpl< T, D, B >()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation(D const * estimated, typename B::data_type const * data) : OptimizationEstimationImpl< T, D, B >(estimated, data)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation(const OptimizationEstimation< T, D, B>& estimation) : OptimizationEstimationImpl< T, D, B >(estimation)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::~OptimizationEstimation()
        {}

    template<class T, class D, class B>
        const T OptimizationEstimation< T, D, B >::get_iteration(const Index& index) const
        {
            if(index >= this->size())
            { throw size_error("index", this->size(), size_error::inferior); }
            return this->_iterations[index];
        }

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::Estimator() : OptimizationEstimationImpl< T, D, B >::Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimationImpl< T, D, B >::Estimator(estimator)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::~Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::OptimizationEstimation() : OptimizationEstimationImpl< T*, D, B >()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::OptimizationEstimation(D const * estimated, typename B::data_type const * data) : OptimizationEstimationImpl< T*, D, B >(estimated, data)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::OptimizationEstimation(const OptimizationEstimation< T*, D, B >& estimation) : OptimizationEstimationImpl< T*, D, B >(estimation)
        { 
            for(Index index = 0, max_index = this->_iterations.size(); index < max_index; ++index)
            { this->_iterations[index] = static_cast< T* >(this->_iterations[index]->copy().release()); }
        }

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::~OptimizationEstimation()
        {
            for(Index index = 0, max_index = this->_iterations.size(); index < max_index; ++index)
            { 
                delete this->_iterations[index];
                this->_iterations[index] = nullptr; 
            }
        }

    template<class T, class D, class B>
        const T* OptimizationEstimation< T*, D, B >::get_iteration(const Index& index) const
        {
            if(index >= this->size())
            { throw size_error("index", this->size(), size_error::inferior); }
            return this->_iterations[index];
        }

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::Estimator::Estimator() : OptimizationEstimationImpl< T*, D, B >::Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimationImpl< T*, D, B >::Estimator(estimator)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::Estimator::~Estimator()
        {}