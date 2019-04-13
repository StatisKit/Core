#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalMultivariateDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalMultivariateDistributionEstimation::CategoricalMultivariateDistributionEstimation;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_6b2ddebe29b356369027219f55c1bc79;
            virtual return_type_6b2ddebe29b356369027219f55c1bc79 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_6b2ddebe29b356369027219f55c1bc79, class_type, copy, ); };
            typedef ::statiskit::MultivariateDistributionEstimation::estimated_type const * return_type_123ca6ff048a55c3916851be0f12a662;
            virtual return_type_123ca6ff048a55c3916851be0f12a662 get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_123ca6ff048a55c3916851be0f12a662, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_f09c97b097575bf2b4af254e6faa082c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalMultivariateDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type, struct ::statiskit::MultivariateDistributionEstimation > class_f09c97b097575bf2b4af254e6faa082c(module, "CategoricalMultivariateDistributionEstimation", "");

}