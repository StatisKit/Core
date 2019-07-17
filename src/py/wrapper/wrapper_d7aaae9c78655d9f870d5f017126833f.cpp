#include "_core.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_06bd867c93c85c6f87717fbc2be04a50)()const= &::statiskit::DirichletMultinomialSingularDistribution::get_alpha;
void  (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_6834eea566225a72a1dba7a36998e76a)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::DirichletMultinomialSingularDistribution::set_alpha;

namespace autowig {
}

void wrapper_d7aaae9c78655d9f870d5f017126833f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DirichletMultinomialSingularDistribution, autowig::HolderType< class ::statiskit::DirichletMultinomialSingularDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > > class_d7aaae9c78655d9f870d5f017126833f(module, "DirichletMultinomialSingularDistribution", "");
    class_d7aaae9c78655d9f870d5f017126833f.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_d7aaae9c78655d9f870d5f017126833f.def(pybind11::init< class ::statiskit::DirichletMultinomialSingularDistribution const & >());
    class_d7aaae9c78655d9f870d5f017126833f.def("get_alpha", method_pointer_06bd867c93c85c6f87717fbc2be04a50, pybind11::return_value_policy::copy, "");
    class_d7aaae9c78655d9f870d5f017126833f.def("set_alpha", method_pointer_6834eea566225a72a1dba7a36998e76a, "");

}