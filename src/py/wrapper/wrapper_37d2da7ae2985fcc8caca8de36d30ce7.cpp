#include "_core.h"

double const & (::statiskit::CauchyDistribution::*method_pointer_2c5a042cd22d5c6aa327cda326887f5d)()const= &::statiskit::CauchyDistribution::get_mu;
void  (::statiskit::CauchyDistribution::*method_pointer_0b8482697b5d50769ad737ee5e62922f)(double const &)= &::statiskit::CauchyDistribution::set_mu;
double const & (::statiskit::CauchyDistribution::*method_pointer_47c9040450155a07b6d26a0e64dbd084)()const= &::statiskit::CauchyDistribution::get_sigma;
void  (::statiskit::CauchyDistribution::*method_pointer_cf1c7eea5f465f529121b6ee03e7d6d3)(double const &)= &::statiskit::CauchyDistribution::set_sigma;

namespace autowig {
}

void wrapper_37d2da7ae2985fcc8caca8de36d30ce7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::CauchyDistribution, autowig::HolderType< class ::statiskit::CauchyDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::CauchyDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_37d2da7ae2985fcc8caca8de36d30ce7(module, "CauchyDistribution", "This class CauchyDistribution represents a `Cauchy\ndistribution <https://en.wikipedia.org/wiki/Cauchy_distribution>`__.\n\nThe Cauchy distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(pybind11::init<  >());
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(pybind11::init< double const &, double const & >());
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(pybind11::init< class ::statiskit::CauchyDistribution const & >());
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_mu", method_pointer_2c5a042cd22d5c6aa327cda326887f5d, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("set_mu", method_pointer_0b8482697b5d50769ad737ee5e62922f, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_sigma", method_pointer_47c9040450155a07b6d26a0e64dbd084, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("set_sigma", method_pointer_cf1c7eea5f465f529121b6ee03e7d6d3, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}