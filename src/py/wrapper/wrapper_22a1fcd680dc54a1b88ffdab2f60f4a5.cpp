#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_46f16d5140fa5510a7b1b2288f37a965;
            virtual return_type_46f16d5140fa5510a7b1b2288f37a965 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_46f16d5140fa5510a7b1b2288f37a965, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_381c73e64ead5c259f146f94a515f23e;
            virtual return_type_381c73e64ead5c259f146f94a515f23e children() const override { PYBIND11_OVERLOAD(return_type_381c73e64ead5c259f146f94a515f23e, class_type, children, ); };
            typedef double  return_type_3f32a8595a7457cdb1730a938df93a52;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_3f32a8595a7457cdb1730a938df93a52_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_3f32a8595a7457cdb1730a938df93a52_1_type;
            virtual return_type_3f32a8595a7457cdb1730a938df93a52 scoring(param_3f32a8595a7457cdb1730a938df93a52_0_type param_0, param_3f32a8595a7457cdb1730a938df93a52_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_3f32a8595a7457cdb1730a938df93a52, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_80471378b41d5fb2852383905e389ae8;
            typedef class ::statiskit::MultivariateConditionalData const & param_80471378b41d5fb2852383905e389ae8_0_type;
            typedef bool const & param_80471378b41d5fb2852383905e389ae8_1_type;
            virtual return_type_80471378b41d5fb2852383905e389ae8 operator()(param_80471378b41d5fb2852383905e389ae8_0_type param_0, param_80471378b41d5fb2852383905e389ae8_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_80471378b41d5fb2852383905e389ae8, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::children;
            using class_type::scoring;
            using class_type::identifier;
    };
}


namespace autowig {
}

void wrapper_22a1fcd680dc54a1b88ffdab2f60f4a5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator > class_22a1fcd680dc54a1b88ffdab2f60f4a5(module, "_PolymorphicCopy_22a1fcd680dc54a1b88ffdab2f60f4a5", "");
    class_22a1fcd680dc54a1b88ffdab2f60f4a5.def(pybind11::init<  >());
    class_22a1fcd680dc54a1b88ffdab2f60f4a5.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}