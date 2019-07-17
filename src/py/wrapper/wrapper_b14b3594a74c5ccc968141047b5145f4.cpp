#include "_core.h"


namespace autowig {
}

void wrapper_b14b3594a74c5ccc968141047b5145f4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteMultivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type, struct ::statiskit::MultivariateDistributionEstimation > class_b14b3594a74c5ccc968141047b5145f4(module, "DiscreteMultivariateDistributionEstimation", "");
    class_b14b3594a74c5ccc968141047b5145f4.def(pybind11::init<  >());
    class_b14b3594a74c5ccc968141047b5145f4.def(pybind11::init< struct ::statiskit::DiscreteMultivariateDistributionEstimation const & >());

}