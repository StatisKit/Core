#include "_core.h"


namespace autowig {
}

void wrapper_f09c97b097575bf2b4af254e6faa082c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalMultivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type, struct ::statiskit::MultivariateDistributionEstimation > class_f09c97b097575bf2b4af254e6faa082c(module, "CategoricalMultivariateDistributionEstimation", "");
    class_f09c97b097575bf2b4af254e6faa082c.def(pybind11::init<  >());
    class_f09c97b097575bf2b4af254e6faa082c.def(pybind11::init< struct ::statiskit::CategoricalMultivariateDistributionEstimation const & >());

}