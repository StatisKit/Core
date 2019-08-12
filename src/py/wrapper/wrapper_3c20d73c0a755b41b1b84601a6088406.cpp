#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_e434bf925a8b5a578c9ddbdeb918dbaf)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_36cd152334675ce8b92ebc79c6e6e0bf)(enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_3c20d73c0a755b41b1b84601a6088406(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > > class_3c20d73c0a755b41b1b84601a6088406(module, "CriterionEstimator", "");
    class_3c20d73c0a755b41b1b84601a6088406.def(pybind11::init<  >());
    class_3c20d73c0a755b41b1b84601a6088406.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator const & >());
    class_3c20d73c0a755b41b1b84601a6088406.def("get_criterion", method_pointer_e434bf925a8b5a578c9ddbdeb918dbaf, pybind11::return_value_policy::copy, "");
    class_3c20d73c0a755b41b1b84601a6088406.def("set_criterion", method_pointer_36cd152334675ce8b92ebc79c6e6e0bf, "");

}