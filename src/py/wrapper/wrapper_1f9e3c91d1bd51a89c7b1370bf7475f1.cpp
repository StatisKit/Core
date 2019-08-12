#include "_core.h"


namespace autowig {
}

void wrapper_1f9e3c91d1bd51a89c7b1370bf7475f1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, autowig::HolderType< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, class ::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > > > class_1f9e3c91d1bd51a89c7b1370bf7475f1(module, "Estimator", "");
    class_1f9e3c91d1bd51a89c7b1370bf7475f1.def(pybind11::init<  >());
    class_1f9e3c91d1bd51a89c7b1370bf7475f1.def(pybind11::init< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator const & >());

}