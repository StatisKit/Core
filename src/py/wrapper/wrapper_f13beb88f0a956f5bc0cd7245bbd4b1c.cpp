#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousUnivariateDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ContinuousUnivariateDistributionEstimation::ContinuousUnivariateDistributionEstimation;


        public:
            typedef ::statiskit::UnivariateDistributionEstimation::estimated_type const * return_type_bd794e40246350b583a72b6a11ca75d8;
            virtual return_type_bd794e40246350b583a72b6a11ca75d8 get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_bd794e40246350b583a72b6a11ca75d8, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_f13beb88f0a956f5bc0cd7245bbd4b1c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousUnivariateDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type, struct ::statiskit::UnivariateDistributionEstimation > class_f13beb88f0a956f5bc0cd7245bbd4b1c(module, "ContinuousUnivariateDistributionEstimation", "");

}