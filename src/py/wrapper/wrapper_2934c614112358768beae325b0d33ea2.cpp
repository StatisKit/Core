#include "_core.h"


namespace autowig {
}

void wrapper_2934c614112358768beae325b0d33ea2(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PoissonDistributionMLEstimation::Estimator, autowig::HolderType< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_2934c614112358768beae325b0d33ea2(module, "Estimator", "");
    class_2934c614112358768beae325b0d33ea2.def(pybind11::init<  >());
    class_2934c614112358768beae325b0d33ea2.def(pybind11::init< struct ::statiskit::PoissonDistributionMLEstimation::Estimator const & >());

}