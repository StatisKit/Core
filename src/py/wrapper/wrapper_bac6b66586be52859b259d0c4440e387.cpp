#include "_core.h"


namespace autowig {
}

void wrapper_bac6b66586be52859b259d0c4440e387(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateMeanEstimation, autowig::HolderType< class ::statiskit::MultivariateMeanEstimation >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateMeanEstimation, struct ::statiskit::MultivariateLocationEstimation > > class_bac6b66586be52859b259d0c4440e387(module, "MultivariateMeanEstimation", "");
    class_bac6b66586be52859b259d0c4440e387.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_bac6b66586be52859b259d0c4440e387.def(pybind11::init< class ::statiskit::MultivariateMeanEstimation const & >());

}