#pragma once

#include <statiskit/linalg/Eigen.h>

#include "base.h"
#include "data.h"

namespace statiskit
{
    struct STATISKIT_CORE_API SingularDistribution
    {
        using copy_type = SingularDistribution;
        using data_type = MultivariateData;

        virtual ~SingularDistribution() = 0;
        
        virtual Index get_nb_components() const = 0;

        virtual unsigned int get_nb_parameters() const = 0;

        virtual double probability(const MultivariateEvent* event, const bool& logarithm) const = 0;

        double loglikelihood(const MultivariateData& data) const;

        virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const = 0;

        virtual std::unique_ptr< SingularDistribution > copy() const = 0;
    };

    class STATISKIT_CORE_API MultinomialSingularDistribution : public PolymorphicCopy< MultinomialSingularDistribution, SingularDistribution >
    {
        public:
            MultinomialSingularDistribution(const Eigen::VectorXd& pi);
            MultinomialSingularDistribution(const MultinomialSingularDistribution& splitting);
            virtual ~MultinomialSingularDistribution();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const;

            const Eigen::VectorXd& get_pi() const;
            void set_pi(const Eigen::VectorXd& pi);

        protected:
            Eigen::VectorXd pi;
    };

    class STATISKIT_CORE_API DirichletMultinomialSingularDistribution : public PolymorphicCopy< DirichletMultinomialSingularDistribution, SingularDistribution >
    {
        public:
            DirichletMultinomialSingularDistribution(const Eigen::VectorXd& alpha);
            DirichletMultinomialSingularDistribution(const DirichletMultinomialSingularDistribution& splitting);
            virtual ~DirichletMultinomialSingularDistribution();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const;

            const Eigen::VectorXd& get_alpha() const;
            void set_alpha(const Eigen::VectorXd& alpha);
            
        protected:
            Eigen::VectorXd alpha;
    };

    using SingularDistributionEstimation = DistributionEstimation< SingularDistribution >;
    using SingularDistributionSelection = Selection< SingularDistributionEstimation >;
    using SingularDistributionCriterionEstimator = SingularDistributionSelection::CriterionEstimator;

    struct STATISKIT_CORE_API MultinomialSingularDistributionEstimation : PolymorphicCopy<MultinomialSingularDistributionEstimation, SingularDistributionEstimation>
    {
        using PolymorphicCopy<MultinomialSingularDistributionEstimation, SingularDistributionEstimation>::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy< Estimator, SingularDistributionEstimation::Estimator >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data, const bool& lazy=false) const;
        };
    };

    struct STATISKIT_CORE_API DirichletMultinomialSingularDistributionEstimation : PolymorphicCopy<DirichletMultinomialSingularDistributionEstimation, IterativeEstimation<Eigen::VectorXd, SingularDistributionEstimation > >
    {
        using PolymorphicCopy<DirichletMultinomialSingularDistributionEstimation, IterativeEstimation<Eigen::VectorXd, SingularDistributionEstimation > >::PolymorphicCopy;

        struct STATISKIT_CORE_API Estimator : PolymorphicCopy< Estimator, SingularDistributionEstimation::Estimator >
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data, const bool& lazy=false) const;
        };
    };

    class STATISKIT_CORE_API SplittingDistribution : public PolymorphicCopy< SplittingDistribution, DiscreteMultivariateDistribution >
    {
        public:
            SplittingDistribution(const DiscreteUnivariateDistribution& sum, const SingularDistribution& singular);
            SplittingDistribution(const SplittingDistribution& splitting);
            virtual ~SplittingDistribution();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            std::unique_ptr< MultivariateEvent > simulate() const;

            const DiscreteUnivariateDistribution* get_sum() const;
            void set_sum(const DiscreteUnivariateDistribution& sum);

            SingularDistribution* get_singular() const;
            void set_singular(const SingularDistribution& singular);

        protected:
            DiscreteUnivariateDistribution* sum;
            SingularDistribution* singular;

            SplittingDistribution();
    };

    class STATISKIT_CORE_API SplittingDistributionEstimation : public PolymorphicCopy< SplittingDistributionEstimation, DiscreteMultivariateDistributionEstimation >
    {
        public:
            using PolymorphicCopy< SplittingDistributionEstimation, DiscreteMultivariateDistributionEstimation >::PolymorphicCopy;

            const DiscreteUnivariateDistributionEstimation* get_sum() const;

            const SingularDistributionEstimation* get_singular() const;

            class STATISKIT_CORE_API Estimator : public PolymorphicCopy< Estimator, DiscreteMultivariateDistributionEstimation::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();

                    virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data, const bool& lazy=false) const;

                    const DiscreteUnivariateDistributionEstimation::Estimator* get_sum() const;
                    void  set_sum(const DiscreteUnivariateDistributionEstimation::Estimator& sum);

                    const SingularDistributionEstimation::Estimator* get_singular() const;
                    void set_singular(const SingularDistributionEstimation::Estimator& singular);

                protected:
                    DiscreteUnivariateDistributionEstimation::Estimator* sum;
                    SingularDistributionEstimation::Estimator* singular;

                    virtual std::unordered_set< uintptr_t > children() const;
            };

        protected:
            DiscreteUnivariateDistributionEstimation* sum;        
            SingularDistributionEstimation* singular;
    };
}