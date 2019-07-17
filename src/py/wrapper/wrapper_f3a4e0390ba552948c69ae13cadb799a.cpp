#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_1b58fb67872859e3906ec2e648200d3c;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::data_type const & param_1b58fb67872859e3906ec2e648200d3c_0_type;
            virtual return_type_1b58fb67872859e3906ec2e648200d3c operator()(param_1b58fb67872859e3906ec2e648200d3c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_1b58fb67872859e3906ec2e648200d3c, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_f3a4e0390ba552948c69ae13cadb799a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > class_f3a4e0390ba552948c69ae13cadb799a(module, "_PolymorphicCopy_f3a4e0390ba552948c69ae13cadb799a", "");
    class_f3a4e0390ba552948c69ae13cadb799a.def(pybind11::init<  >());

}