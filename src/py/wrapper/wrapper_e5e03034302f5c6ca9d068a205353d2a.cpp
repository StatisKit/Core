#include "_core.h"


namespace autowig {
}

void wrapper_e5e03034302f5c6ca9d068a205353d2a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeBinomialDistributionMLEstimation, autowig::HolderType< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeBinomialDistributionMLEstimation, class ::statiskit::IterativeEstimation< double, struct ::statiskit::NegativeBinomialDistributionEstimation > > > class_e5e03034302f5c6ca9d068a205353d2a(module, "NegativeBinomialDistributionMLEstimation", "");
    class_e5e03034302f5c6ca9d068a205353d2a.def(pybind11::init<  >());
    class_e5e03034302f5c6ca9d068a205353d2a.def(pybind11::init< struct ::statiskit::NegativeBinomialDistributionMLEstimation const & >());

}