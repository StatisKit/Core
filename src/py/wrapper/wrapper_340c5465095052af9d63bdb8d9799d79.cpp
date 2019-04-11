#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateDistributionEstimation::UnivariateDistributionEstimation;


        public:
            typedef ::statiskit::UnivariateDistributionEstimation::estimated_type const * return_type_bd794e40246350b583a72b6a11ca75d8;
            virtual return_type_bd794e40246350b583a72b6a11ca75d8 get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_bd794e40246350b583a72b6a11ca75d8, class_type, get_estimated, ); };
    };
}

::statiskit::UnivariateDistributionEstimation::estimated_type const * (::statiskit::UnivariateDistributionEstimation::*method_pointer_bd794e40246350b583a72b6a11ca75d8)()const= &::statiskit::UnivariateDistributionEstimation::get_estimated;

namespace autowig {
}

void wrapper_340c5465095052af9d63bdb8d9799d79(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateDistributionEstimation >::Type > class_340c5465095052af9d63bdb8d9799d79(module, "UnivariateDistributionEstimation", "");
    class_340c5465095052af9d63bdb8d9799d79.def("get_estimated", method_pointer_bd794e40246350b583a72b6a11ca75d8, pybind11::return_value_policy::reference_internal, "");

}