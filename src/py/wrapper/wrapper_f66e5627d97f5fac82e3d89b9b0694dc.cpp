#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< double, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_5707d7a558215b39922ed84f8e706100)()const= &::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::size;
double const (::statiskit::IterativeEstimation< double, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_6e479df71da25de293b13d39fddb9df4)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::at_step;

namespace autowig {
}

void wrapper_f66e5627d97f5fac82e3d89b9b0694dc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteMultivariateDistributionEstimation > class_f66e5627d97f5fac82e3d89b9b0694dc(module, "_IterativeEstimation_f66e5627d97f5fac82e3d89b9b0694dc", "");
    class_f66e5627d97f5fac82e3d89b9b0694dc.def(pybind11::init< class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_f66e5627d97f5fac82e3d89b9b0694dc.def("__len__", method_pointer_5707d7a558215b39922ed84f8e706100, "");
    class_f66e5627d97f5fac82e3d89b9b0694dc.def("at_step", method_pointer_6e479df71da25de293b13d39fddb9df4, "");

}