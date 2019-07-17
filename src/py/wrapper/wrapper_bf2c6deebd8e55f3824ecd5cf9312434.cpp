#include "_core.h"


namespace autowig {
}

void wrapper_bf2c6deebd8e55f3824ecd5cf9312434(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateConditionalDistributionEstimation, autowig::HolderType< struct ::statiskit::UnivariateConditionalDistributionEstimation >::Type, class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > > class_bf2c6deebd8e55f3824ecd5cf9312434(module, "UnivariateConditionalDistributionEstimation", "");
    class_bf2c6deebd8e55f3824ecd5cf9312434.def(pybind11::init<  >());
    class_bf2c6deebd8e55f3824ecd5cf9312434.def(pybind11::init< struct ::statiskit::UnivariateConditionalDistributionEstimation const & >());

}