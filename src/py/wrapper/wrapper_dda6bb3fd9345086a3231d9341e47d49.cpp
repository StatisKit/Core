#include "_core.h"

bool  (::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::*method_pointer_a6fb931b41ac5f978452c410417353b9)()const= &::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::get_force;
void  (::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::*method_pointer_ec4990a415a85002ae172a7815ca1ea3)(bool const &)= &::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::set_force;

namespace autowig {
}

void wrapper_dda6bb3fd9345086a3231d9341e47d49(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator, autowig::HolderType< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator > > > class_dda6bb3fd9345086a3231d9341e47d49(module, "Estimator", "");
    class_dda6bb3fd9345086a3231d9341e47d49.def(pybind11::init<  >());
    class_dda6bb3fd9345086a3231d9341e47d49.def(pybind11::init< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const & >());
    class_dda6bb3fd9345086a3231d9341e47d49.def("get_force", method_pointer_a6fb931b41ac5f978452c410417353b9, "");
    class_dda6bb3fd9345086a3231d9341e47d49.def("set_force", method_pointer_ec4990a415a85002ae172a7815ca1ea3, "");

}