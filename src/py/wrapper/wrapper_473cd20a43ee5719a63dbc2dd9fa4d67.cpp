#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_5a1078c41eb35e27829c3455314ed0f1)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_caa454955c0e55dfbcb9fed000d64ee4)(enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_473cd20a43ee5719a63dbc2dd9fa4d67(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > > class_473cd20a43ee5719a63dbc2dd9fa4d67(module, "CriterionEstimator", "");
    class_473cd20a43ee5719a63dbc2dd9fa4d67.def(pybind11::init<  >());
    class_473cd20a43ee5719a63dbc2dd9fa4d67.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator const & >());
    class_473cd20a43ee5719a63dbc2dd9fa4d67.def("get_criterion", method_pointer_5a1078c41eb35e27829c3455314ed0f1, pybind11::return_value_policy::copy, "");
    class_473cd20a43ee5719a63dbc2dd9fa4d67.def("set_criterion", method_pointer_caa454955c0e55dfbcb9fed000d64ee4, "");

}