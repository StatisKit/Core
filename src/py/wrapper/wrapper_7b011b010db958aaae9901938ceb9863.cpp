#include "_core.h"

unsigned int const & (::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator::*method_pointer_f0be0fcb6e8452ef81cdd2fd3c792032)()const= &::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator::get_maxbins;
void  (::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator::*method_pointer_13615c35f9655b6683d8720aaa5a022e)(unsigned int const &)= &::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator::set_maxbins;

namespace autowig {
}

void wrapper_7b011b010db958aaae9901938ceb9863(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator, autowig::HolderType< class ::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator > > class_7b011b010db958aaae9901938ceb9863(module, "Estimator", "");
    class_7b011b010db958aaae9901938ceb9863.def(pybind11::init<  >());
    class_7b011b010db958aaae9901938ceb9863.def(pybind11::init< class ::statiskit::UnivariateHistogramDistributionRegularEstimation::Estimator const & >());
    class_7b011b010db958aaae9901938ceb9863.def("get_maxbins", method_pointer_f0be0fcb6e8452ef81cdd2fd3c792032, pybind11::return_value_policy::copy, "");
    class_7b011b010db958aaae9901938ceb9863.def("set_maxbins", method_pointer_13615c35f9655b6683d8720aaa5a022e, "");

}