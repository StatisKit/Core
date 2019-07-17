#include "_core.h"

int const & (::statiskit::RightCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_5bcc777112bb51c6833c3818579eae45)()const= &::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >::get_lower_bound;

namespace autowig {
}

void wrapper_1ec5dee4e7cb5437b83047021c0ca63f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::HolderType< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > > class_1ec5dee4e7cb5437b83047021c0ca63f(module, "_RightCensoredEvent_1ec5dee4e7cb5437b83047021c0ca63f", "");
    class_1ec5dee4e7cb5437b83047021c0ca63f.def(pybind11::init< int const & >());
    class_1ec5dee4e7cb5437b83047021c0ca63f.def(pybind11::init< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > const & >());
    class_1ec5dee4e7cb5437b83047021c0ca63f.def("get_lower_bound", method_pointer_5bcc777112bb51c6833c3818579eae45, pybind11::return_value_policy::copy, "");

}