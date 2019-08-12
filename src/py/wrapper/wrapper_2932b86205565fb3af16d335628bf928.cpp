#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_e7ef626f3bd9559c819dda5c5cecd4d5)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_335e6aec934954d9999acbe40652dd57)(enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_2932b86205565fb3af16d335628bf928(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > > class_2932b86205565fb3af16d335628bf928(module, "CriterionEstimator", "");
    class_2932b86205565fb3af16d335628bf928.def(pybind11::init<  >());
    class_2932b86205565fb3af16d335628bf928.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator const & >());
    class_2932b86205565fb3af16d335628bf928.def("get_criterion", method_pointer_e7ef626f3bd9559c819dda5c5cecd4d5, pybind11::return_value_policy::copy, "");
    class_2932b86205565fb3af16d335628bf928.def("set_criterion", method_pointer_335e6aec934954d9999acbe40652dd57, "");

}