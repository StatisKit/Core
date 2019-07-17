#include "_core.h"

::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::data_type const * (::statiskit::DistributionEstimation< ::statiskit::MultivariateDistribution >::*method_pointer_e4a2a9b682fa5d1ab1a7d05a0b75b056)()const= &::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::get_data;
::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::distribution_type const * (::statiskit::DistributionEstimation< ::statiskit::MultivariateDistribution >::*method_pointer_ad69595ceb9f55ff84afe57d082c5819)()const= &::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::get_distribution;
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::MultivariateDistribution >::*method_pointer_62da80c8000c54c3b93b222f1b724508)()const= &::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::copy;

namespace autowig {
}

void wrapper_91c5962ae4f35199bc2e90b5edad8412(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, autowig::HolderType< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > >::Type > class_91c5962ae4f35199bc2e90b5edad8412(module, "_DistributionEstimation_91c5962ae4f35199bc2e90b5edad8412", "");
    class_91c5962ae4f35199bc2e90b5edad8412.def(pybind11::init<  >());
    class_91c5962ae4f35199bc2e90b5edad8412.def(pybind11::init< ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::data_type const *, ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::distribution_type const * >());
    class_91c5962ae4f35199bc2e90b5edad8412.def(pybind11::init< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > const & >());
    class_91c5962ae4f35199bc2e90b5edad8412.def("get_data", method_pointer_e4a2a9b682fa5d1ab1a7d05a0b75b056, pybind11::return_value_policy::reference_internal, "");
    class_91c5962ae4f35199bc2e90b5edad8412.def("get_distribution", method_pointer_ad69595ceb9f55ff84afe57d082c5819, pybind11::return_value_policy::reference_internal, "");
    class_91c5962ae4f35199bc2e90b5edad8412.def("copy", method_pointer_62da80c8000c54c3b93b222f1b724508, "");

}