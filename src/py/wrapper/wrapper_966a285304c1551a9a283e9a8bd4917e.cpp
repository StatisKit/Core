#include "_core.h"

int  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_0d55c01b2eec5f748231ef290dc05d5c)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_shift;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_cd935413479b521f848b79af8b07372e)(int const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_shift;
::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::estimator_type const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_ae163cd6a1e4577f9b23e1b3a41103c0)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_c95e6c176cdd5134933d0001a4221b85)(::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::estimator_type const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;

namespace autowig {
}

void wrapper_966a285304c1551a9a283e9a8bd4917e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::HolderType< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_966a285304c1551a9a283e9a8bd4917e(module, "Estimator", "");
    class_966a285304c1551a9a283e9a8bd4917e.def(pybind11::init<  >());
    class_966a285304c1551a9a283e9a8bd4917e.def(pybind11::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const & >());
    class_966a285304c1551a9a283e9a8bd4917e.def("get_shift", method_pointer_0d55c01b2eec5f748231ef290dc05d5c, "");
    class_966a285304c1551a9a283e9a8bd4917e.def("set_shift", method_pointer_cd935413479b521f848b79af8b07372e, "");
    class_966a285304c1551a9a283e9a8bd4917e.def("get_estimator", method_pointer_ae163cd6a1e4577f9b23e1b3a41103c0, pybind11::return_value_policy::reference_internal, "");
    class_966a285304c1551a9a283e9a8bd4917e.def("set_estimator", method_pointer_c95e6c176cdd5134933d0001a4221b85, "");

}