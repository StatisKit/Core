#include "_core.h"


namespace autowig {
}

void wrapper_830457bcfd9a53298ff673c9b6d66714(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > >::Type, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_830457bcfd9a53298ff673c9b6d66714(module, "_PolymorphicCopy_830457bcfd9a53298ff673c9b6d66714", "");
    class_830457bcfd9a53298ff673c9b6d66714.def(pybind11::init<  >());
    class_830457bcfd9a53298ff673c9b6d66714.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > const & >());

}