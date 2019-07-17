#include "_core.h"

double const & (::statiskit::GeometricDistribution::*method_pointer_d37fe93f16df5735affce3768ab15f63)()const= &::statiskit::GeometricDistribution::get_pi;
void  (::statiskit::GeometricDistribution::*method_pointer_1175d83596a053eca629694bc51b2278)(double const &)= &::statiskit::GeometricDistribution::set_pi;

namespace autowig {
}

void wrapper_39eaaa358ce655d08615c947c949eb83(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::GeometricDistribution, autowig::HolderType< class ::statiskit::GeometricDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > class_39eaaa358ce655d08615c947c949eb83(module, "GeometricDistribution", "");
    class_39eaaa358ce655d08615c947c949eb83.def(pybind11::init<  >());
    class_39eaaa358ce655d08615c947c949eb83.def(pybind11::init< double const & >());
    class_39eaaa358ce655d08615c947c949eb83.def(pybind11::init< class ::statiskit::GeometricDistribution const & >());
    class_39eaaa358ce655d08615c947c949eb83.def("get_pi", method_pointer_d37fe93f16df5735affce3768ab15f63, pybind11::return_value_policy::copy, "Get the value of pi\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_39eaaa358ce655d08615c947c949eb83.def("set_pi", method_pointer_1175d83596a053eca629694bc51b2278, "Set the value of pi\n\n:Parameter:\n    `pi` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}