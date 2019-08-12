#include "_core.h"


namespace autowig {
}

void wrapper_b6605ca6549d54eba3c614d5b6a29235(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NominalDistributionEstimator, autowig::HolderType< class ::statiskit::NominalDistributionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::NominalDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > > class_b6605ca6549d54eba3c614d5b6a29235(module, "NominalDistributionEstimator", "");
    class_b6605ca6549d54eba3c614d5b6a29235.def(pybind11::init<  >());
    class_b6605ca6549d54eba3c614d5b6a29235.def(pybind11::init< class ::statiskit::NominalDistributionEstimator const & >());

}