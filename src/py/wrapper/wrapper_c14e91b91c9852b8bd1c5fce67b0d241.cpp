#include "_core.h"

enum ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::CriterionEstimator::*method_pointer_b44ef74eea0156c2a9e658dcd1081763)()const= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::CriterionEstimator::*method_pointer_ecc46aaf5a885e4588963ddadae0464a)(enum ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_c14e91b91c9852b8bd1c5fce67b0d241(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator > > class_c14e91b91c9852b8bd1c5fce67b0d241(module, "CriterionEstimator", "");
    class_c14e91b91c9852b8bd1c5fce67b0d241.def(pybind11::init<  >());
    class_c14e91b91c9852b8bd1c5fce67b0d241.def(pybind11::init< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator const & >());
    class_c14e91b91c9852b8bd1c5fce67b0d241.def("get_criterion", method_pointer_b44ef74eea0156c2a9e658dcd1081763, pybind11::return_value_policy::copy, "");
    class_c14e91b91c9852b8bd1c5fce67b0d241.def("set_criterion", method_pointer_ecc46aaf5a885e4588963ddadae0464a, "");

}