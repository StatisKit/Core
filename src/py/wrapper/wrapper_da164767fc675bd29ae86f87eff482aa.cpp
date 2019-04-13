#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DiscreteUnivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::DiscreteUnivariateConditionalDistributionEstimation;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_7d21d7a9db0b54beb12be25dbd45dc87;
            virtual return_type_7d21d7a9db0b54beb12be25dbd45dc87 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7d21d7a9db0b54beb12be25dbd45dc87, class_type, copy, ); };
            typedef ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * return_type_c18e0a4c85e9560fa63a48b370681cca;
            virtual return_type_c18e0a4c85e9560fa63a48b370681cca get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_c18e0a4c85e9560fa63a48b370681cca, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_da164767fc675bd29ae86f87eff482aa(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type, struct ::statiskit::UnivariateConditionalDistributionEstimation > class_da164767fc675bd29ae86f87eff482aa(module, "DiscreteUnivariateConditionalDistributionEstimation", "");

}