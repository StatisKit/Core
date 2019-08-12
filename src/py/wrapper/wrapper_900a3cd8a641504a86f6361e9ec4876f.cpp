#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< unsigned int, ::statiskit::BinomialDistributionEstimation >::*method_pointer_eadab57e83f454b7b3d966fc952f8777)()const= &::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation >::size;
unsigned int const (::statiskit::IterativeEstimation< unsigned int, ::statiskit::BinomialDistributionEstimation >::*method_pointer_f0f6c045127657c59f00b960536eb587)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation >::at_step;

namespace autowig {
}

void wrapper_900a3cd8a641504a86f6361e9ec4876f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation >, autowig::HolderType< class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation > >::Type, struct ::statiskit::BinomialDistributionEstimation > class_900a3cd8a641504a86f6361e9ec4876f(module, "_IterativeEstimation_900a3cd8a641504a86f6361e9ec4876f", "");
    class_900a3cd8a641504a86f6361e9ec4876f.def(pybind11::init< class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation > const & >());
    class_900a3cd8a641504a86f6361e9ec4876f.def("__len__", method_pointer_eadab57e83f454b7b3d966fc952f8777, "");
    class_900a3cd8a641504a86f6361e9ec4876f.def("at_step", method_pointer_f0f6c045127657c59f00b960536eb587, "");

}