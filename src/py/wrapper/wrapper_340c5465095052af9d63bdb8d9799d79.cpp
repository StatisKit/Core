#include "_core.h"


namespace autowig {
}

void wrapper_340c5465095052af9d63bdb8d9799d79(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::UnivariateDistributionEstimation >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > class_340c5465095052af9d63bdb8d9799d79(module, "UnivariateDistributionEstimation", "");
    class_340c5465095052af9d63bdb8d9799d79.def(pybind11::init<  >());
    class_340c5465095052af9d63bdb8d9799d79.def(pybind11::init< struct ::statiskit::UnivariateDistributionEstimation const & >());

}