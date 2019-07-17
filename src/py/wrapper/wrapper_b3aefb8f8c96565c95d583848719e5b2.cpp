#include "_core.h"

double const & (::statiskit::UniformDistribution::*method_pointer_e4f00fec9b735d76a30aac1ebeaab017)()const= &::statiskit::UniformDistribution::get_alpha;
void  (::statiskit::UniformDistribution::*method_pointer_fdd0db0c63f556bd84d354ab99b8b20e)(double const &)= &::statiskit::UniformDistribution::set_alpha;
double const & (::statiskit::UniformDistribution::*method_pointer_45721cc68dd7533e8f26226b11c78f2d)()const= &::statiskit::UniformDistribution::get_beta;
void  (::statiskit::UniformDistribution::*method_pointer_0e2cb1e7f7935b4b85625c2ea51d732d)(double const &)= &::statiskit::UniformDistribution::set_beta;

namespace autowig {
}

void wrapper_b3aefb8f8c96565c95d583848719e5b2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UniformDistribution, autowig::HolderType< class ::statiskit::UniformDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UniformDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_b3aefb8f8c96565c95d583848719e5b2(module, "UniformDistribution", "This class represents a uniform distribution.\n\nThe uniform distribution is an univariate continuous distribution. The\nsupport is the interval :math:`[\\alpha,\\beta]` where :math:`\\alpha` and\n:math:`\\beta` are two real values such that :math:`\\alpha<\\beta`.\n\n");
    class_b3aefb8f8c96565c95d583848719e5b2.def(pybind11::init<  >());
    class_b3aefb8f8c96565c95d583848719e5b2.def(pybind11::init< double const &, double const & >());
    class_b3aefb8f8c96565c95d583848719e5b2.def(pybind11::init< class ::statiskit::UniformDistribution const & >());
    class_b3aefb8f8c96565c95d583848719e5b2.def("get_alpha", method_pointer_e4f00fec9b735d76a30aac1ebeaab017, pybind11::return_value_policy::copy, "Get the value of the support parameter :math:`\\alpha`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_b3aefb8f8c96565c95d583848719e5b2.def("set_alpha", method_pointer_fdd0db0c63f556bd84d354ab99b8b20e, "Set the value of the support parameter :math:`\\alpha`.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b3aefb8f8c96565c95d583848719e5b2.def("get_beta", method_pointer_45721cc68dd7533e8f26226b11c78f2d, pybind11::return_value_policy::copy, "Get the value of the support parameter :math:`\\beta`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_b3aefb8f8c96565c95d583848719e5b2.def("set_beta", method_pointer_0e2cb1e7f7935b4b85625c2ea51d732d, "Set the value of the support parameter :math:`\\beta`.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}