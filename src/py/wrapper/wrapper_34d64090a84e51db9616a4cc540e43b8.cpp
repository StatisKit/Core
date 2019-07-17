#include "_core.h"


namespace autowig {
}

void wrapper_34d64090a84e51db9616a4cc540e43b8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedUnivariateData, autowig::HolderType< class ::statiskit::WeightedUnivariateData >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > > class_34d64090a84e51db9616a4cc540e43b8(module, "WeightedUnivariateData", "");
    class_34d64090a84e51db9616a4cc540e43b8.def(pybind11::init< class ::statiskit::WeightedUnivariateData const & >());

}