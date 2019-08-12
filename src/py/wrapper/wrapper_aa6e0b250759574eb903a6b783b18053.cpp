#include "_core.h"

double const & (::statiskit::LeftCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_13a2fa63820b597ab14a608d2f621651)()const= &::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >::get_upper_bound;

namespace autowig {
}

void wrapper_aa6e0b250759574eb903a6b783b18053(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::HolderType< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > > class_aa6e0b250759574eb903a6b783b18053(module, "_LeftCensoredEvent_aa6e0b250759574eb903a6b783b18053", "");
    class_aa6e0b250759574eb903a6b783b18053.def(pybind11::init< double const & >());
    class_aa6e0b250759574eb903a6b783b18053.def(pybind11::init< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const & >());
    class_aa6e0b250759574eb903a6b783b18053.def("get_upper_bound", method_pointer_13a2fa63820b597ab14a608d2f621651, pybind11::return_value_policy::copy, "");

}