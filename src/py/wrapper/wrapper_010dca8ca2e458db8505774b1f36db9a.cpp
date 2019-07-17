#include "_core.h"

unsigned int const & (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_8cc4d3f7e7a85290a6eac90ddb1b031c)()const= &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_maxbins;
void  (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_d93c3ccaf8e85e3fb977443d8d8f1b82)(unsigned int const &)= &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_maxbins;

namespace autowig {
}

void wrapper_010dca8ca2e458db8505774b1f36db9a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, autowig::HolderType< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_010dca8ca2e458db8505774b1f36db9a(module, "Estimator", "");
    class_010dca8ca2e458db8505774b1f36db9a.def(pybind11::init<  >());
    class_010dca8ca2e458db8505774b1f36db9a.def(pybind11::init< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const & >());
    class_010dca8ca2e458db8505774b1f36db9a.def("get_maxbins", method_pointer_8cc4d3f7e7a85290a6eac90ddb1b031c, pybind11::return_value_policy::copy, "");
    class_010dca8ca2e458db8505774b1f36db9a.def("set_maxbins", method_pointer_d93c3ccaf8e85e3fb977443d8d8f1b82, "");

}