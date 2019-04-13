#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_c2857e0629345afa858086d561ab4c94;
            virtual return_type_c2857e0629345afa858086d561ab4c94 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c2857e0629345afa858086d561ab4c94, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_1863dd311c78529ba677c48bf437e4ae;
            virtual return_type_1863dd311c78529ba677c48bf437e4ae children() const override { PYBIND11_OVERLOAD(return_type_1863dd311c78529ba677c48bf437e4ae, class_type, children, ); };
            typedef double  return_type_aadfe73fd9155a8e9db0f0d0e48799bc;
            typedef struct ::statiskit::MultivariateDistribution const * param_aadfe73fd9155a8e9db0f0d0e48799bc_0_type;
            typedef struct ::statiskit::MultivariateData const & param_aadfe73fd9155a8e9db0f0d0e48799bc_1_type;
            virtual return_type_aadfe73fd9155a8e9db0f0d0e48799bc scoring(param_aadfe73fd9155a8e9db0f0d0e48799bc_0_type param_0, param_aadfe73fd9155a8e9db0f0d0e48799bc_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_aadfe73fd9155a8e9db0f0d0e48799bc, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_de7728a150a556b98a0ec15352d19c55;
            typedef struct ::statiskit::MultivariateData const & param_de7728a150a556b98a0ec15352d19c55_0_type;
            typedef bool const & param_de7728a150a556b98a0ec15352d19c55_1_type;
            virtual return_type_de7728a150a556b98a0ec15352d19c55 operator()(param_de7728a150a556b98a0ec15352d19c55_0_type param_0, param_de7728a150a556b98a0ec15352d19c55_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_de7728a150a556b98a0ec15352d19c55, class_type, operator(), param_0, param_1); };
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

void wrapper_48bccb3a91fe5cebbca2f6105b37b2c5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > class_48bccb3a91fe5cebbca2f6105b37b2c5(module, "_PolymorphicCopy_48bccb3a91fe5cebbca2f6105b37b2c5", "");
    class_48bccb3a91fe5cebbca2f6105b37b2c5.def(pybind11::init<  >());
    class_48bccb3a91fe5cebbca2f6105b37b2c5.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}