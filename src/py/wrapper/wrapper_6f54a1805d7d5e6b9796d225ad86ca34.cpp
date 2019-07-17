#include "_core.h"

::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::data_type const * (::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::*method_pointer_8300865ac1645fa39dcee8a5ab8d600f)()const= &::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::get_data;
::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::distribution_type const * (::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::*method_pointer_4372f251e6ca5621b45002541872f846)()const= &::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::get_distribution;
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::*method_pointer_9005909659fe5420ac3457068040454b)()const= &::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::copy;

namespace autowig {
}

void wrapper_6f54a1805d7d5e6b9796d225ad86ca34(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, autowig::HolderType< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > >::Type > class_6f54a1805d7d5e6b9796d225ad86ca34(module, "_DistributionEstimation_6f54a1805d7d5e6b9796d225ad86ca34", "");
    class_6f54a1805d7d5e6b9796d225ad86ca34.def(pybind11::init<  >());
    class_6f54a1805d7d5e6b9796d225ad86ca34.def(pybind11::init< ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::data_type const *, ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::distribution_type const * >());
    class_6f54a1805d7d5e6b9796d225ad86ca34.def(pybind11::init< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > const & >());
    class_6f54a1805d7d5e6b9796d225ad86ca34.def("get_data", method_pointer_8300865ac1645fa39dcee8a5ab8d600f, pybind11::return_value_policy::reference_internal, "");
    class_6f54a1805d7d5e6b9796d225ad86ca34.def("get_distribution", method_pointer_4372f251e6ca5621b45002541872f846, pybind11::return_value_policy::reference_internal, "");
    class_6f54a1805d7d5e6b9796d225ad86ca34.def("copy", method_pointer_9005909659fe5420ac3457068040454b, "");

}