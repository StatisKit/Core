#include "_core.h"


namespace autowig {
}

void wrapper_b487f4fc27725338b969ff43c4c8f4e4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultinomialSingularDistributionEstimation, autowig::HolderType< struct ::statiskit::MultinomialSingularDistributionEstimation >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultinomialSingularDistributionEstimation, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > > class_b487f4fc27725338b969ff43c4c8f4e4(module, "MultinomialSingularDistributionEstimation", "");
    class_b487f4fc27725338b969ff43c4c8f4e4.def(pybind11::init<  >());
    class_b487f4fc27725338b969ff43c4c8f4e4.def(pybind11::init< struct ::statiskit::MultinomialSingularDistributionEstimation const & >());

}