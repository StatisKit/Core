#include "_core.h"


namespace autowig {
}

void wrapper_839b61ecb09d54819eb38cf69dde50bb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::HolderType< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > class_839b61ecb09d54819eb38cf69dde50bb(module, "_QuantitativeUnivariateFrequencyDistribution_839b61ecb09d54819eb38cf69dde50bb", "");
    class_839b61ecb09d54819eb38cf69dde50bb.def(pybind11::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >());
    class_839b61ecb09d54819eb38cf69dde50bb.def(pybind11::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_839b61ecb09d54819eb38cf69dde50bb.def(pybind11::init< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const & >());

}