#include "_core.h"

struct ::statiskit::DiscreteUnivariateDistributionEstimation const * (::statiskit::SplittingDistributionEstimation::*method_pointer_bccbb35dbee556ff9fbc1091f8b19ee2)()const= &::statiskit::SplittingDistributionEstimation::get_sum;
::statiskit::SingularDistributionEstimation const * (::statiskit::SplittingDistributionEstimation::*method_pointer_d64202ea64995935924dc50b87ff7098)()const= &::statiskit::SplittingDistributionEstimation::get_singular;

namespace autowig {
}

void wrapper_0711065322d6598096f4d4546ef589f7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SplittingDistributionEstimation, autowig::HolderType< class ::statiskit::SplittingDistributionEstimation >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::SplittingDistributionEstimation, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_0711065322d6598096f4d4546ef589f7(module, "SplittingDistributionEstimation", "");
    class_0711065322d6598096f4d4546ef589f7.def(pybind11::init< class ::statiskit::SplittingDistributionEstimation const & >());
    class_0711065322d6598096f4d4546ef589f7.def("get_sum", method_pointer_bccbb35dbee556ff9fbc1091f8b19ee2, pybind11::return_value_policy::reference_internal, "");
    class_0711065322d6598096f4d4546ef589f7.def("get_singular", method_pointer_d64202ea64995935924dc50b87ff7098, pybind11::return_value_policy::reference_internal, "");

}