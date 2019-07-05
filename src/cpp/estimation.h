#ifndef STATISKIT_CORE_ESTIMATION_H
#define STATISKIT_CORE_ESTIMATION_H

#include "base.h"
#include "sample_space.h"
#include "data.h"
#include "distribution.h"

namespace statiskit
{
    struct STATISKIT_CORE_API sample_space_error : parameter_error
    { sample_space_error(const outcome_type& expected); };

    struct STATISKIT_CORE_API sample_size_error : parameter_error
    { sample_size_error(const unsigned int& minsize); };

    struct STATISKIT_CORE_API overdispersion_error : parameter_error
    { overdispersion_error(); };

    struct STATISKIT_CORE_API underdispersion_error : parameter_error
    { underdispersion_error(); };

    template<class D>
    class DistributionEstimation
    {
        public:
            using distribution_type = D;
            using data_type = typename D::data_type;

            DistributionEstimation();
            DistributionEstimation(data_type const *data,
                                   distribution_type const * distribution);
            DistributionEstimation(const DistributionEstimation< D >& estimation);
            virtual ~DistributionEstimation();

            virtual data_type const * get_data() const;

            virtual distribution_type const * get_distribution() const;

            virtual std::unique_ptr< DistributionEstimation< D > > copy() const;
            
            struct STATISKIT_CORE_API Estimator
            { 
                using estimation_type = DistributionEstimation<D>;

                virtual ~Estimator() = 0;

                virtual std::unique_ptr< estimation_type > operator() (const data_type& data,
                                                                       const bool& lazy=true) const = 0;

                virtual std::unique_ptr< Estimator > copy() const = 0;
            };

        protected:
            data_type const * data;
            distribution_type const * distribution;
    };

    class STATISKIT_CORE_API UnivariateDistributionEstimation : DistributionEstimation< UnivariateDistribution >
    {
        public:
            using DistributionEstimation< UnivariateDistribution >::DistributionEstimation;
            
