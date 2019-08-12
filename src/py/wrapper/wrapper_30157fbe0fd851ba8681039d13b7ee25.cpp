#include "_core.h"


namespace autowig {
}

void wrapper_30157fbe0fd851ba8681039d13b7ee25(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateHistogramDistributionClassicEstimation, autowig::HolderType< struct ::statiskit::UnivariateHistogramDistributionClassicEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateHistogramDistributionClassicEstimation, struct ::statiskit::UnivariateHistogramDistributionEstimation > > class_30157fbe0fd851ba8681039d13b7ee25(module, "UnivariateHistogramDistributionClassicEstimation", "");
    class_30157fbe0fd851ba8681039d13b7ee25.def(pybind11::init<  >());
    class_30157fbe0fd851ba8681039d13b7ee25.def(pybind11::init< struct ::statiskit::UnivariateHistogramDistributionClassicEstimation const & >());

}