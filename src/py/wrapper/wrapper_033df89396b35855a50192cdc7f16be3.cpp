#include "_core.h"

double const & (::statiskit::PoissonDistribution::*method_pointer_e1c5d61243a2516d8cca503eee6d4b6d)()const= &::statiskit::PoissonDistribution::get_theta;
void  (::statiskit::PoissonDistribution::*method_pointer_f1f3fd67865756958164089e5a85911b)(double const &)= &::statiskit::PoissonDistribution::set_theta;

namespace autowig {
}

void wrapper_033df89396b35855a50192cdc7f16be3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::PoissonDistribution, autowig::HolderType< class ::statiskit::PoissonDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > class_033df89396b35855a50192cdc7f16be3(module, "PoissonDistribution", "This class PoissonDistribution represents a `Poisson\ndistribution <https://en.wikipedia.org/wiki/Poisson_distribution>`__\n\nThe Poisson distribution is an univariate discrete distribution that\nexpresses the probability of a given number of events occurring in a\nfixed interval of time and/or space if these events occur with a known\naverage rate\n$:raw-latex:`\\theta  `:raw-latex:`\\in `:raw-latex:`\\mathbb{R}`\\_+^\\* $\nand independently of the time since the last event. The support of the\nPoisson distribution is the set of non-negative integer $\n:raw-latex:`\\mathbb{N}` $.\n\n");
    class_033df89396b35855a50192cdc7f16be3.def(pybind11::init<  >());
    class_033df89396b35855a50192cdc7f16be3.def(pybind11::init< double const & >());
    class_033df89396b35855a50192cdc7f16be3.def(pybind11::init< class ::statiskit::PoissonDistribution const & >());
    class_033df89396b35855a50192cdc7f16be3.def("get_theta", method_pointer_e1c5d61243a2516d8cca503eee6d4b6d, pybind11::return_value_policy::copy, "Get the value of theta.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("set_theta", method_pointer_f1f3fd67865756958164089e5a85911b, "Set the value of theta.\n\n:Parameter:\n    `theta` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}