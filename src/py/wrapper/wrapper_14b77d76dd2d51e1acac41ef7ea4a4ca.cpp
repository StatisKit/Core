#include "_core.h"

double const & (::statiskit::NegativeBinomialDistribution::*method_pointer_8d75b8b2276652878cec83d9112b75c6)()const= &::statiskit::NegativeBinomialDistribution::get_kappa;
void  (::statiskit::NegativeBinomialDistribution::*method_pointer_31ea5093e1a75e4385d8142ab4be2d54)(double const &)= &::statiskit::NegativeBinomialDistribution::set_kappa;
double const & (::statiskit::NegativeBinomialDistribution::*method_pointer_bd038b9931e45fefa1c2305d47cb31f3)()const= &::statiskit::NegativeBinomialDistribution::get_pi;
void  (::statiskit::NegativeBinomialDistribution::*method_pointer_bbe0fb1cf4d554779f394a3e542e5bd2)(double const &)= &::statiskit::NegativeBinomialDistribution::set_pi;

namespace autowig {
}

void wrapper_14b77d76dd2d51e1acac41ef7ea4a4ca(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NegativeBinomialDistribution, autowig::HolderType< class ::statiskit::NegativeBinomialDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > class_14b77d76dd2d51e1acac41ef7ea4a4ca(module, "NegativeBinomialDistribution", "This class NegativeBinomialDistribution represents a `negative binomial\ndistribution <https://en.wikipedia.org/wiki/Negative_binomial_distribution>`__\n\nThe negative binomial distribution is an univariate discrete\ndistribution of the number of successes in independent `Bernouilli\ntrials <https://en.wikipedia.org/wiki/Bernoulli_trial>`__ with a\nspecified probability :math:`\\pi \\in [0,1]` of success before a\nspecified number of failures denoted\n$:raw-latex:`\\kappa `:raw-latex:`\\in `:raw-latex:`\\mathbb{R}`\\_+^\\* $.\nThe support of the negative binomial distribution is the set of\nnon-negative integer :math:`\\mathbb{N}`. In the particular case of\n:math:`\\kappa = 1.` the negative binomial distribution represents a\n`geometric\ndistribution <https://en.wikipedia.org/wiki/Geometric_distribution>`__\nwith :math:`\\mathbb{N}` as support.\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def(pybind11::init<  >());
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def(pybind11::init< double const &, double const & >());
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def(pybind11::init< class ::statiskit::NegativeBinomialDistribution const & >());
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("get_kappa", method_pointer_8d75b8b2276652878cec83d9112b75c6, pybind11::return_value_policy::copy, "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("set_kappa", method_pointer_31ea5093e1a75e4385d8142ab4be2d54, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("get_pi", method_pointer_bd038b9931e45fefa1c2305d47cb31f3, pybind11::return_value_policy::copy, "Get the value of pi\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("set_pi", method_pointer_bbe0fb1cf4d554779f394a3e542e5bd2, "Set the value of pi\n\n:Parameter:\n    `pi` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}