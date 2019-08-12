#include "_core.h"

class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::CensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_4c0063c1f4535d73afc077edbf304fb4)()const= &::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent >::get_values;

namespace autowig {
}

void wrapper_fa5e2baabb585a5e93632d2563d88b33(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::HolderType< class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > > class_fa5e2baabb585a5e93632d2563d88b33(module, "_CensoredEvent_fa5e2baabb585a5e93632d2563d88b33", "");
    class_fa5e2baabb585a5e93632d2563d88b33.def(pybind11::init< class ::std::vector< double, class ::std::allocator< double > > const & >());
    class_fa5e2baabb585a5e93632d2563d88b33.def(pybind11::init< class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > const & >());
    class_fa5e2baabb585a5e93632d2563d88b33.def("get_values", method_pointer_4c0063c1f4535d73afc077edbf304fb4, pybind11::return_value_policy::copy, "");

}