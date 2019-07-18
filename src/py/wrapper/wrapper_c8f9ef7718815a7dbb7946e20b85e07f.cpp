#include "_core.h"

::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::data_type const * (::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::*method_pointer_aa2cbc3e3f6c51ec8b7709c23d558a89)()const= &::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::get_data;
::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::distribution_type const * (::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::*method_pointer_ba97ddec37b250ff8e8ff65ddc5537cc)()const= &::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::get_distribution;
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::*method_pointer_3d081c3327cf5ca8b9e9d4e4b4e45af6)()const= &::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::copy;

namespace autowig {
}

void wrapper_c8f9ef7718815a7dbb7946e20b85e07f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, autowig::HolderType< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Type > class_c8f9ef7718815a7dbb7946e20b85e07f(module, "_DistributionEstimation_c8f9ef7718815a7dbb7946e20b85e07f", "");
    class_c8f9ef7718815a7dbb7946e20b85e07f.def(pybind11::init<  >());
    class_c8f9ef7718815a7dbb7946e20b85e07f.def(pybind11::init< ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::data_type const * >());
    class_c8f9ef7718815a7dbb7946e20b85e07f.def(pybind11::init< ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::data_type const *, ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::distribution_type const * >());
    class_c8f9ef7718815a7dbb7946e20b85e07f.def(pybind11::init< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > const & >());
    class_c8f9ef7718815a7dbb7946e20b85e07f.def("get_data", method_pointer_aa2cbc3e3f6c51ec8b7709c23d558a89, pybind11::return_value_policy::reference_internal, "");
    class_c8f9ef7718815a7dbb7946e20b85e07f.def("get_distribution", method_pointer_ba97ddec37b250ff8e8ff65ddc5537cc, pybind11::return_value_policy::reference_internal, "");
    class_c8f9ef7718815a7dbb7946e20b85e07f.def("copy", method_pointer_3d081c3327cf5ca8b9e9d4e4b4e45af6, "");

}