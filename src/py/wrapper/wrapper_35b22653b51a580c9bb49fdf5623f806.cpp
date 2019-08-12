#include "_core.h"


namespace autowig {
}

void wrapper_35b22653b51a580c9bb49fdf5623f806(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PoissonDistributionEstimation, autowig::HolderType< struct ::statiskit::PoissonDistributionEstimation >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_35b22653b51a580c9bb49fdf5623f806(module, "PoissonDistributionEstimation", "");
    class_35b22653b51a580c9bb49fdf5623f806.def(pybind11::init<  >());
    class_35b22653b51a580c9bb49fdf5623f806.def(pybind11::init< struct ::statiskit::PoissonDistributionEstimation const & >());

}