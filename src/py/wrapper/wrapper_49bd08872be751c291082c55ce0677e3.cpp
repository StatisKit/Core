#include "_core.h"


namespace autowig {
}

void wrapper_49bd08872be751c291082c55ce0677e3(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateMeanEstimation::Estimator, autowig::HolderType< struct ::statiskit::MultivariateMeanEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateMeanEstimation::Estimator, struct ::statiskit::MultivariateLocationEstimation::Estimator > > class_49bd08872be751c291082c55ce0677e3(module, "Estimator", "");
    class_49bd08872be751c291082c55ce0677e3.def(pybind11::init<  >());
    class_49bd08872be751c291082c55ce0677e3.def(pybind11::init< struct ::statiskit::MultivariateMeanEstimation::Estimator const & >());

}