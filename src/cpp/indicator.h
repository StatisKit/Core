#ifndef STATISKIT_CORE_INDICATOR_H
#define STATISKIT_CORE_INDICATOR_H

#include "data.h"
#include "estimation.h"

namespace statiskit
{
    struct STATISKIT_CORE_API qualitative_sample_space_error : parameter_error
    { qualitative_sample_space_error(); };

    struct STATISKIT_CORE_API UnivariateLocationEstimation
    { 
        virtual ~UnivariateLocationEstimation() = 0;

        virtual const double& get_location() const = 0;

        struct STATISKIT_CORE_API Estimator
        { 
            virtual ~Estimator() = 0;

            virtual std::unique_ptr< UnivariateLocationEstimation > operator() (const UnivariateData& data) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    struct STATISKIT_CORE_API MultivariateLocationEstimation
    {
        virtual ~MultivariateLocationEstimation() = 0;

        virtual const Eigen::VectorXd& get_location() const = 0;

        struct STATISKIT_CORE_API Estimator
        { 
            virtual ~Estimator() = 0;

            virtual std::unique_ptr< MultivariateLocationEstimation > operator() (const MultivariateData& data) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    class STATISKIT_CORE_API UnivariateMeanEstimation : public UnivariateLocationEstimation
    {
        public:
            UnivariateMeanEstimation(const double& location);
            UnivariateMeanEstimation(const UnivariateMeanEstimation& estimation);
            virtual ~UnivariateMeanEstimation();

            virtual const double& get_location() const;
         
            struct STATISKIT_CORE_API Estimator : UnivariateLocationEstimation::Estimator
            { 
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateLocationEstimation > operator() (const UnivariateData& data) const;

                virtual std::unique_ptr< UnivariateLocationEstimation::Estimator > copy() const;
            };
            
        protected:
            double _location;
    };

    class STATISKIT_CORE_API MultivariateMeanEstimation : public MultivariateLocationEstimation
    {
        public:
            MultivariateMeanEstimation(const Eigen::VectorXd& location);
            MultivariateMeanEstimation(const MultivariateMeanEstimation& estimation);
            virtual ~MultivariateMeanEstimation();

            virtual const Eigen::VectorXd& get_location() const;

            struct STATISKIT_CORE_API Estimator : MultivariateLocationEstimation::Estimator
            { 
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< MultivariateLocationEstimation > operator() (const MultivariateData& data) const;

                virtual std::unique_ptr< MultivariateLocationEstimation::Estimator > copy() const;
            };

        protected:
            Eigen::VectorXd _location;
    };

    class STATISKIT_CORE_API UnivariateDispersionEstimation
    {
        public:
            UnivariateDispersionEstimation(const double& location);
            UnivariateDispersionEstimation(const UnivariateDispersionEstimation& estimation);
            virtual ~UnivariateDispersionEstimation() = 0;

            const double& get_location() const;

            virtual const double& get_dispersion() const = 0;
           
            struct STATISKIT_CORE_API Estimator
            {
                virtual ~Estimator() = 0;

                virtual std::unique_ptr< UnivariateDispersionEstimation > operator() (const UnivariateData& data, const double& location) const = 0;

                virtual std::unique_ptr< Estimator > copy() const = 0;
            };

        protected:
            double _location;
    };

    class STATISKIT_CORE_API MultivariateDispersionEstimation
    {
        public:
            MultivariateDispersionEstimation(const Eigen::VectorXd& location);
            MultivariateDispersionEstimation(const MultivariateDispersionEstimation& estimation);
            virtual ~MultivariateDispersionEstimation() = 0;

            const Eigen::VectorXd& get_location() const;

            virtual const Eigen::MatrixXd& get_dispersion() const = 0;

            struct STATISKIT_CORE_API Estimator
            { 
                virtual ~Estimator() = 0;

                virtual std::unique_ptr< MultivariateDispersionEstimation > operator() (const MultivariateData& data, const Eigen::VectorXd& location) const = 0;

                virtual std::unique_ptr< Estimator > copy() const = 0;
            };

        protected:
            Eigen::VectorXd _location;
    };

    class STATISKIT_CORE_API UnivariateVarianceEstimation : public UnivariateDispersionEstimation
    { 
        public:
            UnivariateVarianceEstimation(const double& location, const bool& bias, const double& dispersion);
            UnivariateVarianceEstimation(const UnivariateVarianceEstimation& estimation);
            virtual ~UnivariateVarianceEstimation();

            const bool& get_bias() const;

            virtual const double& get_dispersion() const;

            class STATISKIT_CORE_API Estimator : public UnivariateDispersionEstimation::Estimator
            {
                public:
                    Estimator();
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
                      
                    virtual std::unique_ptr< UnivariateDispersionEstimation > operator() (const UnivariateData& data, const double& location) const;

                    virtual std::unique_ptr< UnivariateDispersionEstimation::Estimator > copy() const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool _bias;
            };

        protected:
            bool _bias;
            double _dispersion;
    };

    class STATISKIT_CORE_API MultivariateVarianceEstimation : public MultivariateDispersionEstimation
    { 
        public:
            MultivariateVarianceEstimation(const Eigen::VectorXd& location, const Eigen::MatrixXd& dispersion, const bool& bias);
            MultivariateVarianceEstimation(const MultivariateVarianceEstimation& estimation);
            virtual ~MultivariateVarianceEstimation();

            const bool& get_bias() const;

            virtual const Eigen::MatrixXd& get_dispersion() const;

            class STATISKIT_CORE_API Estimator : public MultivariateDispersionEstimation::Estimator
            {
                public:
                    Estimator();
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
                      
                    virtual std::unique_ptr< MultivariateDispersionEstimation > operator() (const MultivariateData& data, const Eigen::VectorXd& location) const;

                    virtual std::unique_ptr< MultivariateDispersionEstimation::Estimator > copy() const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool _bias;

                    double compute(const MultivariateData& data, const Eigen::VectorXd& location, const Index& i, const Index& j) const;
            };

        protected:
            bool _bias;
            Eigen::MatrixXd _dispersion;
    };

    /*class CoVarianceEstimation
    {
        public:
            CoVarianceEstimation(const std::array< double, 2 >& locations);
            CoVarianceEstimation(const CoVarianceEstimation& estimation);

            const std::array< double, 2 >& get_locations() const;

            virtual const double& get_dispersion() const = 0;
           
            struct Estimator
            {
                std::unique_ptr< CoVarianceEstimation > operator() (const UnivariateData& data) const;
                std::unique_ptr< CoVarianceEstimation > operator() (const UnivariateData& data, const double& location) const;
                std::unique_ptr< CoVarianceEstimation > operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data) const;
                virtual std::unique_ptr< CoVarianceEstimation > operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data, const std::array< double, 2 >& locations) const = 0;            
            };

        protected:
            std::array< double, 2 > _locations;
    };

    class NaturalCoVarianceEstimation : public CoVarianceEstimation
    { 
        public:
            NaturalCoVarianceEstimation(const std::array< double, 2 >& locations, const double& covariance, const bool& bias);
            NaturalCoVarianceEstimation(const NaturalCoVarianceEstimation& estimation);

            const bool& get_bias() const;

            virtual const double& get_covariance() const;

            class Estimator : public CoVarianceEstimation::Estimator
            {
                public:
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                      
                    using CoVarianceEstimation::Estimator::operator();
                    virtual std::unique_ptr< CoVarianceEstimation > operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data, const std::array< double, 2 >& locations) const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool _bias;
            };

        protected:
            double _covariance;
            bool _bias;
    };*/

    /*struct CoSkewnessEstimator
    {
        virtual double operator() (const UnivariateData& df) const;
        virtual double operator() (const Index& i, const Index& j, const Index& k, const MultivariateDataFrame& df, const bool& na_omit=true) const = 0;
    };

    struct CoKurtosisEstimator
    {
        virtual double operator() (const UnivariateData& df, const bool& na_omit=true) const;
        virtual double operator() (const Index& i, const Index& j, const Index& k, const Index& l, const MultivariateDataFrame& df, const bool& na_omit=true) const = 0;
    };*/

    /*struct MomentEstimator
    {
        virtual double operator() (const UnivariateData* df, const bool& na_omit=true) const = 0;
        virtual double operator() (const std::array< const UnivariateData*, 2 >& df, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 2 >& df, const std::array<double, 2>& location, const bool& na_omit=true) const = 0;
        virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const std::array<double, 3>& location, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const std::array<double, 3>& location, const std::array<double, 3>& stderror, const bool& na_omit=true) const = 0;
        virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const std::array<double, 4>& location, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const std::array<double, 4>& location, const std::array<double, 4>& stderror, const bool& na_omit=true) const = 0;

        virtual std::unique_ptr< MomentEstimator > copy() const = 0;
    };

    class NaturalMomentEstimator : public MomentEstimator
    {
        public:
            NaturalMomentEstimator(const bool& biased=false);
            NaturalMomentEstimator(const NaturalMomentEstimator& estimator);
            virtual ~NaturalMomentEstimator();

            virtual double operator() (const UnivariateData* df, const bool& na_omit=true) const;
            virtual double operator() (const std::array< const UnivariateData*, 2 >& df, const std::array<double, 2>& location, const bool& na_omit=true) const;
            virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const std::array<double, 3>& location, const std::array<double, 3>& stderror, const bool& na_omit=true) const;
            virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const std::array<double, 4>& location, const std::array<double, 4>& stderror, const bool& na_omit=true) const;

            const bool& get_biased() const;

            virtual std::unique_ptr< MomentEstimator > copy() const;

        protected:
            bool _biased;

            template<class E> double get_value(const UnivariateData* data, const Index& index, const bool& na_omit=true) const;
            template<class E> double get_value(const UnivariateData* data, const Index& index, const double& location, const bool& na_omit=true) const;
            template<class E> double get_value(const UnivariateEvent* event, const double& completion, const bool& na_omit=true) const;
    };*/
}

#endif
