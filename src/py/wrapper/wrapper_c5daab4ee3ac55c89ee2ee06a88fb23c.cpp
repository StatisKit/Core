#include "_core.h"


namespace autowig {
}

void wrapper_c5daab4ee3ac55c89ee2ee06a88fb23c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateMeanEstimation, autowig::HolderType< class ::statiskit::UnivariateMeanEstimation >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateMeanEstimation, struct ::statiskit::UnivariateLocationEstimation > > class_c5daab4ee3ac55c89ee2ee06a88fb23c(module, "UnivariateMeanEstimation", "");
    class_c5daab4ee3ac55c89ee2ee06a88fb23c.def(pybind11::init< double const & >());
    class_c5daab4ee3ac55c89ee2ee06a88fb23c.def(pybind11::init< class ::statiskit::UnivariateMeanEstimation const & >());

}