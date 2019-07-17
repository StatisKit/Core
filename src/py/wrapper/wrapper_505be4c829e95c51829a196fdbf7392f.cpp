#include "_core.h"

double const & (::statiskit::GammaDistribution::*method_pointer_2d6e78ac029c5dbaba11f4d47d3f8f50)()const= &::statiskit::GammaDistribution::get_alpha;
void  (::statiskit::GammaDistribution::*method_pointer_b60ed55763e75148abec99d60bc157d1)(double const &)= &::statiskit::GammaDistribution::set_alpha;
double const & (::statiskit::GammaDistribution::*method_pointer_97c06cfdcaa253f7902ee5da0de74e99)()const= &::statiskit::GammaDistribution::get_beta;
void  (::statiskit::GammaDistribution::*method_pointer_3fc04c0502de56399edb37c532d78ee0)(double const &)= &::statiskit::GammaDistribution::set_beta;

namespace autowig {
}

void wrapper_505be4c829e95c51829a196fdbf7392f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::GammaDistribution, autowig::HolderType< class ::statiskit::GammaDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::GammaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_505be4c829e95c51829a196fdbf7392f(module, "GammaDistribution", "This class represents a Gamma distribution.\n\nThe Gamma distribution is an univariate continuous distribution. The\nsupport is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def(pybind11::init<  >());
    class_505be4c829e95c51829a196fdbf7392f.def(pybind11::init< double const &, double const & >());
    class_505be4c829e95c51829a196fdbf7392f.def(pybind11::init< class ::statiskit::GammaDistribution const & >());
    class_505be4c829e95c51829a196fdbf7392f.def("get_alpha", method_pointer_2d6e78ac029c5dbaba11f4d47d3f8f50, pybind11::return_value_policy::copy, "Get the value of the shape parameter :math:`\\alpha`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("set_alpha", method_pointer_b60ed55763e75148abec99d60bc157d1, "Set the value of the shape parameter :math:`\\alpha`.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("get_beta", method_pointer_97c06cfdcaa253f7902ee5da0de74e99, pybind11::return_value_policy::copy, "Get the value of the rate parameter :math:`\\beta`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("set_beta", method_pointer_3fc04c0502de56399edb37c532d78ee0, "Set the value of the rate parameter :math:`\\beta`.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}