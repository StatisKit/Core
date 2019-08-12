#include "_core.h"


namespace autowig {
}

void wrapper_0058099900c95ba8ad1d37fa19e8891f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation, autowig::HolderType< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeMultinomialDistributionEstimation > > > class_0058099900c95ba8ad1d37fa19e8891f(module, "NegativeMultinomialDistributionWZ99Estimation", "");
    class_0058099900c95ba8ad1d37fa19e8891f.def(pybind11::init<  >());
    class_0058099900c95ba8ad1d37fa19e8891f.def(pybind11::init< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation const & >());

}