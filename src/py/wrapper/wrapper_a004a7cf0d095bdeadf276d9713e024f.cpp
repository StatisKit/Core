#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalMultivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::CategoricalMultivariateConditionalDistributionEstimation;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_d983a7f463755e8dbd136e8296970fe7;
            virtual return_type_d983a7f463755e8dbd136e8296970fe7 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_d983a7f463755e8dbd136e8296970fe7, class_type, copy, ); };
            typedef ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * return_type_84032d21ab6f50bd8e28510f7cd5494f;
            virtual return_type_84032d21ab6f50bd8e28510f7cd5494f get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_84032d21ab6f50bd8e28510f7cd5494f, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_a004a7cf0d095bdeadf276d9713e024f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation > class_a004a7cf0d095bdeadf276d9713e024f(module, "CategoricalMultivariateConditionalDistributionEstimation", "");

}