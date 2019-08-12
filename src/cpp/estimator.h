#pragma once

#include "base.h"
#include "distribution.h"
#include "estimation.h"
#include "indicator.h"
#include "optimization.h"
#include "selection.h"
#include "slope_heuristic.h"

namespace statiskit
{
    template<class B> struct ShiftedDistributionEstimation : PolymorphicCopy< ShiftedDistributionEstimation<B>, B >
    {
        using PolymorphicCopy< ShiftedDistributionEstimation<B>, B >::PolymorphicCopy;

        class Estimator : public PolymorphicCopy< Estimator, typename B::Estimator >
        {
            public:
                typedef typename B::Estimator estimator_type;
                typedef typename estimator_type::estimation_type estimation_type;
                typedef typename estimator_type::data_type data_type;
                typedef typename estimator_type::event_type event_type;

                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const data_type& data) const;

                typename event_type::value_type get_shift() const;
                void set_shift(const typename event_type::value_type& shift);

                const estimator_type* get_estimator() const;
                void set_estimator(const estimator_type& estimator);

            protected:
                typename event_type::value_type shift;
                estimator_type* estimator;
        };
    };

    typedef ShiftedDistributionEstimation< DiscreteUnivariateDistributionEstimation >  DiscreteUnivariateShiftedDistributionEstimation;
    typedef DiscreteUnivariateShiftedDistributionEstimation::Estimator DiscreteUnivariateShiftedDistributionEstimator;

    typedef ShiftedDistributionEstimation< ContinuousUnivariateDistributionEstimation > ContinuousUnivariateShiftedDistributionEstimation;
    typedef ContinuousUnivariateShiftedDistributionEstimation::Estimator ContinuousUnivariateShiftedDistributionEstimator;

    template<class B> struct UnivariateFrequencyDistributionEstimation : PolymorphicCopy< UnivariateFrequencyDistributionEstimation<B>, B >
    {
        using PolymorphicCopy< UnivariateFrequencyDistributionEstimation<B>, B >::PolymorphicCopy;

        class Estimator : public B::Estimator
        { 
            public:
                typedef typename B::Estimator::data_type data_type;
                typedef typename B::Estimator::distribution_type distribution_type;
                typedef typename B::Estimator::estimation_type estimation_type;
                typedef typename B::Estimator::event_type event_type;

                typedef typename event_type::value_type value_type;

                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                using B::Estimator::operator();
                virtual std::unique_ptr< estimation_type > operator() (const data_type& data) const;

            protected:
                virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const = 0;
        };
    };

    typedef UnivariateFrequencyDistributionEstimation< CategoricalUnivariateDistributionEstimation > NominalDistributionEstimation;

    class STATISKIT_CORE_API NominalDistributionEstimator : public PolymorphicCopy<NominalDistributionEstimator, NominalDistributionEstimation::Estimator>
    {
        public:
            using PolymorphicCopy<NominalDistributionEstimator, NominalDistributionEstimation::Estimator>::PolymorphicCopy;

        protected:
            virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const;
    };

    typedef UnivariateFrequencyDistributionEstimation< DiscreteUnivariateDistributionEstimation > DiscreteUnivariateFrequencyDistributionEstimation;

    class STATISKIT_CORE_API DiscreteUnivariateFrequencyDistributionEstimator : public PolymorphicCopy<DiscreteUnivariateFrequencyDistributionEstimator, DiscreteUnivariateFrequencyDistributionEstimation::Estimator>
    {
        public:
            using PolymorphicCopy<DiscreteUnivariateFrequencyDistributionEstimator, DiscreteUnivariateFrequencyDistributionEstimation::Estimator>::PolymorphicCopy;

        protected:
            virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const;
    };

    typedef UnivariateFrequencyDistributionEstimation< ContinuousUnivariateDistributionEstimation > ContinuousUnivariateFrequencyDistributionEstimation;

    class STATISKIT_CORE_API ContinuousUnivariateFrequencyDistributionEstimator : public PolymorphicCopy<ContinuousUnivariateFrequencyDistributionEstimator, ContinuousUnivariateFrequencyDistributionEstimation::Estimator>
    {
        public:
            using PolymorphicCopy<ContinuousUnivariateFrequencyDistributionEstimator, ContinuousUnivariateFrequencyDistributionEstimation::Estimator>::PolymorphicCopy;

        protected:
            virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& masses) const;
    };

    struct STATISKIT_CORE_API PoissonDistributionEstimation : DiscreteUnivariateDistributionEstimation
    {
        using DiscreteUnivariateDistributionEstimation::DiscreteUnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API PoissonDistributionMLEstimation : PolymorphicCopy< PoissonDistributionMLEstimation, PoissonDistributionEstimation >
    {
        using PolymorphicCopy< PoissonDistributionMLEstimation, PoissonDistributionEstimation >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy<Estimator, PoissonDistributionEstimation::Estimator>
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;
        };
    };

    struct STATISKIT_CORE_API BinomialDistributionEstimation : DiscreteUnivariateDistributionEstimation
    {
        using DiscreteUnivariateDistributionEstimation::DiscreteUnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API BinomialDistributionMLEstimation : PolymorphicCopy< BinomialDistributionMLEstimation, IterativeEstimation<unsigned int, BinomialDistributionEstimation > >
    {
        using PolymorphicCopy< BinomialDistributionMLEstimation, IterativeEstimation<unsigned int, BinomialDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, Optimization< BinomialDistributionEstimation::Estimator > >
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;

                bool get_force() const;
                void set_force(const bool& force);

            protected:
                bool force;
        };
    };
    
    struct STATISKIT_CORE_API BinomialDistributionMMEstimation : PolymorphicCopy< BinomialDistributionMMEstimation, BinomialDistributionEstimation >
    {
        using PolymorphicCopy< BinomialDistributionMMEstimation, BinomialDistributionEstimation >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, BinomialDistributionEstimation::Estimator >
        { 
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;

                UnivariateLocationEstimation::Estimator* get_location();
                void set_location(const UnivariateLocationEstimation::Estimator& location);

                UnivariateDispersionEstimation::Estimator* get_dispersion();
                void set_dispersion(const UnivariateDispersionEstimation::Estimator& dispersion);

            protected:
                UnivariateLocationEstimation::Estimator* location;
                UnivariateDispersionEstimation::Estimator* dispersion;
        };
    };

    struct STATISKIT_CORE_API LogarithmicDistributionEstimation : DiscreteUnivariateDistributionEstimation
    {
        using DiscreteUnivariateDistributionEstimation::DiscreteUnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API LogarithmicDistributionMLEstimation : PolymorphicCopy< LogarithmicDistributionMLEstimation, IterativeEstimation<double, LogarithmicDistributionEstimation > >
    {
        using PolymorphicCopy< LogarithmicDistributionMLEstimation, IterativeEstimation<double, LogarithmicDistributionEstimation > >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy< Estimator, Optimization< LogarithmicDistributionEstimation::Estimator > >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;
        };
    };

    struct STATISKIT_CORE_API GeometricDistributionEstimation : DiscreteUnivariateDistributionEstimation
    {
        using DiscreteUnivariateDistributionEstimation::DiscreteUnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API GeometricDistributionMLEstimation : PolymorphicCopy<GeometricDistributionMLEstimation, GeometricDistributionEstimation>
    {
        using PolymorphicCopy<GeometricDistributionMLEstimation, GeometricDistributionEstimation>::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy<Estimator, GeometricDistributionEstimation::Estimator>
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;
        };
    };

    struct STATISKIT_CORE_API NegativeBinomialDistributionEstimation : DiscreteUnivariateDistributionEstimation
    {
        using DiscreteUnivariateDistributionEstimation::DiscreteUnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API NegativeBinomialDistributionMLEstimation : PolymorphicCopy< NegativeBinomialDistributionMLEstimation, IterativeEstimation<double, NegativeBinomialDistributionEstimation > >
    {
        using PolymorphicCopy< NegativeBinomialDistributionMLEstimation, IterativeEstimation<double, NegativeBinomialDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, Optimization< NegativeBinomialDistributionEstimation::Estimator > >
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;

                bool get_force() const;
                void set_force(const bool& force);
                
            protected:
                bool force;
        };
    };
    
    struct STATISKIT_CORE_API NegativeBinomialDistributionMMEstimation : PolymorphicCopy< NegativeBinomialDistributionMMEstimation, NegativeBinomialDistributionEstimation >
    {
        using PolymorphicCopy< NegativeBinomialDistributionMMEstimation, NegativeBinomialDistributionEstimation >::PolymorphicCopy;

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
        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, NegativeBinomialDistributionEstimation::Estimator >
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
                virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;

                UnivariateLocationEstimation::Estimator* get_location();
                void set_location(const UnivariateLocationEstimation::Estimator& location);

                UnivariateDispersionEstimation::Estimator* get_dispersion();
                void set_dispersion(const UnivariateDispersionEstimation::Estimator& dispersion);

            protected:
                UnivariateLocationEstimation::Estimator* location;
                UnivariateDispersionEstimation::Estimator* dispersion;
        };
    };
    
    struct STATISKIT_CORE_API NormalDistributionEstimation : ContinuousUnivariateDistributionEstimation
    {
        using ContinuousUnivariateDistributionEstimation::ContinuousUnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : ContinuousUnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API NormalDistributionMLEstimation : PolymorphicCopy< NormalDistributionMLEstimation, NormalDistributionEstimation >
    {
        using PolymorphicCopy< NormalDistributionMLEstimation, NormalDistributionEstimation >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, NormalDistributionEstimation::Estimator >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const; 
        };
    };
   
    struct STATISKIT_CORE_API UnivariateHistogramDistributionEstimation : ContinuousUnivariateDistributionEstimation
    {
        using ContinuousUnivariateDistributionEstimation::ContinuousUnivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : ContinuousUnivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API UnivariateHistogramDistributionClassicEstimation : PolymorphicCopy< UnivariateHistogramDistributionClassicEstimation, UnivariateHistogramDistributionEstimation >
    {
        using PolymorphicCopy< UnivariateHistogramDistributionClassicEstimation, UnivariateHistogramDistributionEstimation >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, UnivariateHistogramDistributionEstimation::Estimator>
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;

                const unsigned int& get_nb_bins() const;
                void set_nb_bins(const unsigned int& nb_bins);

            protected:
                unsigned int nb_bins;
        };
    };

    struct STATISKIT_CORE_API UnivariateHistogramDistributionRegularEstimation : PolymorphicCopy< UnivariateHistogramDistributionRegularEstimation, SlopeHeuristicSelection< UnivariateHistogramDistributionEstimation > >
    {
        using PolymorphicCopy< UnivariateHistogramDistributionRegularEstimation, SlopeHeuristicSelection< UnivariateHistogramDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, UnivariateHistogramDistributionEstimation::Estimator>
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;

                const unsigned int& get_maxbins() const;
                void set_maxbins(const unsigned int& maxbins);

            protected:
                unsigned int maxbins;
        }; 
    };

    struct STATISKIT_CORE_API UnivariateHistogramDistributionIrregularEstimation : PolymorphicCopy< UnivariateHistogramDistributionIrregularEstimation, SlopeHeuristicSelection< UnivariateHistogramDistributionEstimation > >
    {
        using PolymorphicCopy< UnivariateHistogramDistributionIrregularEstimation, SlopeHeuristicSelection< UnivariateHistogramDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, UnivariateHistogramDistributionEstimation::Estimator>
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;

                const unsigned int& get_maxbins() const;
                void set_maxbins(const unsigned int& maxbins);

                const double& get_constant() const;
                void set_constant(const double& constant);

            protected:
                unsigned int maxbins;
                double constant;
        }; 
    };

    struct STATISKIT_CORE_API NegativeMultinomialDistributionEstimation : DiscreteMultivariateDistributionEstimation
    {
        using DiscreteMultivariateDistributionEstimation::DiscreteMultivariateDistributionEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteMultivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API NegativeMultinomialDistributionWZ99Estimation : public PolymorphicCopy< NegativeMultinomialDistributionEstimation, IterativeEstimation<double, NegativeMultinomialDistributionEstimation> >
    {
        using PolymorphicCopy< NegativeMultinomialDistributionEstimation, IterativeEstimation<double, NegativeMultinomialDistributionEstimation> >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy< Estimator, Optimization< NegativeMultinomialDistributionEstimation::Estimator > >
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data) const;
        };
    };
}

#include "estimator.hpp"