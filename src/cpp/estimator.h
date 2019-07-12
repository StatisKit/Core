#pragma once

#include "base.h"
#include "distribution.h"
#include "estimation.h"
#include "indicator.h"
#include "slope_heuristic.h"

namespace statiskit
{
    template<class D, class B> class ShiftedDistributionEstimation : public LazyEstimation< ShiftedDistribution< D >, B >
    {
        public:
            ShiftedDistributionEstimation();
            ShiftedDistributionEstimation(LazyEstimation< D, B >* estimation, const UnivariateDataFrame* data, const typename D::event_type::value_type& shift);
            ShiftedDistributionEstimation(const ShiftedDistributionEstimation< D, B >& estimation);
            virtual ~ShiftedDistributionEstimation();

            const LazyEstimation< D, B >* get_estimation() const;

            class Estimator : public PolymorphicCopy< UnivariateDistributionEstimation::Estimator, Estimator, typename B::Estimator >
            {
                public:
                    typedef typename B::Estimator estimator_type;

                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();

                    virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                    typename D::event_type::value_type get_shift() const;
                    void set_shift(const typename D::event_type::value_type& shift);

                    const estimator_type* get_estimator() const;
                    void set_estimator(const estimator_type& estimator);

                protected:
                    typename D::event_type::value_type _shift;
                    estimator_type* _estimator;

                    virtual std::unordered_set< uintptr_t > children() const;
            };

        protected:
            LazyEstimation< D, B >* _estimation;
            const UnivariateDataFrame* _data;
    };

    typedef ShiftedDistributionEstimation< DiscreteUnivariateDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateShiftedDistributionEstimation;
    typedef DiscreteUnivariateShiftedDistributionEstimation::Estimator DiscreteUnivariateShiftedDistributionEstimator;

    typedef ShiftedDistributionEstimation< ContinuousUnivariateDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateShiftedDistributionEstimation;
    typedef ContinuousUnivariateShiftedDistributionEstimation::Estimator ContinuousUnivariateShiftedDistributionEstimator;

    template<class D, class B> struct UnivariateFrequencyDistributionEstimation : ActiveEstimation< D, B >
    {
        UnivariateFrequencyDistributionEstimation();
        UnivariateFrequencyDistributionEstimation(D const * estimated, typename B::data_type const * data);
        UnivariateFrequencyDistributionEstimation(const UnivariateFrequencyDistributionEstimation< D, B >& estimation);
        virtual ~UnivariateFrequencyDistributionEstimation();

        struct Estimator : B::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };
    
    typedef UnivariateFrequencyDistributionEstimation< DiscreteUnivariateFrequencyDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateFrequencyDistributionEstimation;
    typedef UnivariateFrequencyDistributionEstimation< DiscreteUnivariateFrequencyDistribution, DiscreteUnivariateDistributionEstimation >::Estimator DiscreteUnivariateFrequencyDistributionEstimator;

    struct STATISKIT_CORE_API PoissonDistributionMLEstimation : ActiveEstimation< PoissonDistribution, DiscreteUnivariateDistributionEstimation >
    {
        PoissonDistributionMLEstimation();
        PoissonDistributionMLEstimation(PoissonDistribution const * estimated, UnivariateData const * data);
        PoissonDistributionMLEstimation(const PoissonDistributionMLEstimation& estimation);
        virtual ~PoissonDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API BinomialDistributionMLEstimation : OptimizationEstimation<unsigned int, BinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        BinomialDistributionMLEstimation();
        BinomialDistributionMLEstimation(BinomialDistribution const * estimated, UnivariateData const * data);            
        BinomialDistributionMLEstimation(const BinomialDistributionMLEstimation& estimation);
        virtual ~BinomialDistributionMLEstimation();

        class STATISKIT_CORE_API Estimator : public OptimizationEstimation<unsigned int, BinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                bool get_force() const;
                void set_force(const bool& force);

