#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalUnivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::CategoricalUnivariateConditionalDistributionEstimation;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_7d21d7a9db0b54beb12be25dbd45dc87;
            virtual return_type_7d21d7a9db0b54beb12be25dbd45dc87 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7d21d7a9db0b54beb12be25dbd45dc87, class_type, copy, ); };

        public:
            typedef ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * return_type_c18e0a4c85e9560fa63a48b370681cca;
            virtual return_type_c18e0a4c85e9560fa63a48b370681cca get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_c18e0a4c85e9560fa63a48b370681cca, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_9b52bf3c9c595cdb890173a39b0d02c4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Type, struct ::statiskit::UnivariateConditionalDistributionEstimation > class_9b52bf3c9c595cdb890173a39b0d02c4(module, "CategoricalUnivariateConditionalDistributionEstimation", "");

}