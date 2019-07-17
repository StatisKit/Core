#include "_core.h"

double const & (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_d31c0f8ae5c6576ab7341adafae58204)()const= &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_shift;
void  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_3829f8cabc7a5081ba815a079cec005a)(double const &)= &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_shift;
struct ::statiskit::ContinuousUnivariateDistribution const * (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_eb0fdbe131005691a64c86bae8006d56)()const= &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_distribution;
void  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_9ca523943e8652e0a38ae46c2875b593)(struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_distribution;

namespace autowig {
}

void wrapper_36adf88112dd5312b6c5fe75ebbc5559(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::HolderType< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistribution > > class_36adf88112dd5312b6c5fe75ebbc5559(module, "_ShiftedDistribution_36adf88112dd5312b6c5fe75ebbc5559", "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def(pybind11::init< struct ::statiskit::ContinuousUnivariateDistribution const &, double const & >());
    class_36adf88112dd5312b6c5fe75ebbc5559.def(pybind11::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const & >());
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_shift", method_pointer_d31c0f8ae5c6576ab7341adafae58204, pybind11::return_value_policy::copy, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("set_shift", method_pointer_3829f8cabc7a5081ba815a079cec005a, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_distribution", method_pointer_eb0fdbe131005691a64c86bae8006d56, pybind11::return_value_policy::reference_internal, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("set_distribution", method_pointer_9ca523943e8652e0a38ae46c2875b593, "");

}