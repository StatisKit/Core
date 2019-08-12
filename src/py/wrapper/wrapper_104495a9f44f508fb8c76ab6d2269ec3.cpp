#include "_core.h"


namespace autowig {
}

void wrapper_104495a9f44f508fb8c76ab6d2269ec3(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::GeometricDistributionMLEstimation, autowig::HolderType< struct ::statiskit::GeometricDistributionMLEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::GeometricDistributionMLEstimation, struct ::statiskit::GeometricDistributionEstimation > > class_104495a9f44f508fb8c76ab6d2269ec3(module, "GeometricDistributionMLEstimation", "");
    class_104495a9f44f508fb8c76ab6d2269ec3.def(pybind11::init<  >());
    class_104495a9f44f508fb8c76ab6d2269ec3.def(pybind11::init< struct ::statiskit::GeometricDistributionMLEstimation const & >());

}