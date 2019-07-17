#include "_core.h"

double  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_574dc45165355bb2b40d40079eaeaac7)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_shift;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_1e95cb49491155a1bcc03373fedaea32)(double const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_shift;
::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::estimator_type const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_fd79432338a9535782d486a7ec60f926)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_b58055ed0c995a8abfee3865e8d0fcde)(::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::estimator_type const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;

namespace autowig {
}

void wrapper_6d51d5c1ef2d5f1bb98935798af976e0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::HolderType< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_6d51d5c1ef2d5f1bb98935798af976e0(module, "Estimator", "");
    class_6d51d5c1ef2d5f1bb98935798af976e0.def(pybind11::init<  >());
    class_6d51d5c1ef2d5f1bb98935798af976e0.def(pybind11::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const & >());
    class_6d51d5c1ef2d5f1bb98935798af976e0.def("get_shift", method_pointer_574dc45165355bb2b40d40079eaeaac7, "");
    class_6d51d5c1ef2d5f1bb98935798af976e0.def("set_shift", method_pointer_1e95cb49491155a1bcc03373fedaea32, "");
    class_6d51d5c1ef2d5f1bb98935798af976e0.def("get_estimator", method_pointer_fd79432338a9535782d486a7ec60f926, pybind11::return_value_policy::reference_internal, "");
    class_6d51d5c1ef2d5f1bb98935798af976e0.def("set_estimator", method_pointer_b58055ed0c995a8abfee3865e8d0fcde, "");

}