#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalUnivariateDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalUnivariateDistributionEstimation::CategoricalUnivariateDistributionEstimation;

            typedef ::statiskit::UnivariateDistributionEstimation::estimated_type const * return_type_bd794e40246350b583a72b6a11ca75d8;
            virtual return_type_bd794e40246350b583a72b6a11ca75d8 get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_bd794e40246350b583a72b6a11ca75d8, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_c4726473069d576fbb9e53aacbf298ea(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalUnivariateDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type, struct ::statiskit::UnivariateDistributionEstimation > class_c4726473069d576fbb9e53aacbf298ea(module, "CategoricalUnivariateDistributionEstimation", "");

}