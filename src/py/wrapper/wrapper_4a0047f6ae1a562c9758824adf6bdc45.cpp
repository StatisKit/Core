#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_9af191b5983e5312b89d8b7f081446eb)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::size;
struct ::statiskit::DiscreteMultivariateDistributionEstimation * const (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_8479c4be56755909b283bc3502a85a3e)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_96a916120a595b8c8989119023878f20)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_4a0047f6ae1a562c9758824adf6bdc45(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_4a0047f6ae1a562c9758824adf6bdc45(module, "_Selection_4a0047f6ae1a562c9758824adf6bdc45", "");
    class_4a0047f6ae1a562c9758824adf6bdc45.def(pybind11::init<  >());
    class_4a0047f6ae1a562c9758824adf6bdc45.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_4a0047f6ae1a562c9758824adf6bdc45.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_4a0047f6ae1a562c9758824adf6bdc45.def("__len__", method_pointer_9af191b5983e5312b89d8b7f081446eb, "");
    class_4a0047f6ae1a562c9758824adf6bdc45.def("get_estimation", method_pointer_8479c4be56755909b283bc3502a85a3e, pybind11::return_value_policy::reference_internal, "");
    class_4a0047f6ae1a562c9758824adf6bdc45.def("get_score", method_pointer_96a916120a595b8c8989119023878f20, pybind11::return_value_policy::copy, "");

}