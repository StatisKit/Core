#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_71757dc3f0865ab2886df4e8e648078e)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_e871f87647855e4095bb3a8f1d0e84ad)(enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_25eae0dfd4e1524abc8ca1ad59610105(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > class_25eae0dfd4e1524abc8ca1ad59610105(module, "CriterionEstimator", "");
    class_25eae0dfd4e1524abc8ca1ad59610105.def(pybind11::init<  >());
    class_25eae0dfd4e1524abc8ca1ad59610105.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator const & >());
    class_25eae0dfd4e1524abc8ca1ad59610105.def("get_criterion", method_pointer_71757dc3f0865ab2886df4e8e648078e, pybind11::return_value_policy::copy, "");
    class_25eae0dfd4e1524abc8ca1ad59610105.def("set_criterion", method_pointer_e871f87647855e4095bb3a8f1d0e84ad, "");

}