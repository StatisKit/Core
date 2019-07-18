#include "_core.h"


namespace autowig {
}

void wrapper_cb4432e6b9d05dfaa3b6285bbadb3f60(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::GeometricDistributionMLEstimation::Estimator, autowig::HolderType< struct ::statiskit::GeometricDistributionMLEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::GeometricDistributionMLEstimation::Estimator, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_cb4432e6b9d05dfaa3b6285bbadb3f60(module, "Estimator", "");
    class_cb4432e6b9d05dfaa3b6285bbadb3f60.def(pybind11::init<  >());
    class_cb4432e6b9d05dfaa3b6285bbadb3f60.def(pybind11::init< struct ::statiskit::GeometricDistributionMLEstimation::Estimator const & >());

}