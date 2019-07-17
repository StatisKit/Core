#include "_core.h"

double const & (::statiskit::ExponentialDistribution::*method_pointer_95a6955fae0753f7b5fb24d84fa5adc2)()const= &::statiskit::ExponentialDistribution::get_lambda;
void  (::statiskit::ExponentialDistribution::*method_pointer_de22be959cc150958e19f74a17e140f1)(double const &)= &::statiskit::ExponentialDistribution::set_lambda;

namespace autowig {
}

void wrapper_6100283fa34c5dc5af23228c1af7758a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ExponentialDistribution, autowig::HolderType< class ::statiskit::ExponentialDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ExponentialDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_6100283fa34c5dc5af23228c1af7758a(module, "ExponentialDistribution", "This class represents a exponential distribution.\n\nThe exponential distribution is an univariate continuous distribution.\nThe support is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n");
    class_6100283fa34c5dc5af23228c1af7758a.def(pybind11::init<  >());
    class_6100283fa34c5dc5af23228c1af7758a.def(pybind11::init< double const & >());
    class_6100283fa34c5dc5af23228c1af7758a.def(pybind11::init< class ::statiskit::ExponentialDistribution const & >());
    class_6100283fa34c5dc5af23228c1af7758a.def("get_lambda", method_pointer_95a6955fae0753f7b5fb24d84fa5adc2, pybind11::return_value_policy::copy, "Get the value of the scale parameter :math:`\\lambda`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_6100283fa34c5dc5af23228c1af7758a.def("set_lambda", method_pointer_de22be959cc150958e19f74a17e140f1, "Set the value of the scale parameter :math:`\\lambda`.\n\n:Parameter:\n    `lambda` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}