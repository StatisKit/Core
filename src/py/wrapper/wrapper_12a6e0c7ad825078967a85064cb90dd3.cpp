#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_351275f97aff51b99aa0640eb0303f4c)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::size;
struct ::statiskit::CategoricalMultivariateDistributionEstimation * const (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_643a9df53a6a5c028908f785218c936b)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_34750ff2f19b59bda91ab3f179ebb555)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_12a6e0c7ad825078967a85064cb90dd3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_12a6e0c7ad825078967a85064cb90dd3(module, "_Selection_12a6e0c7ad825078967a85064cb90dd3", "");
    class_12a6e0c7ad825078967a85064cb90dd3.def(pybind11::init<  >());
    class_12a6e0c7ad825078967a85064cb90dd3.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_12a6e0c7ad825078967a85064cb90dd3.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());
    class_12a6e0c7ad825078967a85064cb90dd3.def("__len__", method_pointer_351275f97aff51b99aa0640eb0303f4c, "");
    class_12a6e0c7ad825078967a85064cb90dd3.def("get_estimation", method_pointer_643a9df53a6a5c028908f785218c936b, pybind11::return_value_policy::reference_internal, "");
    class_12a6e0c7ad825078967a85064cb90dd3.def("get_score", method_pointer_34750ff2f19b59bda91ab3f179ebb555, pybind11::return_value_policy::copy, "");

}