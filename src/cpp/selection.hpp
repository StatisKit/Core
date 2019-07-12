    template<class D, class B>
        Selection< D, B >::Selection() : ActiveEstimation< D, B >()
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        Selection< D, B >::Selection(const typename B::data_type* data) : ActiveEstimation< D, B >(data)
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        Selection< D, B >::Selection(const D * estimated, const typename B::data_type* data) : ActiveEstimation< D, B >(estimated, data)
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        Selection< D, B >::Selection(const Selection< D, B >& estimation)
        {
            _estimations.resize(estimation.size(), nullptr);
            for(Index index = 0, max_index = estimation.size(); index < max_index; ++index)
            { _estimations[index] = static_cast< B* >(estimation._estimations[index]); }/*->copy().release()); TODO */
            _scores = estimation._scores;
            this->_data = estimation._data->copy().release();
            finalize();
        }

    template<class D, class B>
        Selection< D, B >::~Selection()
        {
            this->_estimated = nullptr;
            for(Index index = 0, max_index = size(); index < max_index; ++index)
            { 
                if(_estimations[index])
                {
                    delete _estimations[index];
                    _estimations[index] = nullptr;
                }
            }
            _estimations.clear();
            _scores.clear();
        }
    
    template<class D, class B>
        Index Selection< D, B >::size() const
        { return _scores.size(); }

    template<class D, class B>
        B const * Selection< D, B >::get_estimation(const Index& index) const
        { return _estimations[index]; }

    template<class D, class B>
        const double& Selection< D, B >::get_score(const Index& index) const
        { return _scores[index]; }

    template<class D, class B>
        void Selection< D, B >::finalize()
        {
            std::vector< double >::const_iterator it = std::max_element(_scores.cbegin(), _scores.cend());
            if(it != _scores.cend() && boost::math::isfinite(*it))
            { this->_estimated = static_cast< const D * >(_estimations[distance(_scores.cbegin(), it)]->get_estimated()); }
            else
            { this->_estimated = nullptr; }
        }

    template<class D, class B>
        Selection< D, B >::Estimator::~Estimator()
        {
            for(Index index = 0, max_index = _estimators.size(); index < max_index; ++index)
            { 
                delete _estimators[index];
                _estimators[index] = nullptr;
            }
            _estimators.clear();
        }

    template<class D, class B>
        std::unique_ptr< typename B::Estimator::estimation_type > Selection< D, B >::Estimator::operator() (const typename B::data_type& data, const bool& lazy) const
        {
            std::unique_ptr< typename B::Estimator::estimation_type > estimation;
            if(lazy)
            {
                std::unique_ptr< typename B::Estimator::estimation_type > _estimation;
                double curr, prev = -1 * std::numeric_limits< double >::infinity();
                for(Index index = 0, max_index = size(); index < max_index; ++index)
                { 
                    try
                    {
                        if(_estimators[index])
                        {
                            _estimation = (*(_estimators[index]))(data, true);
                            curr = scoring(_estimation->get_estimated(), data);
                            if(curr > prev && boost::math::isfinite(curr))
                            {
                                prev = curr;
                                estimation.swap(_estimation);
                            }
                        }
                    }
                    catch(const std::exception& e)
                    {}
                }
            }
            else
            {
                Selection< D, B >* _estimation = new Selection< D, B >(data.copy().release());
                for(Index index = 0, max_index = size(); index < max_index; ++index)
                {
                    try
                    {
                        _estimation->_estimations.push_back(static_cast< B* >((*(_estimators[index]))(data, false).release()));
                        _estimation->_scores.push_back(scoring(_estimation->_estimations.back()->get_estimated(), data));
                    }
                    catch(const std::exception& e)
                    {
                        _estimation->_estimations.push_back(nullptr);
                        _estimation->_scores.push_back(std::numeric_limits< double >::quiet_NaN());
                    }
                }
                _estimation->finalize();
                estimation.reset(_estimation);
            }
            if(!estimation || !(estimation->get_estimated()))
            { throw std::runtime_error("All estimations failed, perform manually the estimations in order to investigate what went wrong"); }
            return estimation;
        }

    template<class D, class B>
        Index Selection< D, B >::Estimator::size() const
        { return _estimators.size(); }

    template<class D, class B>
        typename B::Estimator* Selection< D, B >::Estimator::get_estimator(const Index& index)
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            return _estimators[index]; 
        }

    template<class D, class B>
        void Selection< D, B >::Estimator::set_estimator(const Index& index, const typename B::Estimator& estimator)
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            delete _estimators[index];
            _estimators[index] = static_cast< typename B::Estimator* >(estimator.copy().release());
        }

    template<class D, class B>
        void Selection< D, B >::Estimator::add_estimator(const typename B::Estimator& estimator)
        { _estimators.push_back(static_cast< typename B::Estimator* >(estimator.copy().release())); }

    template<class D, class B>
        void Selection< D, B >::Estimator::remove_estimator(const Index& index)
        {
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            typename std::vector< typename B::Estimator * >::iterator it = _estimators.begin();
            advance(it, index);
            delete *it;
            _estimators.erase(it);
        }

    template<class D, class B>
        void Selection< D, B >::Estimator::init()
        { _estimators.clear(); }

    template<class D, class B>
        void Selection< D, B >::Estimator::init(const Estimator& estimator)
        { 
            _estimators.resize(estimator.size());
            for(Index index = 0, max_index = estimator.size(); index < max_index; ++index)
            { _estimators[index] = static_cast< typename B::Estimator* >(estimator._estimators[index]->copy().release()); }
        }

    template<class D, class B>
        std::unordered_set< uintptr_t > Selection< D, B >::Estimator::children() const
        {
            std::unordered_set< uintptr_t > ch;
            for(typename std::vector< typename B::Estimator* >::const_iterator it = _estimators.cbegin(), it_end = _estimators.cend(); it != it_end; ++it)
            {
                ch.insert(this->compute_identifier(**it));
                __impl::merge(ch, this->compute_children(**it));
            }
            return ch;
        }

    template<class D, class B>
        Selection< D, B >::CriterionEstimator::CriterionEstimator()
        {
            this->init();
            _criterion = criterion_type::BIC;
        }

    template<class D, class B>
        Selection< D, B >::CriterionEstimator::CriterionEstimator(const CriterionEstimator& estimator)
        {
            this->init(estimator);
            _criterion = estimator._criterion;
        }

    template<class D, class B>
        Selection< D, B >::CriterionEstimator::~CriterionEstimator()
        {}

    template<class D, class B>
        const typename Selection< D, B >::CriterionEstimator::criterion_type& Selection< D, B >::CriterionEstimator::get_criterion() const
        { return _criterion; }

    template<class D, class B>
        void Selection< D, B >::CriterionEstimator::set_criterion(const criterion_type& criterion)
        { _criterion = criterion; }

    template<class D, class B>
        double Selection< D, B >::CriterionEstimator::scoring(const typename B::estimated_type * estimated, typename B::data_type const & data) const
        {
            double score = estimated->loglikelihood(data);
            double total = data.compute_total();
            unsigned int nb_parameters = estimated->get_nb_parameters();
            switch(_criterion)
            {
                case AIC:
                    score -= nb_parameters;
                    break;
                case AICc:
                    score -= nb_parameters * (1 + (nb_parameters + 1) / (total - nb_parameters - 1)) ;
                    break;
                case BIC:
                    score -= nb_parameters * log(total) / 2.;
                    break;
                case HQIC:
                    score -= nb_parameters * log(log(total)) / 2.;
                    break;
            }
            return score;
        }
