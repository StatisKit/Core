#include "_core.h"


namespace autowig {
}

void wrapper_871f2a5a4b135dfeb5ac066db0fbca5c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NormalDistributionMLEstimation::Estimator, autowig::HolderType< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::NormalDistributionMLEstimation::Estimator, struct ::statiskit::NormalDistributionEstimation::Estimator > > class_871f2a5a4b135dfeb5ac066db0fbca5c(module, "Estimator", "");
    class_871f2a5a4b135dfeb5ac066db0fbca5c.def(pybind11::init<  >());
    class_871f2a5a4b135dfeb5ac066db0fbca5c.def(pybind11::init< struct ::statiskit::NormalDistributionMLEstimation::Estimator const & >());

}