#include "_core.h"


namespace autowig {
}

void wrapper_8273d59d3b9f581fa07283ea1cce6a0f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_8273d59d3b9f581fa07283ea1cce6a0f(module, "_ShiftedDistributionEstimation_8273d59d3b9f581fa07283ea1cce6a0f", "");
    class_8273d59d3b9f581fa07283ea1cce6a0f.def(pybind11::init<  >());
    class_8273d59d3b9f581fa07283ea1cce6a0f.def(pybind11::init< struct ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}