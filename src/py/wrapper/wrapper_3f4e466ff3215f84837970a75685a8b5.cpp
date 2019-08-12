#include "_core.h"

::statiskit::Index  (::statiskit::IterativeEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::*method_pointer_0b796b6e89f15cbb9090f14c63e63232)()const= &::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::size;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::IterativeEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::*method_pointer_4bf892f74f37565caa90562c080a10a8)(::statiskit::Index const &)const= &::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::at_step;

namespace autowig {
}

void wrapper_3f4e466ff3215f84837970a75685a8b5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, autowig::HolderType< class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > class_3f4e466ff3215f84837970a75685a8b5(module, "_IterativeEstimation_3f4e466ff3215f84837970a75685a8b5", "");
    class_3f4e466ff3215f84837970a75685a8b5.def(pybind11::init< class ::statiskit::IterativeEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > const & >());
    class_3f4e466ff3215f84837970a75685a8b5.def("__len__", method_pointer_0b796b6e89f15cbb9090f14c63e63232, "");
    class_3f4e466ff3215f84837970a75685a8b5.def("at_step", method_pointer_4bf892f74f37565caa90562c080a10a8, "");

}