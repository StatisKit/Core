#include "_core.h"

double const & (::statiskit::GumbelDistribution::*method_pointer_bc77f20dea4954c7970e95ba781f19b8)()const= &::statiskit::GumbelDistribution::get_mu;
void  (::statiskit::GumbelDistribution::*method_pointer_c7c163a120c655a3a16625df32ad6113)(double const &)= &::statiskit::GumbelDistribution::set_mu;
double const & (::statiskit::GumbelDistribution::*method_pointer_dd1ffd3620be59b6a7a4d652ba8d8010)()const= &::statiskit::GumbelDistribution::get_sigma;
void  (::statiskit::GumbelDistribution::*method_pointer_7d7bb45edc66567a8f06b7e379d8ef04)(double const &)= &::statiskit::GumbelDistribution::set_sigma;

namespace autowig {
}

void wrapper_851931d00bce5cabad06313cbacce91b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::GumbelDistribution, autowig::HolderType< class ::statiskit::GumbelDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::GumbelDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_851931d00bce5cabad06313cbacce91b(module, "GumbelDistribution", "This class GumbelDistribution represents a `Gumbel\ndistribution <https://en.wikipedia.org/wiki/Gumbel_distribution>`__\n(maximum).\n\nThe Gumbel distribution (maximum) is an univariate continuous\ndistribution. It is also called extreme value type I distribution\n(maximum). The support is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_851931d00bce5cabad06313cbacce91b.def(pybind11::init<  >());
    class_851931d00bce5cabad06313cbacce91b.def(pybind11::init< double const &, double const & >());
    class_851931d00bce5cabad06313cbacce91b.def(pybind11::init< class ::statiskit::GumbelDistribution const & >());
    class_851931d00bce5cabad06313cbacce91b.def("get_mu", method_pointer_bc77f20dea4954c7970e95ba781f19b8, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_851931d00bce5cabad06313cbacce91b.def("set_mu", method_pointer_c7c163a120c655a3a16625df32ad6113, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_851931d00bce5cabad06313cbacce91b.def("get_sigma", method_pointer_dd1ffd3620be59b6a7a4d652ba8d8010, pybind11::return_value_policy::copy, "Get the value of the scale prameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_851931d00bce5cabad06313cbacce91b.def("set_sigma", method_pointer_7d7bb45edc66567a8f06b7e379d8ef04, "Set the value of the scale prameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}