#include "_core.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultinomialSingularDistribution::*method_pointer_0eb2e57f88f7522cbd8ce57df2a18a31)()const= &::statiskit::MultinomialSingularDistribution::get_pi;
void  (::statiskit::MultinomialSingularDistribution::*method_pointer_9fb5327edbc756a6979e8572e7fc6e90)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MultinomialSingularDistribution::set_pi;

namespace autowig {
}

void wrapper_ba25f6fe677652cebd40b6aed2762b5a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultinomialSingularDistribution, autowig::HolderType< class ::statiskit::MultinomialSingularDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > > class_ba25f6fe677652cebd40b6aed2762b5a(module, "MultinomialSingularDistribution", "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_ba25f6fe677652cebd40b6aed2762b5a.def(pybind11::init< class ::statiskit::MultinomialSingularDistribution const & >());
    class_ba25f6fe677652cebd40b6aed2762b5a.def("get_pi", method_pointer_0eb2e57f88f7522cbd8ce57df2a18a31, pybind11::return_value_policy::copy, "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def("set_pi", method_pointer_9fb5327edbc756a6979e8572e7fc6e90, "");

}