#include "_core.h"

class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::CensoredEvent< ::statiskit::CategoricalEvent >::*method_pointer_0960ac74ede35b06be6fad102add8cba)()const= &::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent >::get_values;

namespace autowig {
}

void wrapper_42c73f7b760d584f96ee42693c708651(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent >, autowig::HolderType< class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, struct ::statiskit::CategoricalEvent > > class_42c73f7b760d584f96ee42693c708651(module, "_CensoredEvent_42c73f7b760d584f96ee42693c708651", "");
    class_42c73f7b760d584f96ee42693c708651.def(pybind11::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >());
    class_42c73f7b760d584f96ee42693c708651.def(pybind11::init< class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > const & >());
    class_42c73f7b760d584f96ee42693c708651.def("get_values", method_pointer_0960ac74ede35b06be6fad102add8cba, pybind11::return_value_policy::copy, "");

}