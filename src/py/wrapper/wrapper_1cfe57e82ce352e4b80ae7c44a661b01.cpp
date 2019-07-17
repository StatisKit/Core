#include "_core.h"


namespace autowig {
}

void wrapper_1cfe57e82ce352e4b80ae7c44a661b01(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::HolderType< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > class_1cfe57e82ce352e4b80ae7c44a661b01(module, "_QuantitativeUnivariateFrequencyDistribution_1cfe57e82ce352e4b80ae7c44a661b01", "");
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(pybind11::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >());
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(pybind11::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(pybind11::init< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const & >());

}