#include "_core.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::DirichletDistribution::*method_pointer_8b3cd98182555b0ba6f7e67b9468a0f8)()const= &::statiskit::DirichletDistribution::get_alpha;
void  (::statiskit::DirichletDistribution::*method_pointer_3aa0b41c15235d3eacbc5a2da94febc1)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::DirichletDistribution::set_alpha;

namespace autowig {
}

void wrapper_cd5e5c2c8f40591793aafe753277bfe3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DirichletDistribution, autowig::HolderType< class ::statiskit::DirichletDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > class_cd5e5c2c8f40591793aafe753277bfe3(module, "DirichletDistribution", "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def(pybind11::init< ::statiskit::Index const & >());
    class_cd5e5c2c8f40591793aafe753277bfe3.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_cd5e5c2c8f40591793aafe753277bfe3.def(pybind11::init< class ::statiskit::DirichletDistribution const & >());
    class_cd5e5c2c8f40591793aafe753277bfe3.def("get_alpha", method_pointer_8b3cd98182555b0ba6f7e67b9468a0f8, pybind11::return_value_policy::copy, "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def("set_alpha", method_pointer_3aa0b41c15235d3eacbc5a2da94febc1, "");

}