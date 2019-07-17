#include "_core.h"

double const & (::statiskit::NormalDistribution::*method_pointer_412f22d12d8c5ecfb2e37a69d4aa4f05)()const= &::statiskit::NormalDistribution::get_mu;
void  (::statiskit::NormalDistribution::*method_pointer_c770f1aeabd6538a97629064cf8bc270)(double const &)= &::statiskit::NormalDistribution::set_mu;
double const & (::statiskit::NormalDistribution::*method_pointer_29e7dd42d9085b56954175dc8b9a994e)()const= &::statiskit::NormalDistribution::get_sigma;
void  (::statiskit::NormalDistribution::*method_pointer_0ada355ca76458319515887abcd12ef1)(double const &)= &::statiskit::NormalDistribution::set_sigma;

namespace autowig {
}

void wrapper_2cfec7576f805b8d8fb103d1f86f786e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NormalDistribution, autowig::HolderType< class ::statiskit::NormalDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_2cfec7576f805b8d8fb103d1f86f786e(module, "NormalDistribution", "This class NormalDistribution represents a `normal\ndistribution <https://en.wikipedia.org/wiki/Normal_distribution>`__.\n\nThe normal distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def(pybind11::init<  >());
    class_2cfec7576f805b8d8fb103d1f86f786e.def(pybind11::init< double const &, double const & >());
    class_2cfec7576f805b8d8fb103d1f86f786e.def(pybind11::init< class ::statiskit::NormalDistribution const & >());
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_mu", method_pointer_412f22d12d8c5ecfb2e37a69d4aa4f05, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("set_mu", method_pointer_c770f1aeabd6538a97629064cf8bc270, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_sigma", method_pointer_29e7dd42d9085b56954175dc8b9a994e, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("set_sigma", method_pointer_0ada355ca76458319515887abcd12ef1, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}