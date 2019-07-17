#include "_core.h"


namespace autowig {
}

void wrapper_c5145b1136065279b4181888431537f6(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > class_c5145b1136065279b4181888431537f6(module, "_PolymorphicCopy_c5145b1136065279b4181888431537f6", "");
    class_c5145b1136065279b4181888431537f6.def(pybind11::init<  >());
    class_c5145b1136065279b4181888431537f6.def(pybind11::init< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > const & >());

}