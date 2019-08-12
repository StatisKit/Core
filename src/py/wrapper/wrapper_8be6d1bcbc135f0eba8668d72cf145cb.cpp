#include "_core.h"


namespace autowig {
}

void wrapper_8be6d1bcbc135f0eba8668d72cf145cb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateHistogramDistributionIrregularEstimation, autowig::HolderType< struct ::statiskit::UnivariateHistogramDistributionIrregularEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateHistogramDistributionIrregularEstimation, class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::UnivariateHistogramDistributionEstimation > > > class_8be6d1bcbc135f0eba8668d72cf145cb(module, "UnivariateHistogramDistributionIrregularEstimation", "");
    class_8be6d1bcbc135f0eba8668d72cf145cb.def(pybind11::init< struct ::statiskit::UnivariateHistogramDistributionIrregularEstimation const & >());

}