            struct STATISKIT_CORE_API Estimator : DistributionEstimation< UnivariateDistribution >::Estimator
            { 
                using DistributionEstimation< UnivariateDistribution >::Estimator::Estimator;
                using DistributionEstimation< UnivariateDistribution >::Estimator::estimation_type;

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                       const Index& variable,
                                                                       const bool& lazy=true) const;
            };
    };

    struct STATISKIT_CORE_API CategoricalUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        using UnivariateDistributionEstimation::UnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API DiscreteUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        using UnivariateDistributionEstimation::UnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API ContinuousUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        using UnivariateDistributionEstimation::UnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator {};
    };

    class STATISKIT_CORE_API MultivariateDistributionEstimation : DistributionEstimation< MultivariateDistribution >
    {
        public:
            using DistributionEstimation< MultivariateDistribution >::DistributionEstimation;
            
            struct STATISKIT_CORE_API Estimator : DistributionEstimation< MultivariateDistribution >::Estimator
            { 
                using DistributionEstimation< MultivariateDistribution >::Estimator::Estimator;
                using DistributionEstimation< MultivariateDistribution >::Estimator::estimation_type;

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                       const Indices& variables,
                                                                       const bool& lazy=true) const;
            };
    };

    struct STATISKIT_CORE_API CategoricalMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        using MultivariateDistributionEstimation::MultivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API DiscreteMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        using MultivariateDistributionEstimation::MultivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API ContinuousMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        using MultivariateDistributionEstimation::MultivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };

    template<class D>
    class ConditionalDistributionEstimation
    {
        public:
            using distribution_type = D;
            using response_data_type = typename D::response_data_type;
            using explanatory_data_type = typename D::explanatory_data_type;

            ConditionalDistributionEstimation();
            ConditionalDistributionEstimation(response_data_type const *response_data,
                                              explanatory_data_type const *explanatory_data,
                                              distribution_type const * distribution);
            ConditionalDistributionEstimation(const ConditionalDistributionEstimation< D >& estimation);
            virtual ~ConditionalDistributionEstimation();

            virtual response_data_type const * get_response_data() const;

            virtual explanatory_data_type const * get_explanatory_data() const;

            virtual distribution_type const * get_distribution() const;

            virtual std::unique_ptr< ConditionalDistributionEstimation< D > > copy() const;
            
            class STATISKIT_CORE_API Estimator
            {
                public: 
                    using estimation_type = ConditionalDistributionEstimation<D>;

                    virtual ~Estimator() = 0;

                    virtual std::unique_ptr< Estimator > copy() const = 0;

                protected:
                    virtual std::unique_ptr< estimation_type > operator() (response_data_type const * response_data,
                                                                           explanatory_data_type const * explanatory_data,
                                                                           const bool& lazy=true) const = 0;
            };

        protected:
            response_data_type const * response_data;
            explanatory_data_type const * explanatory_data;
            distribution_type const * distribution;
    };

    class STATISKIT_CORE_API UnivariateConditionalDistributionEstimation : ConditionalDistributionEstimation< UnivariateConditionalDistribution >
    {
        public:
            using ConditionalDistributionEstimation< UnivariateConditionalDistribution >::ConditionalDistributionEstimation;
            
            struct STATISKIT_CORE_API Estimator : ConditionalDistributionEstimation< UnivariateConditionalDistribution >::Estimator
            { 
                using ConditionalDistributionEstimation< UnivariateConditionalDistribution >::Estimator::Estimator;
                using ConditionalDistributionEstimation< UnivariateConditionalDistribution >::Estimator::estimation_type;

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                       const Index& response,
                                                                       const Indices& explanatories,
                                                                       const bool& lazy=true) const;
            };
    };

    class STATISKIT_CORE_API MultivariateConditionalDistributionEstimation : ConditionalDistributionEstimation< MultivariateConditionalDistribution >
    {
        public:
            using ConditionalDistributionEstimation< MultivariateConditionalDistribution >::ConditionalDistributionEstimation;
            
            struct STATISKIT_CORE_API Estimator : ConditionalDistributionEstimation< MultivariateConditionalDistribution >::Estimator
            { 
                using ConditionalDistributionEstimation< MultivariateConditionalDistribution >::Estimator::Estimator;
                using ConditionalDistributionEstimation< MultivariateConditionalDistribution >::Estimator::estimation_type;

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                       const Indices& responses,
                                                                       const Indices& explanatories,
                                                                       const bool& lazy=true) const;
            };
    };

    // struct STATISKIT_CORE_API UnivariateConditionalDistributionEstimation
    // {
    //     // typedef UnivariateConditionalData data_type;
    //     typedef ::statiskit::UnivariateConditionalDistribution distribution_type;
    //     typedef UnivariateConditionalDistributionEstimation copy_type;

    //     virtual ~UnivariateConditionalDistributionEstimation() = 0;

    //     virtual distribution_type const * get_distribution() const = 0;

    //     virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const = 0;

    //     struct STATISKIT_CORE_API Estimator : public statiskit::Estimator
    //     { 
    //         typedef UnivariateConditionalDistributionEstimation estimation_type;

    //         virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy=true) const = 0;

    //         virtual std::unique_ptr< Estimator > copy() const = 0;
    //     };
    // };

    // struct STATISKIT_CORE_API CategoricalUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    // {
    //     struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
    //     {};
    // };

    // typedef Selection< CategoricalUnivariateConditionalDistribution, CategoricalUnivariateConditionalDistributionEstimation > CategoricalUnivariateConditionalDistributionSelection;
    // typedef CategoricalUnivariateConditionalDistributionSelection::CriterionEstimator CategoricalUnivariateConditionalDistributionCriterionEstimator;

    // struct STATISKIT_CORE_API DiscreteUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    // {
    //     struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
    //     {};
    // };

    // typedef Selection< DiscreteUnivariateConditionalDistribution, DiscreteUnivariateConditionalDistributionEstimation > DiscreteUnivariateConditionalDistributionSelection;
    // typedef DiscreteUnivariateConditionalDistributionSelection::CriterionEstimator DiscreteUnivariateConditionalDistributionCriterionEstimator;

    // struct STATISKIT_CORE_API ContinuousUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    // {
    //     struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
    //     {};
    // };

    // typedef Selection< ContinuousUnivariateConditionalDistribution, ContinuousUnivariateConditionalDistributionEstimation > ContinuousUnivariateConditionalDistributionSelection;
    // typedef ContinuousUnivariateConditionalDistributionSelection::CriterionEstimator ContinuousUnivariateConditionalDistributionCriterionEstimator;

    // struct STATISKIT_CORE_API MultivariateConditionalDistributionEstimation
    // {
    //     // typedef MultivariateConditionalData data_type;
    //     typedef ::statiskit::MultivariateConditionalDistribution distribution_type;
    //     typedef MultivariateConditionalDistributionEstimation copy_type;
        
    //     virtual ~MultivariateConditionalDistributionEstimation() = 0;

    //     virtual distribution_type const * get_distribution() const = 0;

    //     virtual std::unique_ptr< MultivariateConditionalDistributionEstimation > copy() const = 0;

    //     struct STATISKIT_CORE_API Estimator : public statiskit::Estimator
    //     { 
    //         typedef MultivariateConditionalDistributionEstimation estimation_type;
            
    //         virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const Indices& responses, const Indices& explanatories, const bool& lazy=true) const = 0;

    //         virtual std::unique_ptr< Estimator > copy() const = 0;
    //     };
    // };

    // typedef Selection< MultivariateConditionalDistribution, MultivariateConditionalDistributionEstimation > MixedMultivariateConditionalDistributionSelection;
    // typedef MixedMultivariateConditionalDistributionSelection::CriterionEstimator MixedMultivariateConditionalDistributionCriterionEstimator;

    // struct STATISKIT_CORE_API CategoricalMultivariateConditionalDistributionEstimation : MultivariateConditionalDistributionEstimation
    // {
    //     struct STATISKIT_CORE_API Estimator : MultivariateConditionalDistributionEstimation::Estimator
    //     {};
    // };

    // typedef Selection< CategoricalMultivariateConditionalDistribution, CategoricalMultivariateConditionalDistributionEstimation > CategoricalMultivariateConditionalDistributionSelection;
    // typedef CategoricalMultivariateConditionalDistributionSelection::CriterionEstimator CategoricalMultivariateConditionalDistributionCriterionEstimator;

    // struct STATISKIT_CORE_API DiscreteMultivariateConditionalDistributionEstimation : MultivariateConditionalDistributionEstimation
    // {
    //     struct STATISKIT_CORE_API Estimator : MultivariateConditionalDistributionEstimation::Estimator
    //     {};
    // };

    // typedef Selection< DiscreteMultivariateConditionalDistribution, DiscreteMultivariateConditionalDistributionEstimation > DiscreteMultivariateConditionalDistributionSelection;
    // typedef DiscreteMultivariateConditionalDistributionSelection::CriterionEstimator DiscreteMultivariateConditionalDistributionCriterionEstimator;

    // struct STATISKIT_CORE_API ContinuousMultivariateConditionalDistributionEstimation : MultivariateConditionalDistributionEstimation
    // {
    //     struct STATISKIT_CORE_API Estimator : MultivariateConditionalDistributionEstimation::Estimator
    //     {};
    // };

    // typedef Selection< ContinuousMultivariateConditionalDistribution, ContinuousMultivariateConditionalDistributionEstimation > ContinuousMultivariateConditionalDistributionSelection;
    // typedef ContinuousMultivariateConditionalDistributionSelection::CriterionEstimator ContinuousMultivariateConditionalDistributionCriterionEstimator;  
}

#ifndef AUTOWIG
#include "estimation.hpp"
#endif
#endif
