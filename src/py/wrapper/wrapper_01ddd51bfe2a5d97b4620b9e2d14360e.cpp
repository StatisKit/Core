#include "_core.h"

int const & (::statiskit::LeftCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_7f2086559bba5548b25f5bb9bf3e9368)()const= &::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >::get_upper_bound;

namespace autowig {
}

void wrapper_01ddd51bfe2a5d97b4620b9e2d14360e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::HolderType< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > > class_01ddd51bfe2a5d97b4620b9e2d14360e(module, "_LeftCensoredEvent_01ddd51bfe2a5d97b4620b9e2d14360e", "");
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def(pybind11::init< int const & >());
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def(pybind11::init< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent > const & >());
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def("get_upper_bound", method_pointer_7f2086559bba5548b25f5bb9bf3e9368, pybind11::return_value_policy::copy, "");

}