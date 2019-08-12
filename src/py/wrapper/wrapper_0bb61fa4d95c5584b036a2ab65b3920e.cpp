#include "_core.h"


namespace autowig {
}

void wrapper_0bb61fa4d95c5584b036a2ab65b3920e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator, autowig::HolderType< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > > > class_0bb61fa4d95c5584b036a2ab65b3920e(module, "Estimator", "");
    class_0bb61fa4d95c5584b036a2ab65b3920e.def(pybind11::init<  >());
    class_0bb61fa4d95c5584b036a2ab65b3920e.def(pybind11::init< struct ::statiskit::NegativeMultinomialDistributionWZ99Estimation::Estimator const & >());

}