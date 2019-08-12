#include "_core.h"


namespace autowig {
}

void wrapper_10d5b7d349c75b6b89998f9a341fb629(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation, autowig::HolderType< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type, struct ::statiskit::UnivariateConditionalDistributionEstimation > class_10d5b7d349c75b6b89998f9a341fb629(module, "ContinuousUnivariateConditionalDistributionEstimation", "");
    class_10d5b7d349c75b6b89998f9a341fb629.def(pybind11::init<  >());
    class_10d5b7d349c75b6b89998f9a341fb629.def(pybind11::init< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation const & >());

}