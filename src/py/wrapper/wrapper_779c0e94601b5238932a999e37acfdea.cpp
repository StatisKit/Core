#include "_core.h"


namespace autowig {
}

void wrapper_779c0e94601b5238932a999e37acfdea(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DiscreteUnivariateFrequencyDistributionEstimator, autowig::HolderType< class ::statiskit::DiscreteUnivariateFrequencyDistributionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::DiscreteUnivariateFrequencyDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > class_779c0e94601b5238932a999e37acfdea(module, "DiscreteUnivariateFrequencyDistributionEstimator", "");
    class_779c0e94601b5238932a999e37acfdea.def(pybind11::init<  >());
    class_779c0e94601b5238932a999e37acfdea.def(pybind11::init< class ::statiskit::DiscreteUnivariateFrequencyDistributionEstimator const & >());

}