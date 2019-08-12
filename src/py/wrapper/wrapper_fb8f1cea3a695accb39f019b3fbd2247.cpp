#include "_core.h"

int const & (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_8376654e7157578aa3f686833ab27fac)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_lower_bound;
int const & (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_5801af14002b5532ba366122c0678191)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_upper_bound;
int  (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_d7218a6b4e365c178e8a5e168c11181b)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_range;
int  (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_a384afd04e015445bf0fb505549fa4ce)()const= &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_center;

namespace autowig {
}

void wrapper_fb8f1cea3a695accb39f019b3fbd2247(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::HolderType< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > > class_fb8f1cea3a695accb39f019b3fbd2247(module, "_IntervalCensoredEvent_fb8f1cea3a695accb39f019b3fbd2247", "");
    class_fb8f1cea3a695accb39f019b3fbd2247.def(pybind11::init< int const &, int const & >());
    class_fb8f1cea3a695accb39f019b3fbd2247.def(pybind11::init< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > const & >());
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_lower_bound", method_pointer_8376654e7157578aa3f686833ab27fac, pybind11::return_value_policy::copy, "");
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_upper_bound", method_pointer_5801af14002b5532ba366122c0678191, pybind11::return_value_policy::copy, "");
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_range", method_pointer_d7218a6b4e365c178e8a5e168c11181b, "");
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_center", method_pointer_a384afd04e015445bf0fb505549fa4ce, "");

}