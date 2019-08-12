#include "_core.h"

class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & (::statiskit::UnivariateHistogramDistribution::*method_pointer_0adabf56e3155b9b81c68457b36cddd8)()const= &::statiskit::UnivariateHistogramDistribution::get_bins;
class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::UnivariateHistogramDistribution::*method_pointer_0b6a988d603c5ef98804c95ebb1d6552)()const= &::statiskit::UnivariateHistogramDistribution::get_densities;

namespace autowig {
}

void wrapper_9ca9917e667b52ea9eb2ec4f17e230b5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateHistogramDistribution, autowig::HolderType< class ::statiskit::UnivariateHistogramDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_9ca9917e667b52ea9eb2ec4f17e230b5(module, "UnivariateHistogramDistribution", "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def(pybind11::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const & >());
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def(pybind11::init< class ::statiskit::UnivariateHistogramDistribution const & >());
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_bins", method_pointer_0adabf56e3155b9b81c68457b36cddd8, pybind11::return_value_policy::copy, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_densities", method_pointer_0b6a988d603c5ef98804c95ebb1d6552, pybind11::return_value_policy::copy, "");

}