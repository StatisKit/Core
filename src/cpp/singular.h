#pragma once

#include <statiskit/linalg/Eigen.h>

#include "base.h"
#include "data.h"

namespace statiskit
{
    struct STATISKIT_CORE_API SingularDistribution
    {
        typedef MultivariateData data_type;

        virtual ~SingularDistribution() = 0;
        
        virtual Index get_nb_components() const = 0;

        virtual unsigned int get_nb_parameters() const = 0;

        virtual double probability(const MultivariateEvent* event, const bool& logarithm) const = 0;

        double loglikelihood(const MultivariateData& data) const;

        virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const = 0;

        virtual std::unique_ptr< SingularDistribution > copy() const = 0;
    };

    class STATISKIT_CORE_API MultinomialSingularDistribution : public PolymorphicCopy< SingularDistribution, MultinomialSingularDistribution >
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
            Eigen::VectorXd _pi;
    };

    class STATISKIT_CORE_API DirichletMultinomialSingularDistribution : public PolymorphicCopy< SingularDistribution, DirichletMultinomialSingularDistribution >
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
            Eigen::VectorXd _alpha;
    };
}