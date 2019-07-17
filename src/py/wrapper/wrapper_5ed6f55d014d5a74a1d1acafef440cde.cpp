#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< unsigned int, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_a74cb2405bc152ebabe44883247057ce)()const= &::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;
unsigned int const (::statiskit::IterativeEstimation< unsigned int, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_3959405db584517a8238c988a5f67a83)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::at_step;

namespace autowig {
}

void wrapper_5ed6f55d014d5a74a1d1acafef440cde(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_5ed6f55d014d5a74a1d1acafef440cde(module, "_IterativeEstimation_5ed6f55d014d5a74a1d1acafef440cde", "");
    class_5ed6f55d014d5a74a1d1acafef440cde.def(pybind11::init< class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_5ed6f55d014d5a74a1d1acafef440cde.def("__len__", method_pointer_a74cb2405bc152ebabe44883247057ce, "");
    class_5ed6f55d014d5a74a1d1acafef440cde.def("at_step", method_pointer_3959405db584517a8238c988a5f67a83, "");

}