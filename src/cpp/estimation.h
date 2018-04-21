
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

    class STATISKIT_CORE_API Estimator
    {
        protected:
            static std::unordered_set< uintptr_t > compute_children(const Estimator& estimator);
            virtual std::unordered_set< uintptr_t > children() const;

            static uintptr_t compute_identifier(const Estimator& estimator);
            virtual uintptr_t identifier() const;
    };

    struct STATISKIT_CORE_API UnivariateDistributionEstimation
    {
        typedef UnivariateData data_type;
        typedef UnivariateDistribution estimated_type;

        virtual ~UnivariateDistributionEstimation() = 0;

        virtual estimated_type const * get_estimated() const = 0;
        
        struct STATISKIT_CORE_API Estimator : public statiskit::Estimator
        { 
            typedef UnivariateDistributionEstimation estimation_type;

            virtual ~Estimator() = 0;

            virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const bool& lazy=true) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    template<class D, class B>
    class LazyEstimation : public B
    {
        public:
            LazyEstimation();
            LazyEstimation(D const * estimated);
            LazyEstimation(const LazyEstimation< D, B >& estimation);
            virtual ~LazyEstimation();

            virtual typename B::estimated_type const * get_estimated() const;

        protected:
            D const * _estimated;
    };

    template<class D, class B> class ActiveEstimation : public LazyEstimation< D, B >
    {
        public:
            typedef D estimated_type;
            
            ActiveEstimation();
            ActiveEstimation(typename B::data_type const * data);
            ActiveEstimation(D const * estimated, typename B::data_type const * data);
            ActiveEstimation(const ActiveEstimation< D, B >& estimation);
            virtual ~ActiveEstimation();

            typename B::data_type const * get_data() const;

        protected:
            typename B::data_type const * _data;
    };

    template<class D, class B> class Selection : public ActiveEstimation< D, B >
    {
        public:
            Selection();
            Selection(typename B::data_type const * data);
            Selection(D const * estimated, typename B::data_type const * data);
            Selection(const Selection< D, B >& estimation);
            virtual ~Selection();

            Index size() const;

            B const * get_estimation(const Index& index) const;

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
                    std::vector< typename B::Estimator * > _estimators;

                    virtual double scoring(const typename B::estimated_type * estimated, typename B::data_type const & data) const = 0;

                    void init();
                    void init(const Estimator& estimator);

                    virtual std::unordered_set< uintptr_t > children() const;
            };

            class CriterionEstimator : public PolymorphicCopy< typename B::Estimator::estimation_type::Estimator, CriterionEstimator, Estimator >
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
                    criterion_type _criterion;

                    virtual double scoring(const typename B::estimated_type * estimated, typename B::data_type const & data) const;
            };/**/

        protected:
            std::vector< B * > _estimations;
            std::vector< double > _scores;

            void finalize();
    };

    template<class T, class D, class B> class OptimizationEstimationImpl : public ActiveEstimation< D, B >
    {
        public:
            OptimizationEstimationImpl();
            OptimizationEstimationImpl(D const * estimated, typename B::data_type const * data);            
            OptimizationEstimationImpl(const OptimizationEstimationImpl< T, D, B >& estimation);
            virtual ~OptimizationEstimationImpl();

            Index size() const;

            class Estimator : public Optimization< typename B::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
            };

        protected:
            std::vector< T > _iterations;
    };

    template<class T, class D, class B> class SimulatedAnnealingEstimation : public ActiveEstimation< D, B >
    {
        public:
            SimulatedAnnealingEstimation();
            SimulatedAnnealingEstimation(D const * estimated, typename B::data_type const * data);            
            SimulatedAnnealingEstimation(const SimulatedAnnealingEstimation< T, D, B >& estimation);
            virtual ~SimulatedAnnealingEstimation();

            Index size() const;

            class Estimator : public SimulatedAnnealing< typename B::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
            };

        protected:
            std::vector< T > _iterations;
    };

    template<class T, class D, class B> struct OptimizationEstimation : OptimizationEstimationImpl<T, D, B >
    {
        // using __impl::OptimizationEstimation<T, D, B >::OptimizationEstimation;
        OptimizationEstimation();
        OptimizationEstimation(D const * estimated, typename B::data_type const * data);
        OptimizationEstimation(const OptimizationEstimation< T, D, B>& estimation);
        virtual ~OptimizationEstimation();

        const T get_iteration(const Index& index) const;

        struct Estimator : OptimizationEstimationImpl<T, D, B >::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();
        };
    };

    template<class T, class D, class B> struct OptimizationEstimation< T*, D, B> : OptimizationEstimationImpl<T*, D, B >
    {
        // using OptimizationEstimationImpl<T*, D, B >::OptimizationEstimation;
        OptimizationEstimation();
        OptimizationEstimation(D const * estimated, typename B::data_type const * data);
        OptimizationEstimation(const OptimizationEstimation< T*, D, B>& estimation);
        virtual ~OptimizationEstimation();

        const T* get_iteration(const Index& index) const;

        struct Estimator : OptimizationEstimationImpl<T*, D, B >::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();
        };
    };

    struct STATISKIT_CORE_API CategoricalUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const; 

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    typedef LazyEstimation< CategoricalUnivariateDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionLazyEstimation;
    typedef ActiveEstimation< CategoricalUnivariateDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionActiveEstimation;

    typedef Selection< CategoricalUnivariateDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionSelection;
    typedef CategoricalUnivariateDistributionSelection::CriterionEstimator CategoricalUnivariateDistributionCriterionEstimator;

    struct STATISKIT_CORE_API DiscreteUnivariateDistributionEstimation : UnivariateDistributionEstimation
    { struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator {}; };

    typedef Selection< DiscreteUnivariateDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateDistributionSelection;
    typedef Selection< DiscreteUnivariateDistribution, DiscreteUnivariateDistributionEstimation >::CriterionEstimator DiscreteUnivariateDistributionCriterionEstimator;

    struct STATISKIT_CORE_API ContinuousUnivariateDistributionEstimation : UnivariateDistributionEstimation
    { struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator {}; };

    typedef Selection< ContinuousUnivariateDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateDistributionSelection;
    typedef ContinuousUnivariateDistributionSelection::CriterionEstimator ContinuousUnivariateDistributionCriterionEstimator;

    struct STATISKIT_CORE_API MultivariateDistributionEstimation
    {
        typedef MultivariateData data_type;
        typedef MultivariateDistribution estimated_type;
        typedef UnivariateDistributionEstimation marginal_type;

        virtual ~MultivariateDistributionEstimation() = 0;

        virtual estimated_type const * get_estimated() const = 0;
        
        struct STATISKIT_CORE_API Estimator : public statiskit::Estimator
        {
            typedef MultivariateDistributionEstimation estimation_type;
            typedef UnivariateDistributionEstimation marginal_type;

            virtual ~Estimator() = 0;

            virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const bool& lazy=true) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    typedef Selection< MultivariateDistribution, MultivariateDistributionEstimation > MixedMultivariateDistributionSelection;
    typedef MixedMultivariateDistributionSelection::CriterionEstimator MixedMultivariateDistributionCriterionEstimator;

    struct STATISKIT_CORE_API CategoricalMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef CategoricalUnivariateDistributionEstimation marginal_type;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator 
        { typedef marginal_type::Estimator marginal_type; };
    };

    typedef Selection< CategoricalMultivariateDistribution, CategoricalMultivariateDistributionEstimation > CategoricalMultivariateDistributionSelection;
    typedef CategoricalMultivariateDistributionSelection::CriterionEstimator CategoricalMultivariateDistributionCriterionEstimator;

    struct STATISKIT_CORE_API DiscreteMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef DiscreteUnivariateDistributionEstimation marginal_type;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };

    typedef Selection< DiscreteMultivariateDistribution, DiscreteMultivariateDistributionEstimation > DiscreteMultivariateDistributionSelection;
    typedef DiscreteMultivariateDistributionSelection::CriterionEstimator DiscreteMultivariateDistributionCriterionEstimator;

    struct STATISKIT_CORE_API ContinuousMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef ContinuousUnivariateDistributionEstimation marginal_type;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };

    typedef Selection< ContinuousMultivariateDistribution, ContinuousMultivariateDistributionEstimation > ContinuousMultivariateDistributionSelection;
    typedef ContinuousMultivariateDistributionSelection::CriterionEstimator ContinuousMultivariateDistributionCriterionEstimator;

    struct STATISKIT_CORE_API UnivariateConditionalDistributionEstimation
    {
        typedef UnivariateConditionalData data_type;
        typedef ::statiskit::UnivariateConditionalDistribution estimated_type;
        
        virtual ~UnivariateConditionalDistributionEstimation() = 0;

        virtual estimated_type const * get_estimated() const = 0;

        struct STATISKIT_CORE_API Estimator : public statiskit::Estimator
        { 
            typedef UnivariateConditionalDistributionEstimation estimation_type;
            
            virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const bool& lazy=true) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    struct STATISKIT_CORE_API CategoricalUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
        {};
    };

    typedef Selection< CategoricalUnivariateConditionalDistribution, CategoricalUnivariateConditionalDistributionEstimation > CategoricalUnivariateConditionalDistributionSelection;
    typedef CategoricalUnivariateConditionalDistributionSelection::CriterionEstimator CategoricalUnivariateConditionalDistributionCriterionEstimator;

    struct STATISKIT_CORE_API DiscreteUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
        {};
    };

    typedef Selection< DiscreteUnivariateConditionalDistribution, DiscreteUnivariateConditionalDistributionEstimation > DiscreteUnivariateConditionalDistributionSelection;
    typedef DiscreteUnivariateConditionalDistributionSelection::CriterionEstimator DiscreteUnivariateConditionalDistributionCriterionEstimator;

    struct STATISKIT_CORE_API ContinuousUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
        {};
    };

    typedef Selection< ContinuousUnivariateConditionalDistribution, ContinuousUnivariateConditionalDistributionEstimation > ContinuousUnivariateConditionalDistributionSelection;
    typedef ContinuousUnivariateConditionalDistributionSelection::CriterionEstimator ContinuousUnivariateConditionalDistributionCriterionEstimator;

    struct STATISKIT_CORE_API MultivariateConditionalDistributionEstimation
    {
        typedef MultivariateConditionalData data_type;
        typedef ::statiskit::MultivariateConditionalDistribution estimated_type;
        
        virtual ~MultivariateConditionalDistributionEstimation() = 0;

        virtual estimated_type const * get_estimated() const = 0;

        struct STATISKIT_CORE_API Estimator : public statiskit::Estimator
        { 
            typedef MultivariateConditionalDistributionEstimation estimation_type;
            
            virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const bool& lazy=true) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    typedef Selection< MultivariateConditionalDistribution, MultivariateConditionalDistributionEstimation > MixedMultivariateConditionalDistributionSelection;
    typedef MixedMultivariateConditionalDistributionSelection::CriterionEstimator MixedMultivariateConditionalDistributionCriterionEstimator;

    struct STATISKIT_CORE_API CategoricalMultivariateConditionalDistributionEstimation : MultivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : MultivariateConditionalDistributionEstimation::Estimator
        {};
    };

    typedef Selection< CategoricalMultivariateConditionalDistribution, CategoricalMultivariateConditionalDistributionEstimation > CategoricalMultivariateConditionalDistributionSelection;
    typedef CategoricalMultivariateConditionalDistributionSelection::CriterionEstimator CategoricalMultivariateConditionalDistributionCriterionEstimator;

    struct STATISKIT_CORE_API DiscreteMultivariateConditionalDistributionEstimation : MultivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : MultivariateConditionalDistributionEstimation::Estimator
        {};
    };

    typedef Selection< DiscreteMultivariateConditionalDistribution, DiscreteMultivariateConditionalDistributionEstimation > DiscreteMultivariateConditionalDistributionSelection;
    typedef DiscreteMultivariateConditionalDistributionSelection::CriterionEstimator DiscreteMultivariateConditionalDistributionCriterionEstimator;

    struct STATISKIT_CORE_API ContinuousMultivariateConditionalDistributionEstimation : MultivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : MultivariateConditionalDistributionEstimation::Estimator
        {};
    };

    typedef Selection< ContinuousMultivariateConditionalDistribution, ContinuousMultivariateConditionalDistributionEstimation > ContinuousMultivariateConditionalDistributionSelection;
    typedef ContinuousMultivariateConditionalDistributionSelection::CriterionEstimator ContinuousMultivariateConditionalDistributionCriterionEstimator;  
}

#ifndef AUTOWIG
#include "estimation.hpp"
#endif
#endif
