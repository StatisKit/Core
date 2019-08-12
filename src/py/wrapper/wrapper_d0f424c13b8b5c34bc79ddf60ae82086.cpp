#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_d15d74b32d095fb58bcd526d0518ce78)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::size;
struct ::statiskit::ContinuousUnivariateDistributionEstimation * const (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_435f56d0e65557b79b1809d705588fe5)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_590528b150ae52f28ed34f36e0d29e97)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_d0f424c13b8b5c34bc79ddf60ae82086(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_d0f424c13b8b5c34bc79ddf60ae82086(module, "_Selection_d0f424c13b8b5c34bc79ddf60ae82086", "");
    class_d0f424c13b8b5c34bc79ddf60ae82086.def(pybind11::init<  >());
    class_d0f424c13b8b5c34bc79ddf60ae82086.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_d0f424c13b8b5c34bc79ddf60ae82086.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_d0f424c13b8b5c34bc79ddf60ae82086.def("__len__", method_pointer_d15d74b32d095fb58bcd526d0518ce78, "");
    class_d0f424c13b8b5c34bc79ddf60ae82086.def("get_estimation", method_pointer_435f56d0e65557b79b1809d705588fe5, pybind11::return_value_policy::reference_internal, "");
    class_d0f424c13b8b5c34bc79ddf60ae82086.def("get_score", method_pointer_590528b150ae52f28ed34f36e0d29e97, pybind11::return_value_policy::copy, "");

}