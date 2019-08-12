#include "_core.h"


namespace autowig {
}

void wrapper_7e4c2f85b93b5cc399280098492de425(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation, class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation, class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > > >::Type, class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > > class_7e4c2f85b93b5cc399280098492de425(module, "_PolymorphicCopy_7e4c2f85b93b5cc399280098492de425", "");
    class_7e4c2f85b93b5cc399280098492de425.def(pybind11::init<  >());
    class_7e4c2f85b93b5cc399280098492de425.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation, class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > > const & >());

}