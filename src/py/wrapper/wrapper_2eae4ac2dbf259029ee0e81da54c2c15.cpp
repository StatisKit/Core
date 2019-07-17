#include "_core.h"


namespace autowig {
}

void wrapper_2eae4ac2dbf259029ee0e81da54c2c15(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, autowig::HolderType< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > > class_2eae4ac2dbf259029ee0e81da54c2c15(module, "Estimator", "");
    class_2eae4ac2dbf259029ee0e81da54c2c15.def(pybind11::init<  >());
    class_2eae4ac2dbf259029ee0e81da54c2c15.def(pybind11::init< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator const & >());

}