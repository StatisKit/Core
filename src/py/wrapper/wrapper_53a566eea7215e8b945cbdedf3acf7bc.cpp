#include "_core.h"

::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::response_data_type const * (::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::*method_pointer_603e265f5b7357c1bf35779d8e0966d0)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::get_response_data;
::statiskit::explanatory_data_type const * (::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::*method_pointer_a798b507f2875022ad305c6f9cef8d44)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::get_explanatory_data;
::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::distribution_type const * (::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::*method_pointer_3571a20cb0aa59659ed80d219d7f0229)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::get_distribution;
class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::*method_pointer_9abc63382e6f5f8db5caa5876d667e65)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::copy;

namespace autowig {
}

void wrapper_53a566eea7215e8b945cbdedf3acf7bc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >, autowig::HolderType< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > >::Type > class_53a566eea7215e8b945cbdedf3acf7bc(module, "_ConditionalDistributionEstimation_53a566eea7215e8b945cbdedf3acf7bc", "");
    class_53a566eea7215e8b945cbdedf3acf7bc.def(pybind11::init<  >());
    class_53a566eea7215e8b945cbdedf3acf7bc.def(pybind11::init< ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::response_data_type const *, ::statiskit::explanatory_data_type const *, ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::distribution_type const * >());
    class_53a566eea7215e8b945cbdedf3acf7bc.def(pybind11::init< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > const & >());
    class_53a566eea7215e8b945cbdedf3acf7bc.def("get_response_data", method_pointer_603e265f5b7357c1bf35779d8e0966d0, pybind11::return_value_policy::reference_internal, "");
    class_53a566eea7215e8b945cbdedf3acf7bc.def("get_explanatory_data", method_pointer_a798b507f2875022ad305c6f9cef8d44, pybind11::return_value_policy::reference_internal, "");
    class_53a566eea7215e8b945cbdedf3acf7bc.def("get_distribution", method_pointer_3571a20cb0aa59659ed80d219d7f0229, pybind11::return_value_policy::reference_internal, "");
    class_53a566eea7215e8b945cbdedf3acf7bc.def("copy", method_pointer_9abc63382e6f5f8db5caa5876d667e65, "");

}