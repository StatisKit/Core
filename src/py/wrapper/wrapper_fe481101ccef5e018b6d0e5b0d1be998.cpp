#include "_core.h"


namespace autowig {
}

void wrapper_fe481101ccef5e018b6d0e5b0d1be998(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > class_fe481101ccef5e018b6d0e5b0d1be998(module, "_PolymorphicCopy_fe481101ccef5e018b6d0e5b0d1be998", "");
    class_fe481101ccef5e018b6d0e5b0d1be998.def(pybind11::init<  >());
    class_fe481101ccef5e018b6d0e5b0d1be998.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > const & >());

}