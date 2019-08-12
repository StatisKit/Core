#include "_core.h"

bool const & (::statiskit::MultivariateVarianceEstimation::*method_pointer_c09df8176bf655ddbb0dc17cf26df734)()const= &::statiskit::MultivariateVarianceEstimation::get_bias;

namespace autowig {
}

void wrapper_8f6b8d601b265537abfca5a924ae495d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateVarianceEstimation, autowig::HolderType< class ::statiskit::MultivariateVarianceEstimation >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateVarianceEstimation, class ::statiskit::MultivariateDispersionEstimation > > class_8f6b8d601b265537abfca5a924ae495d(module, "MultivariateVarianceEstimation", "");
    class_8f6b8d601b265537abfca5a924ae495d.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, bool const & >());
    class_8f6b8d601b265537abfca5a924ae495d.def(pybind11::init< class ::statiskit::MultivariateVarianceEstimation const & >());
    class_8f6b8d601b265537abfca5a924ae495d.def("get_bias", method_pointer_c09df8176bf655ddbb0dc17cf26df734, pybind11::return_value_policy::copy, "");

}