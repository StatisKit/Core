#include "_core.h"

double const & (::statiskit::LogisticDistribution::*method_pointer_600ee11b1af2569a88987f006d175d4b)()const= &::statiskit::LogisticDistribution::get_mu;
void  (::statiskit::LogisticDistribution::*method_pointer_ebfff8d8aa3654a480f62ae6bf839e57)(double const &)= &::statiskit::LogisticDistribution::set_mu;
double const & (::statiskit::LogisticDistribution::*method_pointer_cb0f730fa036596eb0e82bdce3eb429b)()const= &::statiskit::LogisticDistribution::get_sigma;
void  (::statiskit::LogisticDistribution::*method_pointer_fa5be89660ae540fb63fde390a1aee7b)(double const &)= &::statiskit::LogisticDistribution::set_sigma;

namespace autowig {
}

void wrapper_0b663e6159f1527ca997ac0244c65093(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LogisticDistribution, autowig::HolderType< class ::statiskit::LogisticDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::LogisticDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_0b663e6159f1527ca997ac0244c65093(module, "LogisticDistribution", "This class LogisticDistribution represents a `logistic\ndistribution <https://en.wikipedia.org/wiki/Logistic_distribution>`__.\n\nThe logistic distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def(pybind11::init<  >());
    class_0b663e6159f1527ca997ac0244c65093.def(pybind11::init< double const &, double const & >());
    class_0b663e6159f1527ca997ac0244c65093.def(pybind11::init< class ::statiskit::LogisticDistribution const & >());
    class_0b663e6159f1527ca997ac0244c65093.def("get_mu", method_pointer_600ee11b1af2569a88987f006d175d4b, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("set_mu", method_pointer_ebfff8d8aa3654a480f62ae6bf839e57, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("get_sigma", method_pointer_cb0f730fa036596eb0e82bdce3eb429b, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("set_sigma", method_pointer_fa5be89660ae540fb63fde390a1aee7b, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}