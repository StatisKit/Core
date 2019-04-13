#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_78031971f0705ffc86e8634f03598d07;
            virtual return_type_78031971f0705ffc86e8634f03598d07 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_78031971f0705ffc86e8634f03598d07, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_cc937d079d9f5df3a0af0c0ca425c038;
            virtual return_type_cc937d079d9f5df3a0af0c0ca425c038 children() const override { PYBIND11_OVERLOAD(return_type_cc937d079d9f5df3a0af0c0ca425c038, class_type, children, ); };
            typedef double  return_type_940068d2d5d8523a8df7122dfde4f21b;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_940068d2d5d8523a8df7122dfde4f21b_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_940068d2d5d8523a8df7122dfde4f21b_1_type;
            virtual return_type_940068d2d5d8523a8df7122dfde4f21b scoring(param_940068d2d5d8523a8df7122dfde4f21b_0_type param_0, param_940068d2d5d8523a8df7122dfde4f21b_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_940068d2d5d8523a8df7122dfde4f21b, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_5f6f3f47feaa581a85333748c4736bcf;
            typedef class ::statiskit::MultivariateConditionalData const & param_5f6f3f47feaa581a85333748c4736bcf_0_type;
            typedef bool const & param_5f6f3f47feaa581a85333748c4736bcf_1_type;
            virtual return_type_5f6f3f47feaa581a85333748c4736bcf operator()(param_5f6f3f47feaa581a85333748c4736bcf_0_type param_0, param_5f6f3f47feaa581a85333748c4736bcf_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_5f6f3f47feaa581a85333748c4736bcf, class_type, operator(), param_0, param_1); };
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

void wrapper_58960b7597495bb78bb15e0b1e8c9de8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > class_58960b7597495bb78bb15e0b1e8c9de8(module, "_PolymorphicCopy_58960b7597495bb78bb15e0b1e8c9de8", "");
    class_58960b7597495bb78bb15e0b1e8c9de8.def(pybind11::init<  >());
    class_58960b7597495bb78bb15e0b1e8c9de8.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}