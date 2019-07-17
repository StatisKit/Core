#include "_core.h"

class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::ElementaryEvent< ::statiskit::CategoricalEvent >::*method_pointer_52ca03cc26f85b83a9cf872b62cc9597)()const= &::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >::get_value;

namespace autowig {
}

void wrapper_2f72e6e6db9a5498beee75dbafdc6393(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, autowig::HolderType< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, struct ::statiskit::CategoricalEvent > > class_2f72e6e6db9a5498beee75dbafdc6393(module, "_ElementaryEvent_2f72e6e6db9a5498beee75dbafdc6393", "");
    class_2f72e6e6db9a5498beee75dbafdc6393.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >());
    class_2f72e6e6db9a5498beee75dbafdc6393.def(pybind11::init< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > const & >());
    class_2f72e6e6db9a5498beee75dbafdc6393.def("get_value", method_pointer_52ca03cc26f85b83a9cf872b62cc9597, pybind11::return_value_policy::copy, "");

}