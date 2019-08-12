#include "_core.h"

double const & (::statiskit::LaplaceDistribution::*method_pointer_4d398e06491252e28abd7e36a780974f)()const= &::statiskit::LaplaceDistribution::get_mu;
void  (::statiskit::LaplaceDistribution::*method_pointer_bfd7be501f8359d4bae2bdc5151055aa)(double const &)= &::statiskit::LaplaceDistribution::set_mu;
double const & (::statiskit::LaplaceDistribution::*method_pointer_fd899166e96755e5aea2da76a77e8757)()const= &::statiskit::LaplaceDistribution::get_sigma;
void  (::statiskit::LaplaceDistribution::*method_pointer_c648a51d4a4c52e4b0c556a98d28423f)(double const &)= &::statiskit::LaplaceDistribution::set_sigma;

namespace autowig {
}

void wrapper_3557273679395cf2a3e4b3d3f227accd(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LaplaceDistribution, autowig::HolderType< class ::statiskit::LaplaceDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::LaplaceDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_3557273679395cf2a3e4b3d3f227accd(module, "LaplaceDistribution", "This class LaplaceDistribution represents a `Laplace\ndistribution <https://en.wikipedia.org/wiki/Laplace_distribution>`__.\n\nThe Laplace distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def(pybind11::init<  >());
    class_3557273679395cf2a3e4b3d3f227accd.def(pybind11::init< double const &, double const & >());
    class_3557273679395cf2a3e4b3d3f227accd.def(pybind11::init< class ::statiskit::LaplaceDistribution const & >());
    class_3557273679395cf2a3e4b3d3f227accd.def("get_mu", method_pointer_4d398e06491252e28abd7e36a780974f, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("set_mu", method_pointer_bfd7be501f8359d4bae2bdc5151055aa, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("get_sigma", method_pointer_fd899166e96755e5aea2da76a77e8757, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("set_sigma", method_pointer_c648a51d4a4c52e4b0c556a98d28423f, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}