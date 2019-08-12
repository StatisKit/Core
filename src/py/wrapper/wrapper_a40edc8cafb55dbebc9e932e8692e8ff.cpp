#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< double, ::statiskit::LogarithmicDistributionEstimation >::*method_pointer_aa871b3b073e5337a9b3b6d7b0d3b43d)()const= &::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation >::size;
double const (::statiskit::IterativeEstimation< double, ::statiskit::LogarithmicDistributionEstimation >::*method_pointer_0a7d2f3ec0d75a16ae4b787dff31cdb9)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation >::at_step;

namespace autowig {
}

void wrapper_a40edc8cafb55dbebc9e932e8692e8ff(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation >, autowig::HolderType< class ::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation > >::Type, struct ::statiskit::LogarithmicDistributionEstimation > class_a40edc8cafb55dbebc9e932e8692e8ff(module, "_IterativeEstimation_a40edc8cafb55dbebc9e932e8692e8ff", "");
    class_a40edc8cafb55dbebc9e932e8692e8ff.def(pybind11::init< class ::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation > const & >());
    class_a40edc8cafb55dbebc9e932e8692e8ff.def("__len__", method_pointer_aa871b3b073e5337a9b3b6d7b0d3b43d, "");
    class_a40edc8cafb55dbebc9e932e8692e8ff.def("at_step", method_pointer_0a7d2f3ec0d75a16ae4b787dff31cdb9, "");

}