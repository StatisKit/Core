#include "_core.h"

unsigned int const & (::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::*method_pointer_902991d751d65633a25981f2018b513b)()const= &::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::get_maxbins;
void  (::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::*method_pointer_69cdcce1113359ce8b458458c805b11c)(unsigned int const &)= &::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::set_maxbins;
double const & (::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::*method_pointer_7a42eac98245526c954e359076046816)()const= &::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::get_constant;
void  (::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::*method_pointer_ed3ab0678e525a97a80421687f7e353d)(double const &)= &::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator::set_constant;

namespace autowig {
}

void wrapper_903a54133336556f837a428c6ab5c785(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator, autowig::HolderType< class ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator > > class_903a54133336556f837a428c6ab5c785(module, "Estimator", "");
    class_903a54133336556f837a428c6ab5c785.def(pybind11::init<  >());
    class_903a54133336556f837a428c6ab5c785.def(pybind11::init< class ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator const & >());
    class_903a54133336556f837a428c6ab5c785.def("get_maxbins", method_pointer_902991d751d65633a25981f2018b513b, pybind11::return_value_policy::copy, "");
    class_903a54133336556f837a428c6ab5c785.def("set_maxbins", method_pointer_69cdcce1113359ce8b458458c805b11c, "");
    class_903a54133336556f837a428c6ab5c785.def("get_constant", method_pointer_7a42eac98245526c954e359076046816, pybind11::return_value_policy::copy, "");
    class_903a54133336556f837a428c6ab5c785.def("set_constant", method_pointer_ed3ab0678e525a97a80421687f7e353d, "");

}