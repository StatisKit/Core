#include "_core.h"


namespace autowig {
}

void wrapper_b9daedbb8a1d5864bc019efa0a0d17df(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateConditionalDistributionEstimation, autowig::HolderType< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type, class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > > class_b9daedbb8a1d5864bc019efa0a0d17df(module, "MultivariateConditionalDistributionEstimation", "");
    class_b9daedbb8a1d5864bc019efa0a0d17df.def(pybind11::init<  >());
    class_b9daedbb8a1d5864bc019efa0a0d17df.def(pybind11::init< struct ::statiskit::MultivariateConditionalDistributionEstimation const & >());

}