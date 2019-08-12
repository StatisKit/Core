#include "_core.h"

void  (::statiskit::VectorSampleSpace::*method_pointer_4f023bb2dc8a5a4aa7ef051031a8e5c7)(::statiskit::Index const &, struct ::statiskit::UnivariateSampleSpace const &)= &::statiskit::VectorSampleSpace::set_sample_space;

namespace autowig {
}

void wrapper_98dec83d5b055bb7bd34151081ce3693(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::VectorSampleSpace, autowig::HolderType< class ::statiskit::VectorSampleSpace >::Type, struct ::statiskit::MultivariateSampleSpace > class_98dec83d5b055bb7bd34151081ce3693(module, "VectorSampleSpace", "");
    class_98dec83d5b055bb7bd34151081ce3693.def(pybind11::init< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > const & >());
    class_98dec83d5b055bb7bd34151081ce3693.def(pybind11::init< class ::statiskit::VectorSampleSpace const & >());
    class_98dec83d5b055bb7bd34151081ce3693.def("set_sample_space", method_pointer_4f023bb2dc8a5a4aa7ef051031a8e5c7, "");

}