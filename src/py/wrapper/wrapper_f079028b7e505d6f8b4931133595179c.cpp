#include "_core.h"

double const & (::statiskit::StudentDistribution::*method_pointer_9e4bcc10128e5d208dad4579a06435e5)()const= &::statiskit::StudentDistribution::get_nu;
void  (::statiskit::StudentDistribution::*method_pointer_75cf996cb5e9565b8a6c219c6e42dc27)(double const &)= &::statiskit::StudentDistribution::set_nu;

namespace autowig {
}

void wrapper_f079028b7e505d6f8b4931133595179c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::StudentDistribution, autowig::HolderType< class ::statiskit::StudentDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::StudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_f079028b7e505d6f8b4931133595179c(module, "StudentDistribution", "This class NonStandardStudentDistribution represents a Student\ndistribution.\n\nThe Student distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_f079028b7e505d6f8b4931133595179c.def(pybind11::init<  >());
    class_f079028b7e505d6f8b4931133595179c.def(pybind11::init< double const & >());
    class_f079028b7e505d6f8b4931133595179c.def(pybind11::init< class ::statiskit::StudentDistribution const & >());
    class_f079028b7e505d6f8b4931133595179c.def("get_nu", method_pointer_9e4bcc10128e5d208dad4579a06435e5, pybind11::return_value_policy::copy, "Get the value of the shape parameter nu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_f079028b7e505d6f8b4931133595179c.def("set_nu", method_pointer_75cf996cb5e9565b8a6c219c6e42dc27, "Set the value of the shape parameter nu.\n\n:Parameter:\n    `nu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}