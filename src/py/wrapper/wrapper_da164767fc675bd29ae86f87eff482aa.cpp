#include "_core.h"


namespace autowig {
}

void wrapper_da164767fc675bd29ae86f87eff482aa(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, autowig::HolderType< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type, struct ::statiskit::UnivariateConditionalDistributionEstimation > class_da164767fc675bd29ae86f87eff482aa(module, "DiscreteUnivariateConditionalDistributionEstimation", "");
    class_da164767fc675bd29ae86f87eff482aa.def(pybind11::init<  >());
    class_da164767fc675bd29ae86f87eff482aa.def(pybind11::init< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation const & >());

}