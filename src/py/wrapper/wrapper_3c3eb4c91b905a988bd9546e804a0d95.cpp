#include "_core.h"

bool  (::statiskit::BinomialDistributionMLEstimation::Estimator::*method_pointer_b9c9fe80edb7575c9c4761d2675e9723)()const= &::statiskit::BinomialDistributionMLEstimation::Estimator::get_force;
void  (::statiskit::BinomialDistributionMLEstimation::Estimator::*method_pointer_23f661468c525bc296871ebdc4bd363c)(bool const &)= &::statiskit::BinomialDistributionMLEstimation::Estimator::set_force;

namespace autowig {
}

void wrapper_3c3eb4c91b905a988bd9546e804a0d95(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::BinomialDistributionMLEstimation::Estimator, autowig::HolderType< class ::statiskit::BinomialDistributionMLEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::BinomialDistributionMLEstimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator > > > class_3c3eb4c91b905a988bd9546e804a0d95(module, "Estimator", "");
    class_3c3eb4c91b905a988bd9546e804a0d95.def(pybind11::init<  >());
    class_3c3eb4c91b905a988bd9546e804a0d95.def(pybind11::init< class ::statiskit::BinomialDistributionMLEstimation::Estimator const & >());
    class_3c3eb4c91b905a988bd9546e804a0d95.def("get_force", method_pointer_b9c9fe80edb7575c9c4761d2675e9723, "");
    class_3c3eb4c91b905a988bd9546e804a0d95.def("set_force", method_pointer_23f661468c525bc296871ebdc4bd363c, "");

}