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

            B* const get_estimation(const Index& index) const;

            const double& get_score(const Index& index) const;

            class Estimator : public B::Estimator
            {
                public:
                    virtual ~Estimator();
                  
                    using B::Estimator::operator();
                    virtual std::unique_ptr< typename B::Estimator::estimation_type > operator() (typename B::data_type const & data) const;

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
            std::vector< B* > estimations;
            std::vector< double > scores;

            void finalize();
    };

    typedef Selection< CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionSelection;
    typedef CategoricalUnivariateDistributionSelection::CriterionEstimator CategoricalUnivariateDistributionCriterionEstimator;

    typedef Selection< DiscreteUnivariateDistributionEstimation > DiscreteUnivariateDistributionSelection;
    typedef DiscreteUnivariateDistributionSelection::CriterionEstimator DiscreteUnivariateDistributionCriterionEstimator;

    typedef Selection< ContinuousUnivariateDistributionEstimation > ContinuousUnivariateDistributionSelection;
    typedef ContinuousUnivariateDistributionSelection::CriterionEstimator ContinuousUnivariateDistributionCriterionEstimator;

    typedef Selection< MultivariateDistributionEstimation > MultivariateDistributionSelection;
    typedef MultivariateDistributionSelection::CriterionEstimator MultivariateDistributionCriterionEstimator;

    typedef Selection< CategoricalMultivariateDistributionEstimation > CategoricalMultivariateDistributionSelection;
    typedef CategoricalMultivariateDistributionSelection::CriterionEstimator CategoricalMultivariateDistributionCriterionEstimator;

    typedef Selection< DiscreteMultivariateDistributionEstimation > DiscreteMultivariateDistributionSelection;
    typedef DiscreteMultivariateDistributionSelection::CriterionEstimator DiscreteMultivariateDistributionCriterionEstimator;

    typedef Selection< ContinuousMultivariateDistributionEstimation > ContinuousMultivariateDistributionSelection;
    typedef ContinuousMultivariateDistributionSelection::CriterionEstimator ContinuousMultivariateDistributionCriterionEstimator;

    // typedef Selection< CategoricalUnivariateConditionalDistributionEstimation > CategoricalUnivariateConditionalDistributionSelection;
    // typedef CategoricalUnivariateConditionalDistributionSelection::CriterionEstimator CategoricalUnivariateConditionalDistributionCriterionEstimator;

    // typedef Selection< DiscreteUnivariateConditionalDistributionEstimation > DiscreteUnivariateConditionalDistributionSelection;
    // typedef DiscreteUnivariateConditionalDistributionSelection::CriterionEstimator DiscreteUnivariateConditionalDistributionCriterionEstimator;

    // typedef Selection< ContinuousUnivariateConditionalDistributionEstimation > ContinuousUnivariateConditionalDistributionSelection;
    // typedef ContinuousUnivariateConditionalDistributionSelection::CriterionEstimator ContinuousUnivariateConditionalDistributionCriterionEstimator;

    // typedef Selection< MultivariateConditionalDistributionEstimation > MultivariateConditionalDistributionSelection;
    // typedef MultivariateConditionalDistributionSelection::CriterionEstimator MultivariateConditionalDistributionCriterionEstimator;

    // typedef Selection< CategoricalMultivariateConditionalDistributionEstimation > CategoricalMultivariateConditionalDistributionSelection;
    // typedef CategoricalMultivariateConditionalDistributionSelection::CriterionEstimator CategoricalMultivariateConditionalDistributionCriterionEstimator;

    // typedef Selection< DiscreteMultivariateConditionalDistributionEstimation > DiscreteMultivariateConditionalDistributionSelection;
    // typedef DiscreteMultivariateConditionalDistributionSelection::CriterionEstimator DiscreteMultivariateConditionalDistributionCriterionEstimator;

    // typedef Selection< ContinuousMultivariateConditionalDistributionEstimation > ContinuousMultivariateConditionalDistributionSelection;
    // typedef ContinuousMultivariateConditionalDistributionSelection::CriterionEstimator ContinuousMultivariateConditionalDistributionCriterionEstimator;

    template<class B> class SlopeHeuristicSelection : public SlopeHeuristic, public PolymorphicCopy<SlopeHeuristicSelection<B>, B>
    {
        public:
            SlopeHeuristicSelection(const typename B::data_type* data);
            SlopeHeuristicSelection(const SlopeHeuristicSelection< B >& she);
            virtual ~SlopeHeuristicSelection();

            const typename B::distribution_type* get_proposal(const Index& index) const;
            
        protected:
            std::vector< typename B::distribution_type* > proposals;

            void add(const double& penshape, const double& score, typename B::distribution_type* proposal);

            void finalize();
    };
}

#include "selection.hpp"