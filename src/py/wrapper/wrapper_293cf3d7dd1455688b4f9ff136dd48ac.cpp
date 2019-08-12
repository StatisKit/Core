#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::*method_pointer_4f123ad92fd9569b9017124223bb5ab8)()const= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::size;
struct ::statiskit::MultivariateDistributionEstimation * const (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::*method_pointer_6f7efffb79315a559291b43a7a920315)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::*method_pointer_6dc91310b9a65fac921724db3840fc4b)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_293cf3d7dd1455688b4f9ff136dd48ac(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >, struct ::statiskit::MultivariateDistributionEstimation > > class_293cf3d7dd1455688b4f9ff136dd48ac(module, "_Selection_293cf3d7dd1455688b4f9ff136dd48ac", "");
    class_293cf3d7dd1455688b4f9ff136dd48ac.def(pybind11::init<  >());
    class_293cf3d7dd1455688b4f9ff136dd48ac.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_293cf3d7dd1455688b4f9ff136dd48ac.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation > const & >());
    class_293cf3d7dd1455688b4f9ff136dd48ac.def("__len__", method_pointer_4f123ad92fd9569b9017124223bb5ab8, "");
    class_293cf3d7dd1455688b4f9ff136dd48ac.def("get_estimation", method_pointer_6f7efffb79315a559291b43a7a920315, pybind11::return_value_policy::reference_internal, "");
    class_293cf3d7dd1455688b4f9ff136dd48ac.def("get_score", method_pointer_6dc91310b9a65fac921724db3840fc4b, pybind11::return_value_policy::copy, "");

}