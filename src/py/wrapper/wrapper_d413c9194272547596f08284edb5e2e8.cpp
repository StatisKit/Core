#include "_core.h"


namespace autowig {
}

void wrapper_d413c9194272547596f08284edb5e2e8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeMultinomialDistributionEstimation, autowig::HolderType< struct ::statiskit::NegativeMultinomialDistributionEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_d413c9194272547596f08284edb5e2e8(module, "NegativeMultinomialDistributionEstimation", "");
    class_d413c9194272547596f08284edb5e2e8.def(pybind11::init<  >());
    class_d413c9194272547596f08284edb5e2e8.def(pybind11::init< struct ::statiskit::NegativeMultinomialDistributionEstimation const & >());

}