            protected:
                bool _force;
        };
    };
    
    struct STATISKIT_CORE_API BinomialDistributionMMEstimation : ActiveEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        BinomialDistributionMMEstimation();
        BinomialDistributionMMEstimation(BinomialDistribution const * estimated, UnivariateData const * data);            
        BinomialDistributionMMEstimation(const BinomialDistributionMMEstimation& estimation);
        virtual ~BinomialDistributionMMEstimation();

        class STATISKIT_CORE_API Estimator : public DiscreteUnivariateDistributionEstimation::Estimator
        { 
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                UnivariateLocationEstimation::Estimator* get_location();
                void set_location(const UnivariateLocationEstimation::Estimator& location);

                UnivariateDispersionEstimation::Estimator* get_dispersion();
                void set_dispersion(const UnivariateDispersionEstimation::Estimator& dispersion);

            protected:
                UnivariateLocationEstimation::Estimator* _location;
                UnivariateDispersionEstimation::Estimator* _dispersion;
        };
    };

    struct STATISKIT_CORE_API LogarithmicDistributionMLEstimation : OptimizationEstimation<double, LogarithmicDistribution, DiscreteUnivariateDistributionEstimation >
    {
        LogarithmicDistributionMLEstimation();
        LogarithmicDistributionMLEstimation(LogarithmicDistribution const * estimated, UnivariateData const * data);            
        LogarithmicDistributionMLEstimation(const LogarithmicDistributionMLEstimation& estimation);
        virtual ~LogarithmicDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : public OptimizationEstimation<double, LogarithmicDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API GeometricDistributionMLEstimation : ActiveEstimation<GeometricDistribution, DiscreteUnivariateDistributionEstimation >
    {
        GeometricDistributionMLEstimation();
        GeometricDistributionMLEstimation(GeometricDistribution const * estimated, UnivariateData const * data);            
        GeometricDistributionMLEstimation(const GeometricDistributionMLEstimation& estimation);
        virtual ~GeometricDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : public ActiveEstimation<GeometricDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API NegativeBinomialDistributionMLEstimation : OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        NegativeBinomialDistributionMLEstimation();
        NegativeBinomialDistributionMLEstimation(NegativeBinomialDistribution const * estimated, UnivariateData const * data);            
        NegativeBinomialDistributionMLEstimation(const NegativeBinomialDistributionMLEstimation& estimation);
        virtual ~NegativeBinomialDistributionMLEstimation();

        class STATISKIT_CORE_API Estimator : public OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                bool get_force() const;
                void set_force(const bool& force);
                
            protected:
                bool _force;
        };
    };
    
    struct STATISKIT_CORE_API NegativeBinomialDistributionMMEstimation : ActiveEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        NegativeBinomialDistributionMMEstimation();
        NegativeBinomialDistributionMMEstimation(NegativeBinomialDistribution const * estimated, UnivariateData const * data);            
        NegativeBinomialDistributionMMEstimation(const NegativeBinomialDistributionMMEstimation& estimation);
        virtual ~NegativeBinomialDistributionMMEstimation();

        /** \brief This class NegativeBinomialDistribution represents a Maximum Likelihood Estimator (MLE) of negative binomial distribution parameters \f$\kappa\f$ and \f$\pi\f$.
         *
         * \details This MLE prededure is described in \cite DBB13.
         *          Note that in their paper, the negative binomial distribution probability distribution function is given by
         *          \f[
         *              P\left(X = x\right) = \frac{\Gamma\left(x+\kappa\right)}{x! \Gamma\left(\kappa\right)} \left(\frac{\mu}{\mu + \kappa}\right)^{x} \left(\frac{\kappa}{\kappa + \mu}\right)^{\kappa}.
         *          \f]
         *          This is a reparametrization of the negative binomial distribution described by parameters \f$\kappa\f$ and \f$\pi\f$ with 
         *          \f[
         *              \pi = \frac{\mu}{\mu + \kappa}
         *          \f]
         *
         * \see \ref ::statiskit::NegativeBinomialDistribution.
         * */
        class STATISKIT_CORE_API Estimator : public DiscreteUnivariateDistributionEstimation::Estimator
        { 
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();
                
                /** \brief Update parameters \f$\kappa\f$ and \f$\pi\f$
                 *
                 * \details \f$\kappa = \alpha^{-1}\f$ if given by the formula
                 *          \f[
                 *              \alpha = \frac{\log\left(1 + \alpha \bar{x} \right) }{\bar{x} - \frac{\alpha}{n} \sum_{i = 0}^{n}\sum_{\nu = 0}^{x^{ \left(i \right) }-1} \frac{\nu}{1 + \alpha \nu}},
                 *          \f]
                 *          and 
                 *          \f[
                 *              \pi = \frac{\bar{x}}{\bar{x} + \alpha^{-1}}
                 *          \f]
                 * */
                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                UnivariateLocationEstimation::Estimator* get_location();
                void set_location(const UnivariateLocationEstimation::Estimator& location);

                UnivariateDispersionEstimation::Estimator* get_dispersion();
                void set_dispersion(const UnivariateDispersionEstimation::Estimator& dispersion);

            protected:
                UnivariateLocationEstimation::Estimator* _location;
                UnivariateDispersionEstimation::Estimator* _dispersion;
        };
    };
    
    typedef UnivariateFrequencyDistributionEstimation< ContinuousUnivariateFrequencyDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateFrequencyDistributionEstimation;
    typedef UnivariateFrequencyDistributionEstimation< ContinuousUnivariateFrequencyDistribution, ContinuousUnivariateDistributionEstimation >::Estimator ContinuousUnivariateFrequencyDistributionEstimator;

    struct STATISKIT_CORE_API NormalDistributionMLEstimation : ActiveEstimation< NormalDistribution, ContinuousUnivariateDistributionEstimation >
    {
        NormalDistributionMLEstimation();
        NormalDistributionMLEstimation(NormalDistribution const * estimated, UnivariateData const * data);            
        NormalDistributionMLEstimation(const NormalDistributionMLEstimation& estimation);
        virtual ~NormalDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            Estimator();
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const; 

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };
   
    struct STATISKIT_CORE_API UnivariateHistogramDistributionEstimation : ActiveEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation >
    {
        UnivariateHistogramDistributionEstimation();
        UnivariateHistogramDistributionEstimation(UnivariateHistogramDistribution const * estimated, UnivariateData const * data);            
        UnivariateHistogramDistributionEstimation(const UnivariateHistogramDistributionEstimation& estimation);
        virtual ~UnivariateHistogramDistributionEstimation();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_nb_bins() const;
                void set_nb_bins(const unsigned int& nb_bins);

            protected:
                unsigned int _nb_bins;
        };
    };

    struct STATISKIT_CORE_API RegularUnivariateHistogramDistributionSlopeHeuristicSelection : SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation >
    {
        RegularUnivariateHistogramDistributionSlopeHeuristicSelection(const UnivariateData* data);
        RegularUnivariateHistogramDistributionSlopeHeuristicSelection(const RegularUnivariateHistogramDistributionSlopeHeuristicSelection& selection);
        virtual ~RegularUnivariateHistogramDistributionSlopeHeuristicSelection();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_maxbins() const;
                void set_maxbins(const unsigned int& maxbins);

            protected:
                unsigned int _maxbins;
        }; 
    };

    struct STATISKIT_CORE_API IrregularUnivariateHistogramDistributionSlopeHeuristicSelection : SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation >
    {
        IrregularUnivariateHistogramDistributionSlopeHeuristicSelection(const UnivariateData* data);
        IrregularUnivariateHistogramDistributionSlopeHeuristicSelection(const IrregularUnivariateHistogramDistributionSlopeHeuristicSelection& selection);
        virtual ~IrregularUnivariateHistogramDistributionSlopeHeuristicSelection();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_maxbins() const;
                void set_maxbins(const unsigned int& maxbins);

                const double& get_constant() const;
                void set_constant(const double& constant);

            protected:
                unsigned int _maxbins;
                double _constant;
        }; 
    };

    struct STATISKIT_CORE_API SingularDistributionEstimation
    {
        typedef MultivariateData data_type;
        typedef SingularDistribution estimated_type;
        typedef SingularDistributionEstimation copy_type;

        virtual ~SingularDistributionEstimation() = 0;

        virtual estimated_type const * get_estimated() const = 0;
        
        struct STATISKIT_CORE_API Estimator : public statiskit::Estimator
        { 
            typedef SingularDistributionEstimation estimation_type;

            virtual ~Estimator() = 0;

            virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const bool& lazy=true) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    typedef Selection< SingularDistribution, SingularDistributionEstimation > SingularDistributionSelection;
    typedef SingularDistributionSelection::CriterionEstimator SingularDistributionCriterionEstimator;

    struct STATISKIT_CORE_API MultinomialSingularDistributionEstimation : ActiveEstimation< MultinomialSingularDistribution, SingularDistributionEstimation >
    {
        MultinomialSingularDistributionEstimation(MultinomialSingularDistribution const * estimated, MultivariateData const * data);
        MultinomialSingularDistributionEstimation(const MultinomialSingularDistributionEstimation& estimation);
        virtual ~MultinomialSingularDistributionEstimation();

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy< SingularDistributionEstimation::Estimator, Estimator, ActiveEstimation< MultinomialSingularDistribution, SingularDistributionEstimation >::Estimator >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< SingularDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=false) const;
        };
    };

    struct STATISKIT_CORE_API DirichletMultinomialSingularDistributionEstimation : OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSingularDistribution, SingularDistributionEstimation >
    {
        DirichletMultinomialSingularDistributionEstimation(DirichletMultinomialSingularDistribution const * estimated, MultivariateData const * data);
        DirichletMultinomialSingularDistributionEstimation(const DirichletMultinomialSingularDistributionEstimation& estimation);
        virtual ~DirichletMultinomialSingularDistributionEstimation();

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy< SingularDistributionEstimation::Estimator, Estimator, OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSingularDistribution, SingularDistributionEstimation >::Estimator >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< SingularDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=false) const;
        };
    };

    class STATISKIT_CORE_API SplittingDistributionEstimation : public ActiveEstimation< SplittingDistribution, DiscreteMultivariateDistributionEstimation >
    {
        public:
            SplittingDistributionEstimation(SplittingDistribution const * estimated, MultivariateData const * data);
            SplittingDistributionEstimation(const SplittingDistributionEstimation& estimation);
            virtual ~SplittingDistributionEstimation();

            const DiscreteUnivariateDistributionEstimation* get_sum() const;

            const SingularDistributionEstimation* get_singular() const;

            class STATISKIT_CORE_API Estimator : public PolymorphicCopy< MultivariateDistributionEstimation::Estimator, Estimator, ActiveEstimation< SplittingDistribution, DiscreteMultivariateDistributionEstimation >::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();

                    virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=false) const;

                    const DiscreteUnivariateDistributionEstimation::Estimator* get_sum() const;
                    void  set_sum(const DiscreteUnivariateDistributionEstimation::Estimator& sum);

                    const SingularDistributionEstimation::Estimator* get_singular() const;
                    void set_singular(const SingularDistributionEstimation::Estimator& singular);

                protected:
                    DiscreteUnivariateDistributionEstimation::Estimator* _sum;
                    SingularDistributionEstimation::Estimator* _singular;

                    virtual std::unordered_set< uintptr_t > children() const;
            };

        protected:
            DiscreteUnivariateDistributionEstimation* _sum;        
            SingularDistributionEstimation* _singular;
    };

    struct STATISKIT_CORE_API NegativeMultinomialDistributionEstimation : public OptimizationEstimation<double, SplittingDistribution, DiscreteMultivariateDistributionEstimation >
    {
            NegativeMultinomialDistributionEstimation();
            NegativeMultinomialDistributionEstimation(SplittingDistribution const * estimated, MultivariateData const * data);
            NegativeMultinomialDistributionEstimation(const NegativeMultinomialDistributionEstimation& estimation);
            virtual ~NegativeMultinomialDistributionEstimation();

            struct STATISKIT_CORE_API WZ99Estimator : OptimizationEstimation<double, SplittingDistribution, DiscreteMultivariateDistributionEstimation >::Estimator
            {
                public:
                    WZ99Estimator();
                    WZ99Estimator(const WZ99Estimator& estimator);
                    virtual ~WZ99Estimator();

                    virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                    virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;
            };
    };

    /*template<class D, class E> class IndependentMultivariateDistributionEstimation : public ActiveEstimation< IndependentMultivariateDistribution< D >, E >
    {
        public:
            IndependentMultivariateDistributionEstimation();
            IndependentMultivariateDistributionEstimation(IndependentMultivariateDistribution< D > const * estimated, typename E::data_type const * data);
            IndependentMultivariateDistributionEstimation(const IndependentMultivariateDistributionEstimation< D, E >& estimation);
            virtual ~IndependentMultivariateDistributionEstimation();
            
            Index size() const;

            const UnivariateDistributionEstimation* get_estimation(const Index& index) const;

            class Estimator : public E::Estimator
            {
                public:                    
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
        
                    virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;
                    
                    virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                    const typename E::Estimator::marginal_type* get_default_estimator() const;
                    void set_default_estimator(const typename E::Estimator::marginal_type& estimator);

                    const typename E::Estimator::marginal_type* get_estimator(const Index& index) const;
                    void set_estimator(const Index& index, const typename E::Estimator::marginal_type* estimator);

                protected:
                    typename E::Estimator::marginal_type* _default_estimator;
                    std::map< Index, typename E::Estimator::marginal_type* > _estimators;
            };

        protected:
            std::vector< UnivariateDistributionEstimation* > _estimations;
    };
    
    typedef IndependentMultivariateDistributionEstimation< MultivariateDistribution, MultivariateDistributionEstimation > MixedIndependentMultivariateDistributionEstimation;
    typedef IndependentMultivariateDistributionEstimation< CategoricalMultivariateDistribution, CategoricalMultivariateDistributionEstimation > CategoricalIndependentMultivariateDistributionEstimation;
    typedef IndependentMultivariateDistributionEstimation< DiscreteMultivariateDistribution, DiscreteMultivariateDistributionEstimation > DiscreteIndependentMultivariateDistributionEstimation;
    typedef IndependentMultivariateDistributionEstimation< ContinuousMultivariateDistribution, ContinuousMultivariateDistributionEstimation > ContinuousIndependentMultivariateDistributionEstimation;*/

    template<class D, class E> struct MixtureDistributionEMEstimation : OptimizationEstimation< D*, D, E >
    {
        MixtureDistributionEMEstimation();
        MixtureDistributionEMEstimation(D const * estimated, typename E::data_type const * data);            
        MixtureDistributionEMEstimation(const MixtureDistributionEMEstimation< D, E >& estimation);
        virtual ~MixtureDistributionEMEstimation();

        class Estimator : public OptimizationEstimation< D*, D, E >::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< typename E::Estimator::estimation_type > operator() (const typename E::Estimator::estimation_type::data_type& data, const bool& lazy=true) const;

                virtual std::unique_ptr< typename E::Estimator::estimation_type::Estimator > copy() const;

                bool get_pi() const;
                void set_pi(const bool& pi);

                const typename E::Estimator* get_default_estimator() const;
                void set_default_estimator(const typename E::Estimator* estimator);

                const typename E::Estimator* get_estimator(const Index& index) const;
                void set_estimator(const Index& index, const typename E::Estimator* estimator);

                const D* get_initializator() const;
                void set_initializator(const D& initializator);

                bool get_limit() const;
                void set_limit(const bool& limit);

            protected:
                bool _pi;
                D* _initializator;
                typename E::Estimator* _default_estimator;
                std::map< Index, typename E::Estimator* > _estimators;
                bool _limit;

                virtual std::unordered_set< uintptr_t > children() const;
        };
    };
    
    typedef MixtureDistributionEMEstimation< CategoricalUnivariateMixtureDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateMixtureDistributionEMEstimation;
    typedef CategoricalUnivariateMixtureDistributionEMEstimation::Estimator CategoricalUnivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< DiscreteUnivariateMixtureDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateMixtureDistributionEMEstimation;    
    typedef DiscreteUnivariateMixtureDistributionEMEstimation::Estimator DiscreteUnivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< ContinuousUnivariateMixtureDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateMixtureDistributionEMEstimation;
    typedef ContinuousUnivariateMixtureDistributionEMEstimation::Estimator ContinuousUnivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< MixedMultivariateMixtureDistribution, MultivariateDistributionEstimation > MixedMultivariateMixtureDistributionEMEstimation;
    typedef MixedMultivariateMixtureDistributionEMEstimation::Estimator MixedMultivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< CategoricalMultivariateMixtureDistribution, CategoricalMultivariateDistributionEstimation > CategoricalMultivariateMixtureDistributionEMEstimation;
    typedef CategoricalMultivariateMixtureDistributionEMEstimation::Estimator CategoricalMultivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< DiscreteMultivariateMixtureDistribution, DiscreteMultivariateDistributionEstimation > DiscreteMultivariateMixtureDistributionEMEstimation;
    typedef DiscreteMultivariateMixtureDistributionEMEstimation::Estimator DiscreteMultivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< ContinuousMultivariateMixtureDistribution, ContinuousMultivariateDistributionEstimation > ContinuousMultivariateMixtureDistributionEMEstimation;
    typedef ContinuousMultivariateMixtureDistributionEMEstimation::Estimator ContinuousMultivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< MixtureSingularDistribution, SingularDistributionEstimation > MixtureSingularDistributionEMEstimation;
    typedef MixtureSingularDistributionEMEstimation::Estimator MixtureSingularDistributionEMEstimator;
}

#include "estimator.hpp"