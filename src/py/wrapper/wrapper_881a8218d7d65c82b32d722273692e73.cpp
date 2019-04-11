#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_59986b4f11705d0e8aa830dfb22c3798;
            virtual return_type_59986b4f11705d0e8aa830dfb22c3798 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_59986b4f11705d0e8aa830dfb22c3798, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_2459c2d8b66758a8a5e14c538955ee4e;
            typedef ::statiskit::MultivariateConditionalDistributionEstimation::data_type const & param_2459c2d8b66758a8a5e14c538955ee4e_0_type;
            typedef bool const & param_2459c2d8b66758a8a5e14c538955ee4e_1_type;
            virtual return_type_2459c2d8b66758a8a5e14c538955ee4e operator()(param_2459c2d8b66758a8a5e14c538955ee4e_0_type param_0, param_2459c2d8b66758a8a5e14c538955ee4e_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_2459c2d8b66758a8a5e14c538955ee4e, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}


namespace autowig {
}

void wrapper_881a8218d7d65c82b32d722273692e73(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > class_881a8218d7d65c82b32d722273692e73(module, "Estimator", "");

}