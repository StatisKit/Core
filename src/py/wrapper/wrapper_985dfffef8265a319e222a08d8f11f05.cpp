#include "_core.h"

double const & (::statiskit::BetaDistribution::*method_pointer_d15e5113eb035524bf47b41f300122d2)()const= &::statiskit::BetaDistribution::get_alpha;
void  (::statiskit::BetaDistribution::*method_pointer_923a19134c1c530f983a57aaddbd5ab8)(double const &)= &::statiskit::BetaDistribution::set_alpha;
double const & (::statiskit::BetaDistribution::*method_pointer_e361b886a6565e31a7aadc0c2332a33b)()const= &::statiskit::BetaDistribution::get_beta;
void  (::statiskit::BetaDistribution::*method_pointer_abc93b3b043d5a289e364503f102eaa4)(double const &)= &::statiskit::BetaDistribution::set_beta;

namespace autowig {
}

void wrapper_985dfffef8265a319e222a08d8f11f05(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::BetaDistribution, autowig::HolderType< class ::statiskit::BetaDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::BetaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_985dfffef8265a319e222a08d8f11f05(module, "BetaDistribution", "This class represents a beta distribution.\n\nThe beta distribution is an univariate continuous distribution. The\nsupport is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def(pybind11::init<  >());
    class_985dfffef8265a319e222a08d8f11f05.def(pybind11::init< double const &, double const & >());
    class_985dfffef8265a319e222a08d8f11f05.def(pybind11::init< class ::statiskit::BetaDistribution const & >());
    class_985dfffef8265a319e222a08d8f11f05.def("get_alpha", method_pointer_d15e5113eb035524bf47b41f300122d2, pybind11::return_value_policy::copy, "Get the value of the shape parameter :math:`\\alpha`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("set_alpha", method_pointer_923a19134c1c530f983a57aaddbd5ab8, "Set the value of the shape parameter :math:`\\alpha`.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("get_beta", method_pointer_e361b886a6565e31a7aadc0c2332a33b, pybind11::return_value_policy::copy, "Get the value of the shape parameter :math:`\\beta`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("set_beta", method_pointer_abc93b3b043d5a289e364503f102eaa4, "Set the value of the shape parameter :math:`\\beta`.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}