#include "_core.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultinormalDistribution::*method_pointer_c8bbfad5ecf85392beceef1fb0fb5eb8)()const= &::statiskit::MultinormalDistribution::get_mu;
void  (::statiskit::MultinormalDistribution::*method_pointer_6d6c50ecfa27555b804892649b6f0ded)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MultinormalDistribution::set_mu;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::MultinormalDistribution::*method_pointer_1a4f03987a6454788914ad54e5b6e0dc)()const= &::statiskit::MultinormalDistribution::get_sigma;
void  (::statiskit::MultinormalDistribution::*method_pointer_78836ce44b7f59dba64fdc7318ddb554)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &)= &::statiskit::MultinormalDistribution::set_sigma;

namespace autowig {
}

void wrapper_55c811c1cb0f58cf8dbf62aa61f8d814(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultinormalDistribution, autowig::HolderType< class ::statiskit::MultinormalDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::MultinormalDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > class_55c811c1cb0f58cf8dbf62aa61f8d814(module, "MultinormalDistribution", "");
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >());
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def(pybind11::init< class ::statiskit::MultinormalDistribution const & >());
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("get_mu", method_pointer_c8bbfad5ecf85392beceef1fb0fb5eb8, pybind11::return_value_policy::copy, "");
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("set_mu", method_pointer_6d6c50ecfa27555b804892649b6f0ded, "");
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("get_sigma", method_pointer_1a4f03987a6454788914ad54e5b6e0dc, pybind11::return_value_policy::copy, "");
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("set_sigma", method_pointer_78836ce44b7f59dba64fdc7318ddb554, "");

}