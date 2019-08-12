#include "_core.h"


namespace autowig {
}

void wrapper_b533e621f4b85d2f83f733680ab3b563(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::LogarithmicDistributionEstimation, autowig::HolderType< struct ::statiskit::LogarithmicDistributionEstimation >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_b533e621f4b85d2f83f733680ab3b563(module, "LogarithmicDistributionEstimation", "");
    class_b533e621f4b85d2f83f733680ab3b563.def(pybind11::init<  >());
    class_b533e621f4b85d2f83f733680ab3b563.def(pybind11::init< struct ::statiskit::LogarithmicDistributionEstimation const & >());

}