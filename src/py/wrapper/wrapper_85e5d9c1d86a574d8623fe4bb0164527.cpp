#include "_core.h"

int const & (::statiskit::ElementaryEvent< ::statiskit::DiscreteEvent >::*method_pointer_2a3a0db3adea56158741771284715f12)()const= &::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent >::get_value;

namespace autowig {
}

void wrapper_85e5d9c1d86a574d8623fe4bb0164527(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent >, autowig::HolderType< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > > class_85e5d9c1d86a574d8623fe4bb0164527(module, "_ElementaryEvent_85e5d9c1d86a574d8623fe4bb0164527", "");
    class_85e5d9c1d86a574d8623fe4bb0164527.def(pybind11::init< int const & >());
    class_85e5d9c1d86a574d8623fe4bb0164527.def(pybind11::init< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > const & >());
    class_85e5d9c1d86a574d8623fe4bb0164527.def("get_value", method_pointer_2a3a0db3adea56158741771284715f12, pybind11::return_value_policy::copy, "");

}