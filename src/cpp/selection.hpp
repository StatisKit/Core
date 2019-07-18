#ifndef AUTOWIG
#pragma once

namespace statiskit
{
    template<class B>
        Selection<B>::Selection() : PolymorphicCopy<Selection<B>, B>()
        {
            this->estimations.clear();
            this->scores.clear();
        }

    template<class B>
        Selection<B>::Selection(const typename B::data_type* data) : PolymorphicCopy<Selection<B>, B>(data)
        {
            this->estimations.clear();
            this->scores.clear();
        }

    template<class B>
        Selection<B>::Selection(const Selection<B>& estimation) : PolymorphicCopy<Selection<B>, B>(estimation)
        {
            this->estimations.resize(estimation.size(), nullptr);
            for (Index index = 0, max_index = estimation.size(); index < max_index; ++index) {
                if (estimation.estimations[index]) { 
                    this->estimations[index] = static_cast< B* >(estimation.estimations[index]->copy().release());
                } else {
                    this->estimations[index] = nullptr;
                }
            }
            this->scores = estimation.scores;
            this->finalize();
        }

    template<class B>
        Selection<B>::~Selection()
        {
            for(Index index = 0, max_index = this->size(); index < max_index; ++index) { 
                if(this->estimations[index]) {
                    delete this->estimations[index];
                    this->estimations[index] = nullptr;
                }
            }
            this->estimations.clear();
            this->scores.clear();
        }
    
    template<class B>
        Index Selection<B>::size() const
        {
            return this->scores.size();
        }

    template<class B>
        B * const Selection<B>::get_estimation(const Index& index) const
        {
            return this->estimations[index];
        }

    template<class B>
        const double& Selection<B>::get_score(const Index& index) const
        {
            return this->scores[index];
        }

    template<class B>
        void Selection<B>::finalize()
        {
            std::vector< double >::const_iterator it = std::max_element(this->scores.cbegin(), this->scores.cend());
            if (it != this->scores.cend() && boost::math::isfinite(*it)) {
                this->distribution = static_cast< typename B::distribution_type * >(this->estimations[distance(this->scores.cbegin(), it)]->get_distribution()->copy().release());
            } else {
                this->distribution = nullptr;
            }
        }

    template<class B>
        Selection<B>::Estimator::~Estimator()
        {
            for (Index index = 0, max_index = this->estimators.size(); index < max_index; ++index) { 
                delete this->estimators[index];
                this->estimators[index] = nullptr;
            }
            this->estimators.clear();
        }

    template<class B>
        std::unique_ptr< typename B::Estimator::estimation_type > Selection<B>::Estimator::operator() (const typename B::data_type& data, const bool& lazy) const
        {
            std::unique_ptr<Selection<B>> estimation = std::make_unique<Selection<B>>(data.copy().release());
            for (Index index = 0, max_index = this->size(); index < max_index; ++index) {
                try {
                    estimation->estimations.push_back(static_cast< B* >((*(this->estimators[index]))(data).release()));
                    estimation->scores.push_back(scoring(estimation->estimations.back()->get_distribution(), data));
                } catch (const std::exception& e) {
                    estimation->estimations.push_back(nullptr);
                    estimation->scores.push_back(std::numeric_limits< double >::quiet_NaN());
                }
            }
            estimation->finalize();
            if (!estimation->get_distribution()) {
                throw std::runtime_error("All estimations failed, perform manually the estimations in order to investigate what went wrong");
            }
            return estimation;
        }

    template<class B>
        Index Selection<B>::Estimator::size() const
        {
            return this->estimators.size();
        }

    template<class B>
        typename B::Estimator* Selection<B>::Estimator::get_estimator(const Index& index)
        { 
            if (index >= this->size()) {
                throw size_error("index", this->size(), size_error::inferior);
            }
            return this->estimators[index]; 
        }

    template<class B>
        void Selection<B>::Estimator::set_estimator(const Index& index, const typename B::Estimator& estimator)
        { 
            if (index >= size()) {
                throw size_error("index", size(), size_error::inferior);
            }
            delete this->estimators[index];
            this->estimators[index] = static_cast< typename B::Estimator* >(estimator.copy().release());
        }

    template<class B>
        void Selection<B>::Estimator::add_estimator(const typename B::Estimator& estimator)
        {
            this->estimators.push_back(static_cast< typename B::Estimator* >(estimator.copy().release()));
        }

    template<class B>
        void Selection<B>::Estimator::remove_estimator(const Index& index)
        {
            if (index >= this->size()) {
                throw size_error("index", this->size(), size_error::inferior);
            }
            typename std::vector< typename B::Estimator * >::iterator it = this->estimators.begin();
            advance(it, index);
            delete *it;
            this->estimators.erase(it);
        }

