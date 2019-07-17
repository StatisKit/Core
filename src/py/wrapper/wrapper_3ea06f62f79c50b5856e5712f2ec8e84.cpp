#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< double, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_bff5a16402e25803b812cbe08e5c15be)()const= &::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;
double const (::statiskit::IterativeEstimation< double, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_cd024860cb895bc5b0f984a3868f92ff)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::at_step;

namespace autowig {
}

void wrapper_3ea06f62f79c50b5856e5712f2ec8e84(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_3ea06f62f79c50b5856e5712f2ec8e84(module, "_IterativeEstimation_3ea06f62f79c50b5856e5712f2ec8e84", "");
    class_3ea06f62f79c50b5856e5712f2ec8e84.def(pybind11::init< class ::statiskit::IterativeEstimation< double, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_3ea06f62f79c50b5856e5712f2ec8e84.def("__len__", method_pointer_bff5a16402e25803b812cbe08e5c15be, "");
    class_3ea06f62f79c50b5856e5712f2ec8e84.def("at_step", method_pointer_cd024860cb895bc5b0f984a3868f92ff, "");

}