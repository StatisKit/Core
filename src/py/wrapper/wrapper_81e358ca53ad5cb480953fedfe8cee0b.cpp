#include "_core.h"


namespace autowig {
}

void wrapper_81e358ca53ad5cb480953fedfe8cee0b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeBinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeBinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > >::Type, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_81e358ca53ad5cb480953fedfe8cee0b(module, "_PolymorphicCopy_81e358ca53ad5cb480953fedfe8cee0b", "");
    class_81e358ca53ad5cb480953fedfe8cee0b.def(pybind11::init<  >());
    class_81e358ca53ad5cb480953fedfe8cee0b.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeBinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > const & >());

}