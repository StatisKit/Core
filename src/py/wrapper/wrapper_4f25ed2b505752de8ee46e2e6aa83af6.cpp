#include "_core.h"

double const & (::statiskit::RightCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_9aeec676e8e858f98c653f9ad009e3bd)()const= &::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >::get_lower_bound;

namespace autowig {
}

void wrapper_4f25ed2b505752de8ee46e2e6aa83af6(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::HolderType< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > > class_4f25ed2b505752de8ee46e2e6aa83af6(module, "_RightCensoredEvent_4f25ed2b505752de8ee46e2e6aa83af6", "");
    class_4f25ed2b505752de8ee46e2e6aa83af6.def(pybind11::init< double const & >());
    class_4f25ed2b505752de8ee46e2e6aa83af6.def(pybind11::init< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > const & >());
    class_4f25ed2b505752de8ee46e2e6aa83af6.def("get_lower_bound", method_pointer_9aeec676e8e858f98c653f9ad009e3bd, pybind11::return_value_policy::copy, "");

}