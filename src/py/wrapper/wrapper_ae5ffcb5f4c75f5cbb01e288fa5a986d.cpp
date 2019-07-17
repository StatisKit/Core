#include "_core.h"


namespace autowig {
}

void wrapper_ae5ffcb5f4c75f5cbb01e288fa5a986d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteUnivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type, struct ::statiskit::UnivariateDistributionEstimation > class_ae5ffcb5f4c75f5cbb01e288fa5a986d(module, "DiscreteUnivariateDistributionEstimation", "");
    class_ae5ffcb5f4c75f5cbb01e288fa5a986d.def(pybind11::init<  >());
    class_ae5ffcb5f4c75f5cbb01e288fa5a986d.def(pybind11::init< struct ::statiskit::DiscreteUnivariateDistributionEstimation const & >());

}