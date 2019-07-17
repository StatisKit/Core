#include "_core.h"

bool const & (::statiskit::UnivariateVarianceEstimation::Estimator::*method_pointer_715a363da3045da29bdfcd248071fee8)()const= &::statiskit::UnivariateVarianceEstimation::Estimator::get_bias;
void  (::statiskit::UnivariateVarianceEstimation::Estimator::*method_pointer_0bed646d95065c579223336edd8e576b)(bool const &)= &::statiskit::UnivariateVarianceEstimation::Estimator::set_bias;

namespace autowig {
}

void wrapper_65947043f3a35049b50e8d74f93075cf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateVarianceEstimation::Estimator, autowig::HolderType< class ::statiskit::UnivariateVarianceEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateVarianceEstimation::Estimator, struct ::statiskit::UnivariateDispersionEstimation::Estimator > > class_65947043f3a35049b50e8d74f93075cf(module, "Estimator", "");
    class_65947043f3a35049b50e8d74f93075cf.def(pybind11::init<  >());
    class_65947043f3a35049b50e8d74f93075cf.def(pybind11::init< bool const & >());
    class_65947043f3a35049b50e8d74f93075cf.def(pybind11::init< class ::statiskit::UnivariateVarianceEstimation::Estimator const & >());
    class_65947043f3a35049b50e8d74f93075cf.def("get_bias", method_pointer_715a363da3045da29bdfcd248071fee8, pybind11::return_value_policy::copy, "");
    class_65947043f3a35049b50e8d74f93075cf.def("set_bias", method_pointer_0bed646d95065c579223336edd8e576b, "");

}