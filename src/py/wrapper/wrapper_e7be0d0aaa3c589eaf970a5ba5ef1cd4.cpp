#include "_core.h"

unsigned int const & (::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator::*method_pointer_04745ff559bd582b99b0e7f2b6f67789)()const= &::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator::get_nb_bins;
void  (::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator::*method_pointer_fd9c2c3ba2865cd1a7b25b313af42b4c)(unsigned int const &)= &::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator::set_nb_bins;

namespace autowig {
}

void wrapper_e7be0d0aaa3c589eaf970a5ba5ef1cd4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator, autowig::HolderType< class ::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator > > class_e7be0d0aaa3c589eaf970a5ba5ef1cd4(module, "Estimator", "");
    class_e7be0d0aaa3c589eaf970a5ba5ef1cd4.def(pybind11::init<  >());
    class_e7be0d0aaa3c589eaf970a5ba5ef1cd4.def(pybind11::init< class ::statiskit::UnivariateHistogramDistributionClassicEstimation::Estimator const & >());
    class_e7be0d0aaa3c589eaf970a5ba5ef1cd4.def("get_nb_bins", method_pointer_04745ff559bd582b99b0e7f2b6f67789, pybind11::return_value_policy::copy, "");
    class_e7be0d0aaa3c589eaf970a5ba5ef1cd4.def("set_nb_bins", method_pointer_fd9c2c3ba2865cd1a7b25b313af42b4c, "");

}