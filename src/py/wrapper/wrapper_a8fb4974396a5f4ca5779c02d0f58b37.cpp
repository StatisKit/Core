#include "_core.h"

bool const & (::statiskit::UnivariateVarianceEstimation::*method_pointer_82667d41ae9658d3b19c94ed2fb3aeda)()const= &::statiskit::UnivariateVarianceEstimation::get_bias;

namespace autowig {
}

void wrapper_a8fb4974396a5f4ca5779c02d0f58b37(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateVarianceEstimation, autowig::HolderType< class ::statiskit::UnivariateVarianceEstimation >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateVarianceEstimation, class ::statiskit::UnivariateDispersionEstimation > > class_a8fb4974396a5f4ca5779c02d0f58b37(module, "UnivariateVarianceEstimation", "");
    class_a8fb4974396a5f4ca5779c02d0f58b37.def(pybind11::init< double const &, bool const &, double const & >());
    class_a8fb4974396a5f4ca5779c02d0f58b37.def(pybind11::init< class ::statiskit::UnivariateVarianceEstimation const & >());
    class_a8fb4974396a5f4ca5779c02d0f58b37.def("get_bias", method_pointer_82667d41ae9658d3b19c94ed2fb3aeda, pybind11::return_value_policy::copy, "");

}