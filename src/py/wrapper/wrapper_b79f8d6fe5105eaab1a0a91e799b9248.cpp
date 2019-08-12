#include "_core.h"


namespace autowig {
}

void wrapper_b79f8d6fe5105eaab1a0a91e799b9248(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::GeometricDistributionEstimation, autowig::HolderType< struct ::statiskit::GeometricDistributionEstimation >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_b79f8d6fe5105eaab1a0a91e799b9248(module, "GeometricDistributionEstimation", "");
    class_b79f8d6fe5105eaab1a0a91e799b9248.def(pybind11::init<  >());
    class_b79f8d6fe5105eaab1a0a91e799b9248.def(pybind11::init< struct ::statiskit::GeometricDistributionEstimation const & >());

}