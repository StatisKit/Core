#include "_core.h"


namespace autowig {
}

void wrapper_f2160a41454451d28ba6ed197ddede7e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_f2160a41454451d28ba6ed197ddede7e(module, "_UnivariateFrequencyDistributionEstimation_f2160a41454451d28ba6ed197ddede7e", "");
    class_f2160a41454451d28ba6ed197ddede7e.def(pybind11::init<  >());
    class_f2160a41454451d28ba6ed197ddede7e.def(pybind11::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}