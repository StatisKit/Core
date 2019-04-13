#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_32372a30c33c5afe84773c34bf9d184a;
            virtual return_type_32372a30c33c5afe84773c34bf9d184a copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_32372a30c33c5afe84773c34bf9d184a, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_3e4097cae0375266a0709347ead82e61;
            virtual return_type_3e4097cae0375266a0709347ead82e61 children() const override { PYBIND11_OVERLOAD(return_type_3e4097cae0375266a0709347ead82e61, class_type, children, ); };
            typedef double  return_type_12fcf7e5c7655bf5b274be86d31f722f;
            typedef struct ::statiskit::UnivariateDistribution const * param_12fcf7e5c7655bf5b274be86d31f722f_0_type;
            typedef struct ::statiskit::UnivariateData const & param_12fcf7e5c7655bf5b274be86d31f722f_1_type;
            virtual return_type_12fcf7e5c7655bf5b274be86d31f722f scoring(param_12fcf7e5c7655bf5b274be86d31f722f_0_type param_0, param_12fcf7e5c7655bf5b274be86d31f722f_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_12fcf7e5c7655bf5b274be86d31f722f, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_c8606a3cba185cad9d37a5abb14ab63d;
            typedef struct ::statiskit::UnivariateData const & param_c8606a3cba185cad9d37a5abb14ab63d_0_type;
            typedef bool const & param_c8606a3cba185cad9d37a5abb14ab63d_1_type;
            virtual return_type_c8606a3cba185cad9d37a5abb14ab63d operator()(param_c8606a3cba185cad9d37a5abb14ab63d_0_type param_0, param_c8606a3cba185cad9d37a5abb14ab63d_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c8606a3cba185cad9d37a5abb14ab63d, class_type, operator(), param_0, param_1); };
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

void wrapper_c64f8514180b56eabe5b4d197177f547(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > class_c64f8514180b56eabe5b4d197177f547(module, "_PolymorphicCopy_c64f8514180b56eabe5b4d197177f547", "");
    class_c64f8514180b56eabe5b4d197177f547.def(pybind11::init<  >());
    class_c64f8514180b56eabe5b4d197177f547.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}