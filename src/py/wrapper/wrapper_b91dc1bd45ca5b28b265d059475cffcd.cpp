#include "_core.h"


namespace autowig {
}

void wrapper_b91dc1bd45ca5b28b265d059475cffcd(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_b91dc1bd45ca5b28b265d059475cffcd(module, "_PolymorphicCopy_b91dc1bd45ca5b28b265d059475cffcd", "");
    class_b91dc1bd45ca5b28b265d059475cffcd.def(pybind11::init<  >());
    class_b91dc1bd45ca5b28b265d059475cffcd.def(pybind11::init< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}