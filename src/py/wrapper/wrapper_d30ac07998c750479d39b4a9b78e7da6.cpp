#include "_core.h"


namespace autowig {
}

void wrapper_d30ac07998c750479d39b4a9b78e7da6(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > >::Type, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_d30ac07998c750479d39b4a9b78e7da6(module, "_PolymorphicCopy_d30ac07998c750479d39b4a9b78e7da6", "");
    class_d30ac07998c750479d39b4a9b78e7da6.def(pybind11::init<  >());
    class_d30ac07998c750479d39b4a9b78e7da6.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > const & >());

}