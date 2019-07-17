#include "_core.h"

unsigned int const & (::statiskit::UnivariateHistogramDistributionEstimation::Estimator::*method_pointer_51500bc0b2985679b02003e72c323092)()const= &::statiskit::UnivariateHistogramDistributionEstimation::Estimator::get_nb_bins;
void  (::statiskit::UnivariateHistogramDistributionEstimation::Estimator::*method_pointer_7663d6320c1a5d018f910f7bbcfe06d8)(unsigned int const &)= &::statiskit::UnivariateHistogramDistributionEstimation::Estimator::set_nb_bins;

namespace autowig {
}

void wrapper_a14f45085a74550c89aab30952f6725b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator, autowig::HolderType< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_a14f45085a74550c89aab30952f6725b(module, "Estimator", "");
    class_a14f45085a74550c89aab30952f6725b.def(pybind11::init<  >());
    class_a14f45085a74550c89aab30952f6725b.def(pybind11::init< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator const & >());
    class_a14f45085a74550c89aab30952f6725b.def("get_nb_bins", method_pointer_51500bc0b2985679b02003e72c323092, pybind11::return_value_policy::copy, "");
    class_a14f45085a74550c89aab30952f6725b.def("set_nb_bins", method_pointer_7663d6320c1a5d018f910f7bbcfe06d8, "");

}