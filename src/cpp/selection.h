#pragma once

#include "estimation.h"
#include "slope_heuristic.h"

namespace statiskit
{
    template<class B> class Selection : public PolymorphicCopy<Selection<B>, B>
    {
        public:
            Selection();
            Selection(const typename B::data_type* data);
            Selection(const Selection<B>& selection);
            virtual ~Selection();

            Index size() const;

            typename B::distribution_type const * get_distribution(const Index& index) const;

            const double& get_score(const Index& index) const;

            class Estimator : public B::Estimator
            {
                public:
                    virtual ~Estimator();
                  
                    virtual std::unique_ptr< typename B::Estimator::estimation_type > operator() (typename B::data_type const & data, const bool& lazy=true) const;

                    Index size() const;

                    typename B::Estimator * get_estimator(const Index& index);
                    void set_estimator(const Index& index, const typename B::Estimator& estimator);

                    void add_estimator(const typename B::Estimator& estimator);
                    void remove_estimator(const Index& index);

                protected:
                    std::vector< typename B::Estimator * > estimators;

                    virtual double scoring(const typename B::distribution_type * distribution, typename B::data_type const & data) const = 0;

                    void init();
                    void init(const Estimator& estimator);
            };

            class CriterionEstimator : public PolymorphicCopy< CriterionEstimator, Estimator >
            {
                public:
                    enum criterion_type {
                        AIC,
                        AICc,
                        BIC,
                        HQIC
                    };

                    CriterionEstimator();
                    CriterionEstimator(const CriterionEstimator& estimator);
                    virtual ~CriterionEstimator();

                    const criterion_type& get_criterion() const;
                    void set_criterion(const criterion_type& criterion);

                protected:
                    criterion_type criterion;

                    virtual double scoring(const typename B::distribution_type * distribution, typename B::data_type const & data) const;
            };

        protected:
            std::vector< typename B::distribution_type* > distributions;
            std::vector< double > scores;

            void finalize();
    };

    template<class B> class SlopeHeuristicSelection : public SlopeHeuristic, public PolymorphicCopy<SlopeHeuristicSelection<B>, B>
    {
        public:
            SlopeHeuristicSelection(const typename B::data_type* data);
            SlopeHeuristicSelection(const SlopeHeuristicSelection< B >& she);
            virtual ~SlopeHeuristicSelection();

            virtual typename B::distribution_type const * get_distribution() const;

            const typename B::distribution_type* get_proposal(const Index& index) const;
            
        protected:
            std::vector< typename B::distribution_type* > proposals;

            void add(const double& penshape, const double& score, typename B::distribution_type* proposal);

            void finalize();
    };
}

#include "selection.hpp"