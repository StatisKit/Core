#include "_core.h"


namespace autowig {
}

void wrapper_a640206684935d01aa5be922b3bbdf00(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::BinomialDistributionMLEstimation, autowig::HolderType< struct ::statiskit::BinomialDistributionMLEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_a640206684935d01aa5be922b3bbdf00(module, "BinomialDistributionMLEstimation", "");
    class_a640206684935d01aa5be922b3bbdf00.def(pybind11::init<  >());
    class_a640206684935d01aa5be922b3bbdf00.def(pybind11::init< struct ::statiskit::BinomialDistributionMLEstimation const & >());

}