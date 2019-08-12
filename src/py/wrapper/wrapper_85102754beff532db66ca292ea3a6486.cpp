#include "_core.h"

int const & (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_79ecaaf3284e534fbcf899fbbc0fd104)()const= &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_shift;
void  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_2eda684e77215972afb88b49ca57feaf)(int const &)= &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_shift;
struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_1af1d1186ab55b50aa305ae608cec380)()const= &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_distribution;
void  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_260f8141d2b0502b852fab135b7fb186)(struct ::statiskit::DiscreteUnivariateDistribution const &)= &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_distribution;

namespace autowig {
}

void wrapper_85102754beff532db66ca292ea3a6486(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::HolderType< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution > > class_85102754beff532db66ca292ea3a6486(module, "_ShiftedDistribution_85102754beff532db66ca292ea3a6486", "");
    class_85102754beff532db66ca292ea3a6486.def(pybind11::init< struct ::statiskit::DiscreteUnivariateDistribution const &, int const & >());
    class_85102754beff532db66ca292ea3a6486.def(pybind11::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const & >());
    class_85102754beff532db66ca292ea3a6486.def("get_shift", method_pointer_79ecaaf3284e534fbcf899fbbc0fd104, pybind11::return_value_policy::copy, "");
    class_85102754beff532db66ca292ea3a6486.def("set_shift", method_pointer_2eda684e77215972afb88b49ca57feaf, "");
    class_85102754beff532db66ca292ea3a6486.def("get_distribution", method_pointer_1af1d1186ab55b50aa305ae608cec380, pybind11::return_value_policy::reference_internal, "");
    class_85102754beff532db66ca292ea3a6486.def("set_distribution", method_pointer_260f8141d2b0502b852fab135b7fb186, "");

}