#include "_core.h"


namespace autowig {
}

void wrapper_123015a4593a5cdeae51e1c3cf5f2cbf(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::BinomialDistributionEstimation, autowig::HolderType< struct ::statiskit::BinomialDistributionEstimation >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_123015a4593a5cdeae51e1c3cf5f2cbf(module, "BinomialDistributionEstimation", "");
    class_123015a4593a5cdeae51e1c3cf5f2cbf.def(pybind11::init<  >());
    class_123015a4593a5cdeae51e1c3cf5f2cbf.def(pybind11::init< struct ::statiskit::BinomialDistributionEstimation const & >());

}