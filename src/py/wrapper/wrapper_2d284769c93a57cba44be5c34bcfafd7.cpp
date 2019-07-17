#include "_core.h"


namespace autowig {
}

void wrapper_2d284769c93a57cba44be5c34bcfafd7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_2d284769c93a57cba44be5c34bcfafd7(module, "_UnivariateFrequencyDistributionEstimation_2d284769c93a57cba44be5c34bcfafd7", "");
    class_2d284769c93a57cba44be5c34bcfafd7.def(pybind11::init<  >());
    class_2d284769c93a57cba44be5c34bcfafd7.def(pybind11::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}