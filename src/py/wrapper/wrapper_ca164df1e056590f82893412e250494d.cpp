#include "_core.h"


namespace autowig {
}

void wrapper_ca164df1e056590f82893412e250494d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateDistributionEstimation > class_ca164df1e056590f82893412e250494d(module, "_PolymorphicCopy_ca164df1e056590f82893412e250494d", "");
    class_ca164df1e056590f82893412e250494d.def(pybind11::init<  >());
    class_ca164df1e056590f82893412e250494d.def(pybind11::init< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());

}