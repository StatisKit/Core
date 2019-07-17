#include "_core.h"


namespace autowig {
}

void wrapper_e2d3df06414058178eb5fc957e8fd6d9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateMeanEstimation::Estimator, autowig::HolderType< struct ::statiskit::UnivariateMeanEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateMeanEstimation::Estimator, struct ::statiskit::UnivariateLocationEstimation::Estimator > > class_e2d3df06414058178eb5fc957e8fd6d9(module, "Estimator", "");
    class_e2d3df06414058178eb5fc957e8fd6d9.def(pybind11::init<  >());
    class_e2d3df06414058178eb5fc957e8fd6d9.def(pybind11::init< struct ::statiskit::UnivariateMeanEstimation::Estimator const & >());

}