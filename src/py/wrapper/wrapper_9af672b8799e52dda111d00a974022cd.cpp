#include "_core.h"


namespace autowig {
}

void wrapper_9af672b8799e52dda111d00a974022cd(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation, autowig::HolderType< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation > class_9af672b8799e52dda111d00a974022cd(module, "DiscreteMultivariateConditionalDistributionEstimation", "");
    class_9af672b8799e52dda111d00a974022cd.def(pybind11::init<  >());
    class_9af672b8799e52dda111d00a974022cd.def(pybind11::init< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation const & >());

}