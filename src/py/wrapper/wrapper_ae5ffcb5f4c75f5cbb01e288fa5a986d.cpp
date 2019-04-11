#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DiscreteUnivariateDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DiscreteUnivariateDistributionEstimation::DiscreteUnivariateDistributionEstimation;


        public:
            typedef ::statiskit::UnivariateDistributionEstimation::estimated_type const * return_type_bd794e40246350b583a72b6a11ca75d8;
            virtual return_type_bd794e40246350b583a72b6a11ca75d8 get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_bd794e40246350b583a72b6a11ca75d8, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_ae5ffcb5f4c75f5cbb01e288fa5a986d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteUnivariateDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type, struct ::statiskit::UnivariateDistributionEstimation > class_ae5ffcb5f4c75f5cbb01e288fa5a986d(module, "DiscreteUnivariateDistributionEstimation", "");

}