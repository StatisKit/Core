#include "_core.h"

double const & (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_9a8b6edb1f21504f9f2680be39fdd1fb)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_lower_bound;
double const & (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_dbd5603d435f5066a09971ca1c7617a1)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_upper_bound;
double  (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_793dc5df0a22533e88ca8334e32dc15d)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_range;
double  (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_2f4770a16d775822b7250bbff78761f3)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_center;

namespace autowig {
}

void wrapper_a766c9930af25f8f90f6e118f2ca75d5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::HolderType< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > > class_a766c9930af25f8f90f6e118f2ca75d5(module, "_IntervalCensoredEvent_a766c9930af25f8f90f6e118f2ca75d5", "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def(pybind11::init< double const &, double const & >());
    class_a766c9930af25f8f90f6e118f2ca75d5.def(pybind11::init< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > const & >());
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_lower_bound", method_pointer_9a8b6edb1f21504f9f2680be39fdd1fb, pybind11::return_value_policy::copy, "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_upper_bound", method_pointer_dbd5603d435f5066a09971ca1c7617a1, pybind11::return_value_policy::copy, "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_range", method_pointer_793dc5df0a22533e88ca8334e32dc15d, "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_center", method_pointer_2f4770a16d775822b7250bbff78761f3, "");

}