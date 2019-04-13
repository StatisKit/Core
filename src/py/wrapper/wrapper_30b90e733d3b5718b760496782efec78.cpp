#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_f8b834cb036053208f0363c03de22f19;
            virtual return_type_f8b834cb036053208f0363c03de22f19 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_f8b834cb036053208f0363c03de22f19, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_ca4ace19940e584a9d9874ea517d3698;
            virtual return_type_ca4ace19940e584a9d9874ea517d3698 children() const override { PYBIND11_OVERLOAD(return_type_ca4ace19940e584a9d9874ea517d3698, class_type, children, ); };
            typedef double  return_type_26031caefebc58d18c7e0990c9c8afcd;
            typedef struct ::statiskit::UnivariateDistribution const * param_26031caefebc58d18c7e0990c9c8afcd_0_type;
            typedef struct ::statiskit::UnivariateData const & param_26031caefebc58d18c7e0990c9c8afcd_1_type;
            virtual return_type_26031caefebc58d18c7e0990c9c8afcd scoring(param_26031caefebc58d18c7e0990c9c8afcd_0_type param_0, param_26031caefebc58d18c7e0990c9c8afcd_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_26031caefebc58d18c7e0990c9c8afcd, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_b373cbbc64b45c8399cc598cb190014c;
            typedef struct ::statiskit::UnivariateData const & param_b373cbbc64b45c8399cc598cb190014c_0_type;
            typedef bool const & param_b373cbbc64b45c8399cc598cb190014c_1_type;
            virtual return_type_b373cbbc64b45c8399cc598cb190014c operator()(param_b373cbbc64b45c8399cc598cb190014c_0_type param_0, param_b373cbbc64b45c8399cc598cb190014c_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_b373cbbc64b45c8399cc598cb190014c, class_type, operator(), param_0, param_1); };
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

void wrapper_30b90e733d3b5718b760496782efec78(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > class_30b90e733d3b5718b760496782efec78(module, "_PolymorphicCopy_30b90e733d3b5718b760496782efec78", "");
    class_30b90e733d3b5718b760496782efec78.def(pybind11::init<  >());
    class_30b90e733d3b5718b760496782efec78.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}