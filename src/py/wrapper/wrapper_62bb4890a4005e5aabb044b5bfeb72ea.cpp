#include "_core.h"

double  (::statiskit::BinaryDistribution::*method_pointer_8634b7e6df395a9aa301b671659b0dbb)()const= &::statiskit::BinaryDistribution::get_pi;
void  (::statiskit::BinaryDistribution::*method_pointer_3775c9d36e385c5f9b67919e72f13a7b)(double const &)= &::statiskit::BinaryDistribution::set_pi;

namespace autowig {
}

void wrapper_62bb4890a4005e5aabb044b5bfeb72ea(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::BinaryDistribution, autowig::HolderType< struct ::statiskit::BinaryDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinaryDistribution, struct ::statiskit::CategoricalUnivariateDistribution > > class_62bb4890a4005e5aabb044b5bfeb72ea(module, "BinaryDistribution", "");
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(pybind11::init<  >());
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >());
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, double const & >());
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(pybind11::init< struct ::statiskit::BinaryDistribution const & >());
    class_62bb4890a4005e5aabb044b5bfeb72ea.def("get_pi", method_pointer_8634b7e6df395a9aa301b671659b0dbb, "");
    class_62bb4890a4005e5aabb044b5bfeb72ea.def("set_pi", method_pointer_3775c9d36e385c5f9b67919e72f13a7b, "");

}