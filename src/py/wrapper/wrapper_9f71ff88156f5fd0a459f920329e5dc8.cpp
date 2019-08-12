#include "_core.h"


namespace autowig {
}

void wrapper_9f71ff88156f5fd0a459f920329e5dc8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation, autowig::HolderType< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation > class_9f71ff88156f5fd0a459f920329e5dc8(module, "ContinuousMultivariateConditionalDistributionEstimation", "");
    class_9f71ff88156f5fd0a459f920329e5dc8.def(pybind11::init<  >());
    class_9f71ff88156f5fd0a459f920329e5dc8.def(pybind11::init< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation const & >());

}