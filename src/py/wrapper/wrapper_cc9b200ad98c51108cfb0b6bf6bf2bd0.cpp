#include "_core.h"


namespace autowig {
}

void wrapper_cc9b200ad98c51108cfb0b6bf6bf2bd0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeBinomialDistributionMMEstimation, autowig::HolderType< struct ::statiskit::NegativeBinomialDistributionMMEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMMEstimation, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_cc9b200ad98c51108cfb0b6bf6bf2bd0(module, "NegativeBinomialDistributionMMEstimation", "");
    class_cc9b200ad98c51108cfb0b6bf6bf2bd0.def(pybind11::init<  >());
    class_cc9b200ad98c51108cfb0b6bf6bf2bd0.def(pybind11::init< struct ::statiskit::NegativeBinomialDistributionMMEstimation const & >());

}