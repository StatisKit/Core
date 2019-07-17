#include "_core.h"


namespace autowig {
}

void wrapper_f13beb88f0a956f5bc0cd7245bbd4b1c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousUnivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type, struct ::statiskit::UnivariateDistributionEstimation > class_f13beb88f0a956f5bc0cd7245bbd4b1c(module, "ContinuousUnivariateDistributionEstimation", "");
    class_f13beb88f0a956f5bc0cd7245bbd4b1c.def(pybind11::init<  >());
    class_f13beb88f0a956f5bc0cd7245bbd4b1c.def(pybind11::init< struct ::statiskit::ContinuousUnivariateDistributionEstimation const & >());

}