#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_5b386192ee8b57aeb38dadbaf4c372d7)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::size;
struct ::statiskit::ContinuousMultivariateDistributionEstimation * const (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_e260b3b56cc85e4784d2b55577832f63)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_08e224b3510f506bac021bc7f5675cdc)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_63d17adfd9865a9ea92417492b7a15d5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > class_63d17adfd9865a9ea92417492b7a15d5(module, "_Selection_63d17adfd9865a9ea92417492b7a15d5", "");
    class_63d17adfd9865a9ea92417492b7a15d5.def(pybind11::init<  >());
    class_63d17adfd9865a9ea92417492b7a15d5.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_63d17adfd9865a9ea92417492b7a15d5.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());
    class_63d17adfd9865a9ea92417492b7a15d5.def("__len__", method_pointer_5b386192ee8b57aeb38dadbaf4c372d7, "");
    class_63d17adfd9865a9ea92417492b7a15d5.def("get_estimation", method_pointer_e260b3b56cc85e4784d2b55577832f63, pybind11::return_value_policy::reference_internal, "");
    class_63d17adfd9865a9ea92417492b7a15d5.def("get_score", method_pointer_08e224b3510f506bac021bc7f5675cdc, pybind11::return_value_policy::copy, "");

}