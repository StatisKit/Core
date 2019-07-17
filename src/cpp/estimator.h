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
                using estimator_type = typename B::Estimator;
                using estimation_type = typename estimator_type::estimation_type;
                using data_type = typename estimator_type::data_type;
                using event_type = typename estimator_type::event_type;

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

                virtual std::unique_ptr< distribution_type > create(const distribution_type* distribution) const;
        };
    };

    using DiscreteUnivariateShiftedDistributionEstimation = ShiftedDistributionEstimation< DiscreteUnivariateDistributionEstimation > ;
    using DiscreteUnivariateShiftedDistributionEstimator = DiscreteUnivariateShiftedDistributionEstimation::Estimator;

    using ContinuousUnivariateShiftedDistributionEstimation = ShiftedDistributionEstimation< ContinuousUnivariateDistributionEstimation >;
    using ContinuousUnivariateShiftedDistributionEstimator = ContinuousUnivariateShiftedDistributionEstimation::Estimator;

    template<class B> struct UnivariateFrequencyDistributionEstimation : PolymorphicCopy< UnivariateFrequencyDistributionEstimation<B>, B >
    {
        using PolymorphicCopy< UnivariateFrequencyDistributionEstimation<B>, B >::PolymorphicCopy;

        class Estimator : public PolymorphicCopy< Estimator, typename B::Estimator >
        { 
            public:
                using data_type = typename PolymorphicCopy< Estimator, typename B::Estimator >::data_type;
                using distribution_type = typename PolymorphicCopy< Estimator, typename B::Estimator >::distribution_type;
                using estimation_type = typename PolymorphicCopy< Estimator, typename B::Estimator >::estimation_type;
                using event_type = typename PolymorphicCopy< Estimator, typename B::Estimator >::event_type;

                using value_type = typename event_type::value_type;

                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const data_type& data) const;

            protected:
                inline virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const = 0;
        };
    };

    using NominalDistributionEstimation = UnivariateFrequencyDistributionEstimation< CategoricalUnivariateDistributionEstimation >;

    class NominalDistributionEstimator : NominalDistributionEstimation::Estimator
    {
        protected:
            inline virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const;
    };

    using DiscreteUnivariateFrequencyDistributionEstimation = UnivariateFrequencyDistributionEstimation< DiscreteUnivariateDistributionEstimation >;

    class DiscreteUnivariateFrequencyDistributionEstimator : DiscreteUnivariateFrequencyDistributionEstimation::Estimator
    {
        protected:
            inline virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& pi) const;
    };

    using ContinuousUnivariateFrequencyDistributionEstimation = UnivariateFrequencyDistributionEstimation< ContinuousUnivariateDistributionEstimation >;

    class ContinuousUnivariateFrequencyDistributionEstimator : ContinuousUnivariateFrequencyDistributionEstimation::Estimator
    {
        protected:
            inline virtual distribution_type* create(const std::set< value_type >& values, const Eigen::VectorXd& masses) const;
    };

    struct STATISKIT_CORE_API PoissonDistributionMLEstimation : PolymorphicCopy< PoissonDistributionMLEstimation, DiscreteUnivariateDistributionEstimation >
    {
        using PolymorphicCopy< PoissonDistributionMLEstimation, DiscreteUnivariateDistributionEstimation >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy<Estimator, DiscreteUnivariateDistributionEstimation::Estimator>
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;
        };
    };

    struct STATISKIT_CORE_API BinomialDistributionMLEstimation : PolymorphicCopy< BinomialDistributionMLEstimation, IterativeEstimation<unsigned int, DiscreteUnivariateDistributionEstimation > >
    {
        using PolymorphicCopy< BinomialDistributionMLEstimation, IterativeEstimation<unsigned int, DiscreteUnivariateDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >
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
    
    struct STATISKIT_CORE_API BinomialDistributionMMEstimation : PolymorphicCopy< BinomialDistributionMMEstimation, DiscreteUnivariateDistributionEstimation >
    {
        using PolymorphicCopy< BinomialDistributionMMEstimation, DiscreteUnivariateDistributionEstimation >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, DiscreteUnivariateDistributionEstimation::Estimator >
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

    struct STATISKIT_CORE_API LogarithmicDistributionMLEstimation : PolymorphicCopy< LogarithmicDistributionMLEstimation, IterativeEstimation<double, DiscreteUnivariateDistributionEstimation > >
    {
        using PolymorphicCopy< LogarithmicDistributionMLEstimation, IterativeEstimation<double, DiscreteUnivariateDistributionEstimation > >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;
        };
    };

    struct STATISKIT_CORE_API GeometricDistributionMLEstimation : PolymorphicCopy<GeometricDistributionMLEstimation, DiscreteUnivariateDistributionEstimation>
    {
        using PolymorphicCopy<GeometricDistributionMLEstimation, DiscreteUnivariateDistributionEstimation>::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, DiscreteUnivariateDistributionEstimation>::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const;
        };
    };

    struct STATISKIT_CORE_API NegativeBinomialDistributionMLEstimation : PolymorphicCopy< NegativeBinomialDistributionMLEstimation, IterativeEstimation<double, DiscreteUnivariateDistributionEstimation > >
    {
        using PolymorphicCopy< NegativeBinomialDistributionMLEstimation, IterativeEstimation<double, DiscreteUnivariateDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, Optimization< DiscreteUnivariateDistributionEstimation::Estimator > >
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
    
    struct STATISKIT_CORE_API NegativeBinomialDistributionMMEstimation : PolymorphicCopy< BinomialDistributionMMEstimation, DiscreteUnivariateDistributionEstimation >
    {
        using PolymorphicCopy< BinomialDistributionMMEstimation, DiscreteUnivariateDistributionEstimation >::PolymorphicCopy;

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
        class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, DiscreteUnivariateDistributionEstimation::Estimator >
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
    
    struct STATISKIT_CORE_API NormalDistributionMLEstimation : PolymorphicCopy< NormalDistributionMLEstimation, ContinuousUnivariateDistributionEstimation >
    {
        using PolymorphicCopy< NormalDistributionMLEstimation, ContinuousUnivariateDistributionEstimation >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, ContinuousUnivariateDistributionEstimation::Estimator >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const UnivariateData& data) const; 
        };
    };
   
    struct STATISKIT_CORE_API UnivariateHistogramDistributionEstimation : PolymorphicCopy< UnivariateHistogramDistributionEstimation, ContinuousUnivariateDistributionEstimation >
    {
        using PolymorphicCopy< UnivariateHistogramDistributionEstimation, ContinuousUnivariateDistributionEstimation >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, ContinuousUnivariateDistributionEstimation::Estimator>
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

    struct STATISKIT_CORE_API RegularUnivariateHistogramDistributionSlopeHeuristicSelection : PolymorphicCopy< RegularUnivariateHistogramDistributionSlopeHeuristicSelection, SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation > >
    {
        using PolymorphicCopy< RegularUnivariateHistogramDistributionSlopeHeuristicSelection, SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, ContinuousUnivariateDistributionEstimation::Estimator>
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

    struct STATISKIT_CORE_API IrregularUnivariateHistogramDistributionSlopeHeuristicSelection : PolymorphicCopy< IrregularUnivariateHistogramDistributionSlopeHeuristicSelection, SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation > >
    {
        using PolymorphicCopy< IrregularUnivariateHistogramDistributionSlopeHeuristicSelection, SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation > >::PolymorphicCopy;

        class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, ContinuousUnivariateDistributionEstimation::Estimator>
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

    struct STATISKIT_CORE_API NegativeMultinomialDistributionEstimation : public PolymorphicCopy< NegativeMultinomialDistributionEstimation, IterativeEstimation<double, DiscreteMultivariateDistributionEstimation> >
    {
        using PolymorphicCopy< NegativeMultinomialDistributionEstimation, IterativeEstimation<double, DiscreteMultivariateDistributionEstimation> >::PolymorphicCopy;

        struct STATISKIT_CORE_API WZ99Estimator : PolymorphicCopy< WZ99Estimator, Optimization< DiscreteMultivariateDistributionEstimation::Estimator > >
        {
            public:
                WZ99Estimator();
                WZ99Estimator(const WZ99Estimator& estimator);
                virtual ~WZ99Estimator();

                virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data) const;
        };
    };
}

#include "estimator.hpp"