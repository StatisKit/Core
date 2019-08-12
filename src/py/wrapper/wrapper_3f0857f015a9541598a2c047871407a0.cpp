#include "_core.h"

struct ::statiskit::ContinuousUnivariateDistribution const * (::statiskit::SlopeHeuristicSelection< ::statiskit::UnivariateHistogramDistributionEstimation >::*method_pointer_4f425c6e263b508c80c85c41bcc13e82)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristicSelection< struct ::statiskit::UnivariateHistogramDistributionEstimation >::get_proposal;

namespace autowig {
}

void wrapper_3f0857f015a9541598a2c047871407a0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::UnivariateHistogramDistributionEstimation >, autowig::HolderType< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::UnivariateHistogramDistributionEstimation > >::Type, class ::statiskit::SlopeHeuristic, struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::UnivariateHistogramDistributionEstimation >, struct ::statiskit::UnivariateHistogramDistributionEstimation > > class_3f0857f015a9541598a2c047871407a0(module, "_SlopeHeuristicSelection_3f0857f015a9541598a2c047871407a0", "");
    class_3f0857f015a9541598a2c047871407a0.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_3f0857f015a9541598a2c047871407a0.def(pybind11::init< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::UnivariateHistogramDistributionEstimation > const & >());
    class_3f0857f015a9541598a2c047871407a0.def("get_proposal", method_pointer_4f425c6e263b508c80c85c41bcc13e82, pybind11::return_value_policy::reference_internal, "");

}