    template<class B>
        void Selection<B>::Estimator::init()
        {
            this->estimators.clear();
        }

    template<class B>
        void Selection<B>::Estimator::init(const Estimator& estimator)
        { 
            this->estimators.resize(estimator.size());
            for (Index index = 0, max_index = estimator.size(); index < max_index; ++index) {
                this->estimators[index] = static_cast< typename B::Estimator* >(estimator.estimators[index]->copy().release());
            }
        }

    template<class B>
        Selection<B>::CriterionEstimator::CriterionEstimator()
        {
            this->init();
            this->criterion = criterion_type::BIC;
        }

    template<class B>
        Selection<B>::CriterionEstimator::CriterionEstimator(const CriterionEstimator& estimator)
        {
            this->init(estimator);
            this->criterion = estimator.criterion;
        }

    template<class B>
        Selection<B>::CriterionEstimator::~CriterionEstimator()
        {}

    template<class B>
        const typename Selection<B>::CriterionEstimator::criterion_type& Selection<B>::CriterionEstimator::get_criterion() const
        {
            return this->criterion;
        }

    template<class B>
        void Selection<B>::CriterionEstimator::set_criterion(const criterion_type& criterion)
        {
            this->criterion = criterion;
        }

    template<class B>
        double Selection<B>::CriterionEstimator::scoring(const typename B::distribution_type * distribution, typename B::data_type const & data) const
        {
            double score = distribution->loglikelihood(data);
            double total = data.compute_total();
            unsigned int nb_parameters = distribution->get_nb_parameters();
            switch (this->criterion) {
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

    template<class B>
        SlopeHeuristicSelection<B>::SlopeHeuristicSelection(const typename B::data_type* data) : PolymorphicCopy<SlopeHeuristicSelection, B>(), SlopeHeuristic()
        { 
           this->proposals.clear();
        }

    template<class B>
        SlopeHeuristicSelection<B>::SlopeHeuristicSelection(const SlopeHeuristicSelection<B>& she) : PolymorphicCopy<SlopeHeuristicSelection, B>(she), SlopeHeuristic(she)
        {
            this->proposals = std::vector< typename B::distribution_type* >(she.proposals.size(), nullptr);
            for (Index index = 0, max_index = this->proposals.size(); index < max_index; ++index) {
                this->proposals[index] = static_cast< typename B::distribution_type* >(she.proposals[index]->copy().release());
            }
            this->finalize();
        }

    template<class B>
        SlopeHeuristicSelection<B>::~SlopeHeuristicSelection()
        { 
            this->distribution = nullptr;
            for(Index index = 0, max_index = this->proposals.size(); index < max_index; ++index)
            {
                if (this->proposals[index]) {
                    delete this->proposals[index];
                    this->proposals[index] = nullptr;
                }
            }
            this->proposals.clear();
        }
    
    template<class B>
        typename B::distribution_type const * SlopeHeuristicSelection<B>::get_distribution() const
        { 
            return this->distribution;
        }

    template<class B>
        const typename B::distribution_type* SlopeHeuristicSelection<B>::get_proposal(const Index& index) const
        {
            return this->proposals[index];
        }

    template<class B>
        void SlopeHeuristicSelection<B>::add(const double& penshape, const double& score, typename B::distribution_type* proposal)
        {
            if (boost::math::isfinite(penshape) && boost::math::isfinite(score)) {
                std::vector< double >::iterator it = std::lower_bound(this->penshapes.begin(), this->penshapes.end(), penshape);
                if(it == this->penshapes.end()) {
                    this->penshapes.push_back(penshape);
                    this->scores.push_back(score);
                    this->proposals.push_back(proposal);
                } else if(*it == penshape) {
                    Index index = distance(this->penshapes.begin(), it);
                    if (this->scores[index] < score) {
                        delete this->proposals[index];
                        this->scores[index] = score;
                        this->proposals[index] = proposal;
                    }
                } else {
                    Index index = distance(this->penshapes.begin(), it);
                    this->penshapes.insert(it, penshape);
                    this->scores.insert(this->scores.begin() + index, score);
                    this->proposals.insert(this->proposals.begin() + index, proposal);
                }
            }
        }

    template<class B>
        void SlopeHeuristicSelection<B>::finalize()
        {
            if (this->selected.size() > 0) {
                this->distribution = this->proposals[this->selected[(*this->selector)(*this)]];
            } else {
                this->distribution = nullptr;
            }
        }
}

#endif