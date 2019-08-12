#include "_core.h"


namespace autowig {
}

void wrapper_43ff7c79dcd15ad9995fd0d0ccc6d440(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::MultivariateDistributionEstimation >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > class_43ff7c79dcd15ad9995fd0d0ccc6d440(module, "MultivariateDistributionEstimation", "");
    class_43ff7c79dcd15ad9995fd0d0ccc6d440.def(pybind11::init<  >());
    class_43ff7c79dcd15ad9995fd0d0ccc6d440.def(pybind11::init< struct ::statiskit::MultivariateDistributionEstimation const & >());

}