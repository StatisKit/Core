#ifndef STATISKIT_CORE_ESTIMATION_HPP
#define STATISKIT_CORE_ESTIMATION_HPP

namespace statiskit
{
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation()
        { _estimated = nullptr; }
    
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation(const D * estimated)
        { _estimated = estimated; }
    
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation(const LazyEstimation< D, B >& estimation)
        { 
            if(estimation._estimated)
            { _estimated = estimation._estimated->copy().release(); }
            else
            { _estimated = nullptr; }
        }

    template<class D, class B>
        LazyEstimation< D, B >::~LazyEstimation()
        { 
            if(_estimated)
            { delete _estimated; }
        }

    template<class D, class B>    
        typename B::estimated_type const * LazyEstimation< D, B >::get_estimated() const
        { return _estimated; }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation() : LazyEstimation< D, B >()
        { _data = nullptr; }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation(const D * estimated, const typename B::data_type& data) : LazyEstimation< D, B >(estimated)
        { _data = data.copy().release(); }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation(const ActiveEstimation< D, B >& estimation) : LazyEstimation< D, B >(estimation)
        { _data = estimation._data->copy().release(); }

    template<class D, class B>
        ActiveEstimation< D, B >::~ActiveEstimation()
        { 
            if(_data)
            { delete _data; }
        }

    template<class D, class B>
        const typename B::data_type * ActiveEstimation< D, B >::get_data() const
        { return _data; }

    template<class D, class B>
        ListEstimation< D, B >::ListEstimation() : ActiveEstimation< D, B >()
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        ListEstimation< D, B >::ListEstimation(const ListEstimation< D, B >& estimation)
        {
            _estimations.resize(estimation.size(), nullptr);
            for(size_t index = 0, max_index = estimation.size(); index < max_index; ++index)
            { _estimations[index] = estimation._estimations[index]->copy().release(); }
            _scores = estimation._estimations;
            this->_data = estimation._data->copy().release();
            finalize();
        }

    template<class D, class B>
        ListEstimation< D, B >::~ListEstimation()
        {
            this->_estimated = nullptr;
            for(size_t index = 0, max_index = size(); index < max_index; ++index)
            { 
                delete _estimations[index];
                _estimations[index] = nullptr;
            }
            _estimations.clear();
            _scores.clear();
        }
    
    template<class D, class B>
        size_t ListEstimation< D, B >::size() const
        { return _scores.size(); }

    template<class D, class B>
        B const * ListEstimation< D, B >::get_estimation(const size_t& index) const
        { return _estimations[index]; }

    template<class D, class B>
        const double& ListEstimation< D, B >::get_score(const size_t& index) const
        { return _scores[index]; }

    template<class D, class B>
        void ListEstimation< D, B >::finalize()
        {
            std::vector< double >::const_iterator it = std::max_element(_scores.cbegin(), _scores.cend());
            if(it != _scores.cend() && boost::math::isfinite(*it))
            { this->_estimated = _estimations[distance(_scores.cbegin(), it)]->get_estimated(); }
            else
            { this->_estimated = nullptr; }
        }

    template<class D, class B>
        ListEstimation< D, B >::Estimator::Estimator()
        { _estimators.clear(); }

    template<class D, class B>
        ListEstimation< D, B >::Estimator::Estimator(const Estimator& estimator)
        { 
            _estimators.resize(estimator.size());
            for(size_t index = 0, max_index = estimator.size(); index < max_index; ++index)
            { _estimators[index] = estimator._estimators[index]->copy().release(); }
        }

    template<class D, class B>
        ListEstimation< D, B >::Estimator::~Estimator()
        { 
            for(size_t index = 0, max_index = estimator.size(); index < max_index; ++index)
            { 
                delete _estimators[index];
                _estimators[index] = nullptr;
            }
            _estimators.clear();
        }

