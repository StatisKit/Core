#include "_core.h"

double const & (::statiskit::ElementaryEvent< ::statiskit::ContinuousEvent >::*method_pointer_cf3d3c8e459955608a6e0dbb6112752a)()const= &::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >::get_value;

namespace autowig {
}

void wrapper_9981958281625422b3b46cea8ec85a6d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, autowig::HolderType< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > > class_9981958281625422b3b46cea8ec85a6d(module, "_ElementaryEvent_9981958281625422b3b46cea8ec85a6d", "");
    class_9981958281625422b3b46cea8ec85a6d.def(pybind11::init< double const & >());
    class_9981958281625422b3b46cea8ec85a6d.def(pybind11::init< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > const & >());
    class_9981958281625422b3b46cea8ec85a6d.def("get_value", method_pointer_cf3d3c8e459955608a6e0dbb6112752a, pybind11::return_value_policy::copy, "");

}