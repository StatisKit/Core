#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::*method_pointer_b8d633dd3fba502087b924858a0fd3c3)()const= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::size;
class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > * const (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::*method_pointer_aaed889a3e855db88e484a979e8523b9)(::statiskit::Index const &)const= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::*method_pointer_bb87061374485ac6adaf5ed60315f642)(::statiskit::Index const &)const= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::get_score;

namespace autowig {
}

void wrapper_8d9f50f674e25529b3d059a5a5380bcb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, autowig::HolderType< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > > class_8d9f50f674e25529b3d059a5a5380bcb(module, "_Selection_8d9f50f674e25529b3d059a5a5380bcb", "");
    class_8d9f50f674e25529b3d059a5a5380bcb.def(pybind11::init<  >());
    class_8d9f50f674e25529b3d059a5a5380bcb.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_8d9f50f674e25529b3d059a5a5380bcb.def(pybind11::init< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > const & >());
    class_8d9f50f674e25529b3d059a5a5380bcb.def("__len__", method_pointer_b8d633dd3fba502087b924858a0fd3c3, "");
    class_8d9f50f674e25529b3d059a5a5380bcb.def("get_estimation", method_pointer_aaed889a3e855db88e484a979e8523b9, pybind11::return_value_policy::reference_internal, "");
    class_8d9f50f674e25529b3d059a5a5380bcb.def("get_score", method_pointer_bb87061374485ac6adaf5ed60315f642, pybind11::return_value_policy::copy, "");

}