    template<class D, class B>
        std::unique_ptr< typename B::estimation_type > ListEstimation< D, B >::Estimator::operator() (const typename B::estimation_type::data_type& data, const bool& lazy) const
        {
            std::unique_ptr< typename B::estimation_type > estimation = std::make_unique< LazyEstimation< D, B > >();;
            if(lazy)
            {
                std::unique_ptr< typename B::estimation_type > _estimation;
                double curr, prev = std::numeric_limits< double >::quiet_NaN();
                for(size_t index = 0, max_index = size(); index < max_index; ++index)
                { 
                    try
                    {
                        _estimation = (*(_estimators[index]))(data, true);
                         curr = scoring(_estimation->get_estimated(), data);
                        if(curr > prev && boost::math::isfinite(curr))
                        {
                            prev = curr;
                            estimation.swap(_estimation);
                        }
                    }
                    catch(const std::exception& e)
                    {}
                }
            }
            else
            {
                ListEstimation< D, B >* _estimation = new ListEstimation< D, B >(nullptr, data);
                for(size_t index = 0, max_index = size(); index < max_index; ++index)
                { 
                    try
                    {
                        _estimation->_estimations.push_back((*(_estimators[index]))(data, false).release());
                        _estimation->_scores.push_back(scoring(_estimation._estimations.back()->get_estimated().get(), data));
                    }
                    catch(const std::exception& e)
                    {
                        _estimation->_estimations.puhs_back(nullptr);
                        _estimation->_scores.push_back(std::numeric_limits< double >::quiet_NaN());
                    }
                }
                _estimation->finalize();
                estimation.reset(_estimation);
            }
            if(!estimation.get_estimated())
            { std::runtime_error("All estimations failed, perform manually the estimation in order to investigate what went wrong"); }
            return estimation;
        }

    template<class D, class B>
        size_t ListEstimation< D, B >::Estimator::size() const
        { return _estimators.size(); }

    template<class D, class B>
        typename B::Estimator* ListEstimation< D, B >::Estimator::get_estimator(const size_t& index)
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            return _estimators; 
        }

    template<class D, class B>
        void ListEstimation< D, B >::Estimator::set_estimator(const size_t& index, const typename B::Estimator& estimatior)
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            delete _estimators[index];
            _estimators[index] = estimator.copy().release();
            return _estimators; 
        }

    template<class D, class B>
        void ListEstimation< D, B >::Estimator::add_estimator(const typename B::Estimator& estimatior)
        { _estimators.push_back(estimator.copy().release()); }

    template<class D, class B>
        void ListEstimation< D, B >::Estimator::remove_estimator(const size_t& index)
        {
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            typename std::vector< typename B::Estimator * >::iterator it = _estimators.begin();
            advance(it, index);
            delete *it;
            _estimators.erase(it);
        }

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation() : ActiveEstimation< D, B >()
        { _steps.clear(); }

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation(const OptimizationEstimation< D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        { 
            if(std::is_pointer< T >::value)
            {
                _steps.resize(estimation.size(), nullptr);
                for(size_t index = 0, max_index = estimation.size(); index < _max_index; ++index)
                { _steps[index] = new T(estimation._steps[index]); }
            }
            else
            { _steps = estimation._steps; }
        }

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation()
        {
            if(std::is_pointer< T >::value)
            {
                for(size_t index = 0, max_index = size(); index < _max_index; ++index)
                { 
                    delete _steps[index];
                    _steps[index] = nullptr; 
                }
            }
            _steps.clear();
        }

    template<class T, class D, class B>
        size_t OptimizationEstimation< T, D, B >::size() const
        { return _steps.size(); }

    template<class T, class D, class B>
        const T OptimizationEstimation< T, D, B >::get_step(const size_t& index) const
        {
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            return _steps[index];
        }

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::Estimator()
    {
        _mindiff = 1e-5;
        _minits = 10e2;
        _maxits = 10e6;
    }

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::Estimator(const Estimator& estimator)
    {
        _mindiff = estimator._mindiff;
        _minits = estimator._minits;
        _maxits = estimator._maxits;
    }

    template<class T, class D, class B>
        bool OptimizationEstimation< T, D, B >::Estimator::run(const unsigned int& iteration, const T& prev, const T& curr) const
        { 
            bool status = true;
            double reldiff = __impl::reldiff(prev, curr);
            if(!boost::math::isfinite(reldiff) || its > _maxits)
            { status = false; }
            else if(reldiff < _mindiff)
            { status = false; }
            return status;
        }

    template<class T, class D, class B>
        const double& OptimizationEstimation< T, D, B >::Estimator::get_mindiff() const
        { return _mindiff; }
    
    template<class T, class D, class B>
        void OptimizationEstimation< T, D, B >::Estimator::set_mindiff(const double& mindiff)
        { _mindiff = mindiff; }

    template<class T, class D, class B>
        unsigned int OptimizationEstimation< T, D, B >::Estimator::get_minits() const
        { return _minits; }
    
    template<class T, class D, class B>
        void OptimizationEstimation< T, D, B >::Estimator::set_minits(const unsigned int& minits)
        { _minits = minits; }

    template<class T, class D, class B>
        unsigned int OptimizationEstimation< T, D, B >::Estimator::get_maxits() const
        { return _maxits; }

    template<class T, class D, class B>
        void OptimizationEstimation< T, D, B >::Estimator::set_maxits(const unsigned int& maxits)
        { _maxits = maxits; }
}

#endif