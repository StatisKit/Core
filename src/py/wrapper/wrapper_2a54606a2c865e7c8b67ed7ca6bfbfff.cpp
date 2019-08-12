#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_914244ac0c865c3488e836097d346f93)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_023ffbac05b25082b02be236c687ef43)(enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_2a54606a2c865e7c8b67ed7ca6bfbfff(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > > class_2a54606a2c865e7c8b67ed7ca6bfbfff(module, "CriterionEstimator", "");
    class_2a54606a2c865e7c8b67ed7ca6bfbfff.def(pybind11::init<  >());
    class_2a54606a2c865e7c8b67ed7ca6bfbfff.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const & >());
    class_2a54606a2c865e7c8b67ed7ca6bfbfff.def("get_criterion", method_pointer_914244ac0c865c3488e836097d346f93, pybind11::return_value_policy::copy, "");
    class_2a54606a2c865e7c8b67ed7ca6bfbfff.def("set_criterion", method_pointer_023ffbac05b25082b02be236c687ef43, "");

}