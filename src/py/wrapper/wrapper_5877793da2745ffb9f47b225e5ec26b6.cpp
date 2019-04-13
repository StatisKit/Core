#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_053e767a390652988ee6da6fefa3ee5e;
            virtual return_type_053e767a390652988ee6da6fefa3ee5e copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_053e767a390652988ee6da6fefa3ee5e, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_def090d4b953521f8c2bc7b02153b148;
            virtual return_type_def090d4b953521f8c2bc7b02153b148 children() const override { PYBIND11_OVERLOAD(return_type_def090d4b953521f8c2bc7b02153b148, class_type, children, ); };
            typedef double  return_type_d3cc1b08869452229c8e3e4fc5e6e472;
            typedef struct ::statiskit::MultivariateDistribution const * param_d3cc1b08869452229c8e3e4fc5e6e472_0_type;
            typedef struct ::statiskit::MultivariateData const & param_d3cc1b08869452229c8e3e4fc5e6e472_1_type;
            virtual return_type_d3cc1b08869452229c8e3e4fc5e6e472 scoring(param_d3cc1b08869452229c8e3e4fc5e6e472_0_type param_0, param_d3cc1b08869452229c8e3e4fc5e6e472_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_d3cc1b08869452229c8e3e4fc5e6e472, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_84770be1e4c25f1c97c16a5e777cffdf;
            typedef struct ::statiskit::MultivariateData const & param_84770be1e4c25f1c97c16a5e777cffdf_0_type;
            typedef bool const & param_84770be1e4c25f1c97c16a5e777cffdf_1_type;
            virtual return_type_84770be1e4c25f1c97c16a5e777cffdf operator()(param_84770be1e4c25f1c97c16a5e777cffdf_0_type param_0, param_84770be1e4c25f1c97c16a5e777cffdf_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_84770be1e4c25f1c97c16a5e777cffdf, class_type, operator(), param_0, param_1); };
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

void wrapper_5877793da2745ffb9f47b225e5ec26b6(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > class_5877793da2745ffb9f47b225e5ec26b6(module, "_PolymorphicCopy_5877793da2745ffb9f47b225e5ec26b6", "");
    class_5877793da2745ffb9f47b225e5ec26b6.def(pybind11::init<  >());
    class_5877793da2745ffb9f47b225e5ec26b6.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}