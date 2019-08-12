#include "_core.h"


namespace autowig {
}

void wrapper_57facc3e421b57a98d33df52929292ad(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation > > >::Type, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation > > class_57facc3e421b57a98d33df52929292ad(module, "_PolymorphicCopy_57facc3e421b57a98d33df52929292ad", "");
    class_57facc3e421b57a98d33df52929292ad.def(pybind11::init<  >());
    class_57facc3e421b57a98d33df52929292ad.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< unsigned int, struct ::statiskit::BinomialDistributionEstimation > > const & >());

}