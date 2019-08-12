#include "_core.h"


namespace autowig {
}

void wrapper_ce18cfe01fe257ccb36fe2b990dde7c3(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeBinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeBinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation > > >::Type, class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation > > class_ce18cfe01fe257ccb36fe2b990dde7c3(module, "_PolymorphicCopy_ce18cfe01fe257ccb36fe2b990dde7c3", "");
    class_ce18cfe01fe257ccb36fe2b990dde7c3.def(pybind11::init<  >());
    class_ce18cfe01fe257ccb36fe2b990dde7c3.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeBinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation > > const & >());

}