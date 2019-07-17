#include "_core.h"

::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::response_data_type const * (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::*method_pointer_acd2010201c45858a38838c8a926f909)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::get_response_data;
::statiskit::ConditionalDistributionEstimation::explanatory_data_type const * (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::*method_pointer_46017080d9d753e2b9370e2cabcf7b67)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::get_explanatory_data;
::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::distribution_type const * (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::*method_pointer_08e5dd31ebcf58bd810a563a8a261ed1)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::get_distribution;
class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::*method_pointer_3452e2874d385bb4be30440e8e655f7c)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::copy;

namespace autowig {
}

void wrapper_22af95e725215bc9b21db076f5deefd7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >, autowig::HolderType< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > >::Type > class_22af95e725215bc9b21db076f5deefd7(module, "_ConditionalDistributionEstimation_22af95e725215bc9b21db076f5deefd7", "");
    class_22af95e725215bc9b21db076f5deefd7.def(pybind11::init<  >());
    class_22af95e725215bc9b21db076f5deefd7.def(pybind11::init< ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::response_data_type const *, ::statiskit::ConditionalDistributionEstimation::explanatory_data_type const *, ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::distribution_type const * >());
    class_22af95e725215bc9b21db076f5deefd7.def(pybind11::init< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > const & >());
    class_22af95e725215bc9b21db076f5deefd7.def("get_response_data", method_pointer_acd2010201c45858a38838c8a926f909, pybind11::return_value_policy::reference_internal, "");
    class_22af95e725215bc9b21db076f5deefd7.def("get_explanatory_data", method_pointer_46017080d9d753e2b9370e2cabcf7b67, pybind11::return_value_policy::reference_internal, "");
    class_22af95e725215bc9b21db076f5deefd7.def("get_distribution", method_pointer_08e5dd31ebcf58bd810a563a8a261ed1, pybind11::return_value_policy::reference_internal, "");
    class_22af95e725215bc9b21db076f5deefd7.def("copy", method_pointer_3452e2874d385bb4be30440e8e655f7c, "");

}