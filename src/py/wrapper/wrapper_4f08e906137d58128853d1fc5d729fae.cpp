#include "_core.h"

unsigned int const & (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_56fd39a8f6ed53729ecdf0bdc9056334)()const= &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_maxbins;
void  (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_ab8822cd4ed254e096080344d300b6f5)(unsigned int const &)= &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_maxbins;
double const & (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_800f246c8e0d5a1590849e387716468a)()const= &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_constant;
void  (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_921e32d4784b551ba85952b033e54e95)(double const &)= &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_constant;

namespace autowig {
}

void wrapper_4f08e906137d58128853d1fc5d729fae(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, autowig::HolderType< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_4f08e906137d58128853d1fc5d729fae(module, "Estimator", "");
    class_4f08e906137d58128853d1fc5d729fae.def(pybind11::init<  >());
    class_4f08e906137d58128853d1fc5d729fae.def(pybind11::init< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const & >());
    class_4f08e906137d58128853d1fc5d729fae.def("get_maxbins", method_pointer_56fd39a8f6ed53729ecdf0bdc9056334, pybind11::return_value_policy::copy, "");
    class_4f08e906137d58128853d1fc5d729fae.def("set_maxbins", method_pointer_ab8822cd4ed254e096080344d300b6f5, "");
    class_4f08e906137d58128853d1fc5d729fae.def("get_constant", method_pointer_800f246c8e0d5a1590849e387716468a, pybind11::return_value_policy::copy, "");
    class_4f08e906137d58128853d1fc5d729fae.def("set_constant", method_pointer_921e32d4784b551ba85952b033e54e95, "");

}