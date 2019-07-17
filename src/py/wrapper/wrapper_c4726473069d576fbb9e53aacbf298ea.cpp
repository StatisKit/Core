#include "_core.h"


namespace autowig {
}

void wrapper_c4726473069d576fbb9e53aacbf298ea(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalUnivariateDistributionEstimation, autowig::HolderType< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type, struct ::statiskit::UnivariateDistributionEstimation > class_c4726473069d576fbb9e53aacbf298ea(module, "CategoricalUnivariateDistributionEstimation", "");
    class_c4726473069d576fbb9e53aacbf298ea.def(pybind11::init<  >());
    class_c4726473069d576fbb9e53aacbf298ea.def(pybind11::init< struct ::statiskit::CategoricalUnivariateDistributionEstimation const & >());

}