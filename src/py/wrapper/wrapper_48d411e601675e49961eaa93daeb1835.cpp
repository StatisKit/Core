#include "_core.h"

class ::std::vector< int, class ::std::allocator< int > > const & (::statiskit::CensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_6c71e4c59ca95bb8b1753b4b2642706f)()const= &::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent >::get_values;

namespace autowig {
}

void wrapper_48d411e601675e49961eaa93daeb1835(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::HolderType< class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > > class_48d411e601675e49961eaa93daeb1835(module, "_CensoredEvent_48d411e601675e49961eaa93daeb1835", "");
    class_48d411e601675e49961eaa93daeb1835.def(pybind11::init< class ::std::vector< int, class ::std::allocator< int > > const & >());
    class_48d411e601675e49961eaa93daeb1835.def(pybind11::init< class ::statiskit::CensoredEvent< struct ::statiskit::DiscreteEvent > const & >());
    class_48d411e601675e49961eaa93daeb1835.def("get_values", method_pointer_6c71e4c59ca95bb8b1753b4b2642706f, pybind11::return_value_policy::copy, "");

}