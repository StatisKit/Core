#pragma once

#include "base.h"
#include "data.h"
#include "distribution.h"
#include "sample_space.h"

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

    template<class S, class B> class IterativeEstimation : public B
    {
        public:
            using B::B;
            IterativeEstimation(const IterativeEstimation& estimation);
            virtual ~IterativeEstimation();

            Index size() const;

            const S at_step(const Index& index) const;

        protected:
            std::vector< S > steps;
    };

    template<class D>
    class DistributionEstimation
    {
        public:
            using copy_type = DistributionEstimation< D >;
            using distribution_type = D;
            using data_type = typename D::data_type;

            DistributionEstimation();
            DistributionEstimation(data_type const * data);
            DistributionEstimation(data_type const * data,
                                   distribution_type const * distribution);
            DistributionEstimation(const DistributionEstimation< D >& estimation);
            virtual ~DistributionEstimation();

            virtual data_type const * get_data() const;

            virtual distribution_type const * get_distribution() const;

            virtual std::unique_ptr< copy_type > copy() const;
            
            class STATISKIT_CORE_API Estimator
            { 
                public:
                    using copy_type = Estimator;
                    using estimation_type = DistributionEstimation<D>;

                    using data_type = estimation_type::data_type;
                    using distribution_type = estimation_type::distribution_type;

                    virtual ~Estimator() = 0;

                    virtual std::unique_ptr< estimation_type > operator() (const data_type& data) const = 0;

                    virtual std::unique_ptr< copy_type > copy() const = 0;

                protected:
                    void check(const data_type& data) const;
            };

        protected:
            data_type const * data;
            distribution_type const * distribution;
    };

    struct STATISKIT_CORE_API UnivariateDistributionEstimation : DistributionEstimation< UnivariateDistribution >
    {
        using DistributionEstimation< UnivariateDistribution >::DistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DistributionEstimation< UnivariateDistribution >::Estimator
        { 
            using DistributionEstimation< UnivariateDistribution >::Estimator::Estimator;
            using DistributionEstimation< UnivariateDistribution >::Estimator::estimation_type;

            using DistributionEstimation< UnivariateDistribution >::Estimator::operator();

            virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                   const Index& variable) const;
        };
    };

    struct STATISKIT_CORE_API CategoricalUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        using distribution_type = CategoricalUnivariateDistribution;

        using UnivariateDistributionEstimation::UnivariateDistributionEstimation;

        class STATISKIT_CORE_API Estimator : public UnivariateDistributionEstimation::Estimator
        {
            public:
                using event_type = CategoricalEvent;

            protected:
                void check(const data_type& data) const;
        };
    };

    struct STATISKIT_CORE_API DiscreteUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        using distribution_type = DiscreteUnivariateDistribution;

        using UnivariateDistributionEstimation::UnivariateDistributionEstimation;

        class STATISKIT_CORE_API Estimator : public UnivariateDistributionEstimation::Estimator
        {
            public:
                using event_type = DiscreteEvent;

            protected:
                void check(const data_type& data) const;
        };
    };

    struct STATISKIT_CORE_API ContinuousUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        using distribution_type = ContinuousUnivariateDistribution;

        using UnivariateDistributionEstimation::UnivariateDistributionEstimation;

        class STATISKIT_CORE_API Estimator : public UnivariateDistributionEstimation::Estimator
        {
            public:
                using event_type = ContinuousEvent;

            protected:
                void check(const data_type& data) const;
        };
    };

    struct STATISKIT_CORE_API MultivariateDistributionEstimation : DistributionEstimation< MultivariateDistribution >
    {
        using DistributionEstimation< MultivariateDistribution >::DistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DistributionEstimation< MultivariateDistribution >::Estimator
        { 
            using DistributionEstimation< MultivariateDistribution >::Estimator::Estimator;
            using DistributionEstimation< MultivariateDistribution >::Estimator::estimation_type;

            using DistributionEstimation< MultivariateDistribution >::Estimator::operator();

            virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                   const Indices& variables) const;
        };
    };

    struct STATISKIT_CORE_API CategoricalMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        using distribution_type = CategoricalMultivariateDistribution;

        using MultivariateDistributionEstimation::MultivariateDistributionEstimation;

        class STATISKIT_CORE_API Estimator : public MultivariateDistributionEstimation::Estimator
        {
            protected:
                void check(const data_type& data) const;
        };
    };

        // const MultivariateSampleSpace* sample_space = data.get_sample_space();
        // for(Index index = 0, max_index = sample_space->size(); index < max_index; ++index)
        // {
        //     if(sample_space->get(index)->get_outcome() != DISCRETE)
        //     { throw statiskit::sample_space_error(DISCRETE); }
        // }

    struct STATISKIT_CORE_API DiscreteMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        using distribution_type = DiscreteMultivariateDistribution;

        using MultivariateDistributionEstimation::MultivariateDistributionEstimation;

        class STATISKIT_CORE_API Estimator : public MultivariateDistributionEstimation::Estimator
        {
            protected:
                void check(const data_type& data) const;
        };
    };

    struct STATISKIT_CORE_API ContinuousMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        using distribution_type = ContinuousMultivariateDistribution;

        using MultivariateDistributionEstimation::MultivariateDistributionEstimation;

        class STATISKIT_CORE_API Estimator : public MultivariateDistributionEstimation::Estimator
        {
            protected:
                void check(const data_type& data) const;
        };
    };

    using explanatory_data_type = MultivariateData;

    template<class D>
    class ConditionalDistributionEstimation
    {
        public:
            using distribution_type = D;
            using response_data_type = typename D::response_type::data_type;

            ConditionalDistributionEstimation();
            ConditionalDistributionEstimation(response_data_type const* response_data,
                                              explanatory_data_type const* explanatory_data,
                                              distribution_type const* distribution);
            ConditionalDistributionEstimation(const ConditionalDistributionEstimation< D >& estimation);
            virtual ~ConditionalDistributionEstimation();

            virtual response_data_type const* get_response_data() const;

            virtual explanatory_data_type const* get_explanatory_data() const;

            virtual distribution_type const* get_distribution() const;

            virtual std::unique_ptr< ConditionalDistributionEstimation< D > > copy() const;
            
            class STATISKIT_CORE_API Estimator
            {
                public: 
                    using estimation_type = ConditionalDistributionEstimation<D>;

                    virtual ~Estimator() = 0;

                    virtual std::unique_ptr< Estimator > copy() const = 0;

                protected:
                    virtual std::unique_ptr< estimation_type > operator() (const response_data_type& response_data,
                                                                           const explanatory_data_type& explanatory_data) const = 0;
            };

        protected:
            response_data_type const* response_data;
            explanatory_data_type const* explanatory_data;
            distribution_type const* distribution;
    };

    struct STATISKIT_CORE_API UnivariateConditionalDistributionEstimation : ConditionalDistributionEstimation< UnivariateConditionalDistribution >
    {
        using ConditionalDistributionEstimation< UnivariateConditionalDistribution >::ConditionalDistributionEstimation;
        
        class STATISKIT_CORE_API Estimator : public ConditionalDistributionEstimation< UnivariateConditionalDistribution >::Estimator
        {
            public: 
                using ConditionalDistributionEstimation< UnivariateConditionalDistribution >::Estimator::Estimator;
                using ConditionalDistributionEstimation< UnivariateConditionalDistribution >::Estimator::estimation_type;

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                       const Index& response,
                                                                       const Indices& explanatories) const;

            protected:
                using ConditionalDistributionEstimation< UnivariateConditionalDistribution >::Estimator::operator();
        };
    };

    struct STATISKIT_CORE_API MultivariateConditionalDistributionEstimation : ConditionalDistributionEstimation< MultivariateConditionalDistribution >
    {
        using ConditionalDistributionEstimation< MultivariateConditionalDistribution >::ConditionalDistributionEstimation;
        
        class STATISKIT_CORE_API Estimator : public ConditionalDistributionEstimation< MultivariateConditionalDistribution >::Estimator
        { 
            public:
                using ConditionalDistributionEstimation< MultivariateConditionalDistribution >::Estimator::Estimator;
                using ConditionalDistributionEstimation< MultivariateConditionalDistribution >::Estimator::estimation_type;

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data,
                                                                       const Indices& responses,
                                                                       const Indices& explanatories) const;

            protected:
                using ConditionalDistributionEstimation< MultivariateConditionalDistribution >::Estimator::operator();
        };
    };
}

#include "estimation.hpp"