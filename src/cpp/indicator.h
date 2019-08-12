#pragma once

#include "data.h"
#include "estimation.h"

namespace statiskit
{
    struct STATISKIT_CORE_API qualitative_sample_space_error : parameter_error
    { qualitative_sample_space_error(); };

    struct STATISKIT_CORE_API UnivariateLocationEstimation
    { 
        typedef UnivariateLocationEstimation copy_type;

        virtual ~UnivariateLocationEstimation() = 0;

        virtual const double& get_location() const = 0;

        virtual std::unique_ptr< copy_type > copy() const = 0;

        struct STATISKIT_CORE_API Estimator
        { 
            typedef Estimator copy_type;

            virtual ~Estimator() = 0;

            virtual std::unique_ptr< UnivariateLocationEstimation > operator() (const UnivariateData& data) const = 0;

            virtual std::unique_ptr< copy_type > copy() const = 0;
        };
    };

    struct STATISKIT_CORE_API MultivariateLocationEstimation
    {
        typedef MultivariateLocationEstimation copy_type;

        virtual ~MultivariateLocationEstimation() = 0;

        virtual const Eigen::VectorXd& get_location() const = 0;

        virtual std::unique_ptr< copy_type > copy() const = 0;

        struct STATISKIT_CORE_API Estimator
        { 
            typedef Estimator copy_type;

            virtual ~Estimator() = 0;

            virtual std::unique_ptr< MultivariateLocationEstimation > operator() (const MultivariateData& data) const = 0;

            virtual std::unique_ptr< copy_type > copy() const = 0;
        };
    };

    class STATISKIT_CORE_API UnivariateMeanEstimation : public PolymorphicCopy<UnivariateMeanEstimation, UnivariateLocationEstimation>
    {
        public:
            UnivariateMeanEstimation(const double& location);
            UnivariateMeanEstimation(const UnivariateMeanEstimation& estimation);
            virtual ~UnivariateMeanEstimation();

            virtual const double& get_location() const;
         
            struct STATISKIT_CORE_API Estimator : PolymorphicCopy<Estimator, UnivariateLocationEstimation::Estimator>
            { 
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateLocationEstimation > operator() (const UnivariateData& data) const;
            };
            
        protected:
            double location;
    };

    class STATISKIT_CORE_API MultivariateMeanEstimation : public PolymorphicCopy<MultivariateMeanEstimation, MultivariateLocationEstimation>
    {
        public:
            MultivariateMeanEstimation(const Eigen::VectorXd& location);
            MultivariateMeanEstimation(const MultivariateMeanEstimation& estimation);
            virtual ~MultivariateMeanEstimation();

            virtual const Eigen::VectorXd& get_location() const;

            struct STATISKIT_CORE_API Estimator : PolymorphicCopy<Estimator, MultivariateLocationEstimation::Estimator>
            { 
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< MultivariateLocationEstimation > operator() (const MultivariateData& data) const;
            };

        protected:
            Eigen::VectorXd location;
    };

    class STATISKIT_CORE_API UnivariateDispersionEstimation
    {
        public:
            typedef UnivariateDispersionEstimation copy_type;

            UnivariateDispersionEstimation(const double& location);
            UnivariateDispersionEstimation(const UnivariateDispersionEstimation& estimation);
            virtual ~UnivariateDispersionEstimation() = 0;

            const double& get_location() const;

            virtual const double& get_dispersion() const = 0;
           
            virtual std::unique_ptr< copy_type > copy() const = 0;

            struct STATISKIT_CORE_API Estimator
            {
                typedef Estimator copy_type;

                virtual ~Estimator() = 0;

                virtual std::unique_ptr< UnivariateDispersionEstimation > operator() (const UnivariateData& data, const double& location) const = 0;

                virtual std::unique_ptr< copy_type > copy() const = 0;
            };

        protected:
            double location;
    };

    class STATISKIT_CORE_API MultivariateDispersionEstimation
    {
        public:
            typedef MultivariateDispersionEstimation copy_type;

            MultivariateDispersionEstimation(const Eigen::VectorXd& location);
            MultivariateDispersionEstimation(const MultivariateDispersionEstimation& estimation);
            virtual ~MultivariateDispersionEstimation() = 0;

            const Eigen::VectorXd& get_location() const;

            virtual const Eigen::MatrixXd& get_dispersion() const = 0;

            virtual std::unique_ptr< copy_type > copy() const = 0;

            struct STATISKIT_CORE_API Estimator
            { 
                typedef Estimator copy_type;

                virtual ~Estimator() = 0;

                virtual std::unique_ptr< MultivariateDispersionEstimation > operator() (const MultivariateData& data, const Eigen::VectorXd& location) const = 0;

                virtual std::unique_ptr< copy_type > copy() const = 0;
            };

        protected:
            Eigen::VectorXd location;
    };

    class STATISKIT_CORE_API UnivariateVarianceEstimation : public PolymorphicCopy<UnivariateVarianceEstimation, UnivariateDispersionEstimation>
    { 
        public:
            UnivariateVarianceEstimation(const double& location, const bool& bias, const double& dispersion);
            UnivariateVarianceEstimation(const UnivariateVarianceEstimation& estimation);
            virtual ~UnivariateVarianceEstimation();

            const bool& get_bias() const;

            virtual const double& get_dispersion() const;

            class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, UnivariateDispersionEstimation::Estimator>
            {
                public:
                    Estimator();
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
                      
                    virtual std::unique_ptr< UnivariateDispersionEstimation > operator() (const UnivariateData& data, const double& location) const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool bias;
            };

        protected:
            bool bias;
            double dispersion;
    };

    class STATISKIT_CORE_API MultivariateVarianceEstimation : public PolymorphicCopy<MultivariateVarianceEstimation, MultivariateDispersionEstimation>
    { 
        public:
            MultivariateVarianceEstimation(const Eigen::VectorXd& location, const Eigen::MatrixXd& dispersion, const bool& bias);
            MultivariateVarianceEstimation(const MultivariateVarianceEstimation& estimation);
            virtual ~MultivariateVarianceEstimation();

            const bool& get_bias() const;

            virtual const Eigen::MatrixXd& get_dispersion() const;

            class STATISKIT_CORE_API Estimator : public PolymorphicCopy<Estimator, MultivariateDispersionEstimation::Estimator>
            {
                public:
                    Estimator();
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
                      
                    virtual std::unique_ptr< MultivariateDispersionEstimation > operator() (const MultivariateData& data, const Eigen::VectorXd& location) const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool bias;

                    double compute(const MultivariateData& data, const Eigen::VectorXd& location, const Index& i, const Index& j) const;
            };

        protected:
            bool bias;
            Eigen::MatrixXd dispersion;
    };
}