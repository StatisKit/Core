#include "_core.h"


namespace autowig {
}

void wrapper_7bf5d5a1aae855cb858cab0e94be616b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation > > >::Type, class ::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation > > class_7bf5d5a1aae855cb858cab0e94be616b(module, "_PolymorphicCopy_7bf5d5a1aae855cb858cab0e94be616b", "");
    class_7bf5d5a1aae855cb858cab0e94be616b.def(pybind11::init<  >());
    class_7bf5d5a1aae855cb858cab0e94be616b.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::LogarithmicDistributionEstimation > > const & >());

}