#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< double, ::statiskit::NegativeBinomialDistributionEstimation >::*method_pointer_a4fd62de5c5d5bd69f18b2b68bb05a20)()const= &::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation >::size;
double const (::statiskit::IterativeEstimation< double, ::statiskit::NegativeBinomialDistributionEstimation >::*method_pointer_5bbcb54f096d55b2b119768e63b68af6)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation >::at_step;

namespace autowig {
}

void wrapper_9b7e68a17ff659d28c8a9d6250229442(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation >, autowig::HolderType< class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation > >::Type, struct ::statiskit::NegativeBinomialDistributionEstimation > class_9b7e68a17ff659d28c8a9d6250229442(module, "_IterativeEstimation_9b7e68a17ff659d28c8a9d6250229442", "");
    class_9b7e68a17ff659d28c8a9d6250229442.def(pybind11::init< class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation > const & >());
    class_9b7e68a17ff659d28c8a9d6250229442.def("__len__", method_pointer_a4fd62de5c5d5bd69f18b2b68bb05a20, "");
    class_9b7e68a17ff659d28c8a9d6250229442.def("at_step", method_pointer_5bbcb54f096d55b2b119768e63b68af6, "");

}