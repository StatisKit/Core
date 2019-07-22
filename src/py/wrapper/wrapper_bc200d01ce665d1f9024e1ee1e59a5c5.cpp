#include "_core.h"


namespace autowig {
}

void wrapper_bc200d01ce665d1f9024e1ee1e59a5c5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator, autowig::HolderType< class ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > > class_bc200d01ce665d1f9024e1ee1e59a5c5(module, "ContinuousUnivariateFrequencyDistributionEstimator", "");
    class_bc200d01ce665d1f9024e1ee1e59a5c5.def(pybind11::init< class ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator const & >());

}