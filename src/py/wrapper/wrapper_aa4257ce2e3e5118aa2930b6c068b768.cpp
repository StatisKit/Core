#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< double, ::statiskit::NegativeMultinomialDistributionEstimation >::*method_pointer_3adbf84f95825693832798a5b58d5cac)()const= &::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeMultinomialDistributionEstimation >::size;
double const (::statiskit::IterativeEstimation< double, ::statiskit::NegativeMultinomialDistributionEstimation >::*method_pointer_d664525489755a6fb556620cc5a71d43)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeMultinomialDistributionEstimation >::at_step;

namespace autowig {
}

void wrapper_aa4257ce2e3e5118aa2930b6c068b768(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeMultinomialDistributionEstimation >, autowig::HolderType< class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeMultinomialDistributionEstimation > >::Type, struct ::statiskit::NegativeMultinomialDistributionEstimation > class_aa4257ce2e3e5118aa2930b6c068b768(module, "_IterativeEstimation_aa4257ce2e3e5118aa2930b6c068b768", "");
    class_aa4257ce2e3e5118aa2930b6c068b768.def(pybind11::init< class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeMultinomialDistributionEstimation > const & >());
    class_aa4257ce2e3e5118aa2930b6c068b768.def("__len__", method_pointer_3adbf84f95825693832798a5b58d5cac, "");
    class_aa4257ce2e3e5118aa2930b6c068b768.def("at_step", method_pointer_d664525489755a6fb556620cc5a71d43, "");

}