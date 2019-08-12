#include "_core.h"

unsigned int const & (::statiskit::BetaBinomialDistribution::*method_pointer_2dc2d228de9d559b867572b52f81608c)()const= &::statiskit::BetaBinomialDistribution::get_kappa;
void  (::statiskit::BetaBinomialDistribution::*method_pointer_88c6525044ad531ca99718d1f4505a17)(unsigned int const &)= &::statiskit::BetaBinomialDistribution::set_kappa;

namespace autowig {
}

void wrapper_abaaf08e32235f2ca7bacb4418592155(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::BetaBinomialDistribution, autowig::HolderType< class ::statiskit::BetaBinomialDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > > class_abaaf08e32235f2ca7bacb4418592155(module, "BetaBinomialDistribution", "");
    class_abaaf08e32235f2ca7bacb4418592155.def(pybind11::init<  >());
    class_abaaf08e32235f2ca7bacb4418592155.def(pybind11::init< unsigned int const &, double const &, double const & >());
    class_abaaf08e32235f2ca7bacb4418592155.def(pybind11::init< class ::statiskit::BetaBinomialDistribution const & >());
    class_abaaf08e32235f2ca7bacb4418592155.def("get_kappa", method_pointer_2dc2d228de9d559b867572b52f81608c, pybind11::return_value_policy::copy, "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_abaaf08e32235f2ca7bacb4418592155.def("set_kappa", method_pointer_88c6525044ad531ca99718d1f4505a17, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}