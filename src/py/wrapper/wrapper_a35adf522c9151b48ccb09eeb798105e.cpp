#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_489fde90f4035ce495a871ab8a4369a3)()const= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_a8740975ddc258f39298b5800b2a684c)(enum ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_a35adf522c9151b48ccb09eeb798105e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator > > class_a35adf522c9151b48ccb09eeb798105e(module, "CriterionEstimator", "");
    class_a35adf522c9151b48ccb09eeb798105e.def(pybind11::init<  >());
    class_a35adf522c9151b48ccb09eeb798105e.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const & >());
    class_a35adf522c9151b48ccb09eeb798105e.def("get_criterion", method_pointer_489fde90f4035ce495a871ab8a4369a3, pybind11::return_value_policy::copy, "");
    class_a35adf522c9151b48ccb09eeb798105e.def("set_criterion", method_pointer_a8740975ddc258f39298b5800b2a684c, "");

}