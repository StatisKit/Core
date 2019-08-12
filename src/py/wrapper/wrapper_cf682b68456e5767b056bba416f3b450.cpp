#include "_core.h"


namespace autowig {
}

void wrapper_cf682b68456e5767b056bba416f3b450(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateHistogramDistributionRegularEstimation, autowig::HolderType< struct ::statiskit::UnivariateHistogramDistributionRegularEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateHistogramDistributionRegularEstimation, class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::UnivariateHistogramDistributionEstimation > > > class_cf682b68456e5767b056bba416f3b450(module, "UnivariateHistogramDistributionRegularEstimation", "");
    class_cf682b68456e5767b056bba416f3b450.def(pybind11::init< struct ::statiskit::UnivariateHistogramDistributionRegularEstimation const & >());

}