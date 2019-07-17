#include "_core.h"

bool const & (::statiskit::MultivariateVarianceEstimation::Estimator::*method_pointer_19e6c9732f0a5e80856982835a8040e3)()const= &::statiskit::MultivariateVarianceEstimation::Estimator::get_bias;
void  (::statiskit::MultivariateVarianceEstimation::Estimator::*method_pointer_36ba447492c953dc8de6309288836092)(bool const &)= &::statiskit::MultivariateVarianceEstimation::Estimator::set_bias;

namespace autowig {
}

void wrapper_2b57b3b9280e5071b728b923da9d2c0a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateVarianceEstimation::Estimator, autowig::HolderType< class ::statiskit::MultivariateVarianceEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateVarianceEstimation::Estimator, struct ::statiskit::MultivariateDispersionEstimation::Estimator > > class_2b57b3b9280e5071b728b923da9d2c0a(module, "Estimator", "");
    class_2b57b3b9280e5071b728b923da9d2c0a.def(pybind11::init<  >());
    class_2b57b3b9280e5071b728b923da9d2c0a.def(pybind11::init< bool const & >());
    class_2b57b3b9280e5071b728b923da9d2c0a.def(pybind11::init< class ::statiskit::MultivariateVarianceEstimation::Estimator const & >());
    class_2b57b3b9280e5071b728b923da9d2c0a.def("get_bias", method_pointer_19e6c9732f0a5e80856982835a8040e3, pybind11::return_value_policy::copy, "");
    class_2b57b3b9280e5071b728b923da9d2c0a.def("set_bias", method_pointer_36ba447492c953dc8de6309288836092, "");

}