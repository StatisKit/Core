#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_70e1e3815b605a349e0788f7adf50a7b)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_6010faf121b7514fbe9d0374f4060785)(enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_4752abe84a84542f838662fe8e94f937(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > > class_4752abe84a84542f838662fe8e94f937(module, "CriterionEstimator", "");
    class_4752abe84a84542f838662fe8e94f937.def(pybind11::init<  >());
    class_4752abe84a84542f838662fe8e94f937.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator const & >());
    class_4752abe84a84542f838662fe8e94f937.def("get_criterion", method_pointer_70e1e3815b605a349e0788f7adf50a7b, pybind11::return_value_policy::copy, "");
    class_4752abe84a84542f838662fe8e94f937.def("set_criterion", method_pointer_6010faf121b7514fbe9d0374f4060785, "");

}