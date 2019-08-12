#include "_core.h"


namespace autowig {
}

void wrapper_5562b8b01aa050b886b919c9b81686f5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DirichletMultinomialSingularDistributionEstimation, autowig::HolderType< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation, class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > > > class_5562b8b01aa050b886b919c9b81686f5(module, "DirichletMultinomialSingularDistributionEstimation", "");
    class_5562b8b01aa050b886b919c9b81686f5.def(pybind11::init<  >());
    class_5562b8b01aa050b886b919c9b81686f5.def(pybind11::init< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation const & >());

}