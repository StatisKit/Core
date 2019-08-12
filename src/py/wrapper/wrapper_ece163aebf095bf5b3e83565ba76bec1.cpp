#include "_core.h"


namespace autowig {
}

void wrapper_ece163aebf095bf5b3e83565ba76bec1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_ece163aebf095bf5b3e83565ba76bec1(module, "_ShiftedDistributionEstimation_ece163aebf095bf5b3e83565ba76bec1", "");
    class_ece163aebf095bf5b3e83565ba76bec1.def(pybind11::init<  >());
    class_ece163aebf095bf5b3e83565ba76bec1.def(pybind11::init< struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}