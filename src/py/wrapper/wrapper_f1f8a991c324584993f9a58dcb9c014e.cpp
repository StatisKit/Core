#include "_core.h"


namespace autowig {
}

void wrapper_f1f8a991c324584993f9a58dcb9c014e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousMultivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Type, struct ::statiskit::MultivariateDistributionEstimation > class_f1f8a991c324584993f9a58dcb9c014e(module, "ContinuousMultivariateDistributionEstimation", "");
    class_f1f8a991c324584993f9a58dcb9c014e.def(pybind11::init<  >());
    class_f1f8a991c324584993f9a58dcb9c014e.def(pybind11::init< struct ::statiskit::ContinuousMultivariateDistributionEstimation const & >());

}