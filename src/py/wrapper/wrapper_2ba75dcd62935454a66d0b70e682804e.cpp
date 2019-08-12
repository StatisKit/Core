#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_1f55579a4701506da51dfb749a9eeb48)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;
struct ::statiskit::DiscreteUnivariateDistributionEstimation * const (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_e3bf86d16157520f9f595dc899d14866)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_723476289e5853ea9a38fbc02bc8574e)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_2ba75dcd62935454a66d0b70e682804e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_2ba75dcd62935454a66d0b70e682804e(module, "_Selection_2ba75dcd62935454a66d0b70e682804e", "");
    class_2ba75dcd62935454a66d0b70e682804e.def(pybind11::init<  >());
    class_2ba75dcd62935454a66d0b70e682804e.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_2ba75dcd62935454a66d0b70e682804e.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_2ba75dcd62935454a66d0b70e682804e.def("__len__", method_pointer_1f55579a4701506da51dfb749a9eeb48, "");
    class_2ba75dcd62935454a66d0b70e682804e.def("get_estimation", method_pointer_e3bf86d16157520f9f595dc899d14866, pybind11::return_value_policy::reference_internal, "");
    class_2ba75dcd62935454a66d0b70e682804e.def("get_score", method_pointer_723476289e5853ea9a38fbc02bc8574e, pybind11::return_value_policy::copy, "");

}