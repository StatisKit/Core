#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_fa888e093c6457c3ac70412cd351e9bc)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::size;
struct ::statiskit::CategoricalUnivariateDistributionEstimation * const (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_1d464337527a5762a32243cb16cdfbe0)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_ea87ff5906385cc3b2c924cc4e95992e)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_180294e9e19355e187edd0ed7cb54375(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_180294e9e19355e187edd0ed7cb54375(module, "_Selection_180294e9e19355e187edd0ed7cb54375", "");
    class_180294e9e19355e187edd0ed7cb54375.def(pybind11::init<  >());
    class_180294e9e19355e187edd0ed7cb54375.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_180294e9e19355e187edd0ed7cb54375.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_180294e9e19355e187edd0ed7cb54375.def("__len__", method_pointer_fa888e093c6457c3ac70412cd351e9bc, "");
    class_180294e9e19355e187edd0ed7cb54375.def("get_estimation", method_pointer_1d464337527a5762a32243cb16cdfbe0, pybind11::return_value_policy::reference_internal, "");
    class_180294e9e19355e187edd0ed7cb54375.def("get_score", method_pointer_ea87ff5906385cc3b2c924cc4e95992e, pybind11::return_value_policy::copy, "");

}