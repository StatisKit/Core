#include "_core.h"

double const & (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_1d854e534d905ee1a2541a071c0631cb)()const= &::statiskit::BetaNegativeBinomialDistribution::get_kappa;
void  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_a25d6ee690015f8e99692c3b7a5bc36a)(double const &)= &::statiskit::BetaNegativeBinomialDistribution::set_kappa;

namespace autowig {
}

void wrapper_c3319864e98456809db3192e7060581f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::BetaNegativeBinomialDistribution, autowig::HolderType< class ::statiskit::BetaNegativeBinomialDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > > class_c3319864e98456809db3192e7060581f(module, "BetaNegativeBinomialDistribution", "");
    class_c3319864e98456809db3192e7060581f.def(pybind11::init<  >());
    class_c3319864e98456809db3192e7060581f.def(pybind11::init< double const &, double const &, double const & >());
    class_c3319864e98456809db3192e7060581f.def(pybind11::init< class ::statiskit::BetaNegativeBinomialDistribution const & >());
    class_c3319864e98456809db3192e7060581f.def("get_kappa", method_pointer_1d854e534d905ee1a2541a071c0631cb, pybind11::return_value_policy::copy, "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_c3319864e98456809db3192e7060581f.def("set_kappa", method_pointer_a25d6ee690015f8e99692c3b7a5bc36a, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}