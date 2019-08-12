#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator, ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator, ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_171594468546584aa9e0715c04238dd6;
            typedef struct ::statiskit::MultivariateData const & param_171594468546584aa9e0715c04238dd6_0_type;
            typedef class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & param_171594468546584aa9e0715c04238dd6_1_type;
            virtual return_type_171594468546584aa9e0715c04238dd6 operator()(param_171594468546584aa9e0715c04238dd6_0_type param_0, param_171594468546584aa9e0715c04238dd6_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_171594468546584aa9e0715c04238dd6, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_48dd0f6ecf7e535bb0532e174797e614;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::data_type const & param_48dd0f6ecf7e535bb0532e174797e614_0_type;
            virtual return_type_48dd0f6ecf7e535bb0532e174797e614 operator()(param_48dd0f6ecf7e535bb0532e174797e614_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48dd0f6ecf7e535bb0532e174797e614, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_4f57d631afda50d08d8ab83ad3f246f4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > > >::Type, class ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > > class_4f57d631afda50d08d8ab83ad3f246f4(module, "_PolymorphicCopy_4f57d631afda50d08d8ab83ad3f246f4", "");
    class_4f57d631afda50d08d8ab83ad3f246f4.def(pybind11::init<  >());

}