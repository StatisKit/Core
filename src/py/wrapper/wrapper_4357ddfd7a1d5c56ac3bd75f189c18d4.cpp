#include "_core.h"


namespace autowig {
}

void wrapper_4357ddfd7a1d5c56ac3bd75f189c18d4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeBinomialDistributionEstimation, autowig::HolderType< struct ::statiskit::NegativeBinomialDistributionEstimation >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_4357ddfd7a1d5c56ac3bd75f189c18d4(module, "NegativeBinomialDistributionEstimation", "");
    class_4357ddfd7a1d5c56ac3bd75f189c18d4.def(pybind11::init<  >());
    class_4357ddfd7a1d5c56ac3bd75f189c18d4.def(pybind11::init< struct ::statiskit::NegativeBinomialDistributionEstimation const & >());

}