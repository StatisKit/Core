#include "_core.h"

double const & (::statiskit::LogarithmicDistribution::*method_pointer_d5b6531d476959c49b20edc5b912c63a)()const= &::statiskit::LogarithmicDistribution::get_theta;
void  (::statiskit::LogarithmicDistribution::*method_pointer_f4cda2ac3a3b5e9f861b3a906b5ee5d6)(double const &)= &::statiskit::LogarithmicDistribution::set_theta;

namespace autowig {
}

void wrapper_c2568ff48c245dbe8395ac41d83bc8f8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LogarithmicDistribution, autowig::HolderType< class ::statiskit::LogarithmicDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > class_c2568ff48c245dbe8395ac41d83bc8f8(module, "LogarithmicDistribution", "");
    class_c2568ff48c245dbe8395ac41d83bc8f8.def(pybind11::init<  >());
    class_c2568ff48c245dbe8395ac41d83bc8f8.def(pybind11::init< double const & >());
    class_c2568ff48c245dbe8395ac41d83bc8f8.def(pybind11::init< class ::statiskit::LogarithmicDistribution const & >());
    class_c2568ff48c245dbe8395ac41d83bc8f8.def("get_theta", method_pointer_d5b6531d476959c49b20edc5b912c63a, pybind11::return_value_policy::copy, "Get the value of theta\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_c2568ff48c245dbe8395ac41d83bc8f8.def("set_theta", method_pointer_f4cda2ac3a3b5e9f861b3a906b5ee5d6, "Set the value of theta\n\n:Parameter:\n    `theta` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}