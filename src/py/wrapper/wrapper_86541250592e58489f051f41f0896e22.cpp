#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_5ff7db9761e15a5f9e6244d676d443a8;
            virtual return_type_5ff7db9761e15a5f9e6244d676d443a8 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_5ff7db9761e15a5f9e6244d676d443a8, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_55e0ad648dde5414b320fb3f17e3b500;
            virtual return_type_55e0ad648dde5414b320fb3f17e3b500 children() const override { PYBIND11_OVERLOAD(return_type_55e0ad648dde5414b320fb3f17e3b500, class_type, children, ); };
            typedef double  return_type_f6b66ca1311054b080ca6398a959c4fa;
            typedef struct ::statiskit::UnivariateConditionalDistribution const * param_f6b66ca1311054b080ca6398a959c4fa_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_f6b66ca1311054b080ca6398a959c4fa_1_type;
            virtual return_type_f6b66ca1311054b080ca6398a959c4fa scoring(param_f6b66ca1311054b080ca6398a959c4fa_0_type param_0, param_f6b66ca1311054b080ca6398a959c4fa_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_f6b66ca1311054b080ca6398a959c4fa, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_2469a2ca1bd45c5a8b42e6c0c7ce051f;
            typedef class ::statiskit::UnivariateConditionalData const & param_2469a2ca1bd45c5a8b42e6c0c7ce051f_0_type;
            typedef bool const & param_2469a2ca1bd45c5a8b42e6c0c7ce051f_1_type;
            virtual return_type_2469a2ca1bd45c5a8b42e6c0c7ce051f operator()(param_2469a2ca1bd45c5a8b42e6c0c7ce051f_0_type param_0, param_2469a2ca1bd45c5a8b42e6c0c7ce051f_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_2469a2ca1bd45c5a8b42e6c0c7ce051f, class_type, operator(), param_0, param_1); };
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

void wrapper_86541250592e58489f051f41f0896e22(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_86541250592e58489f051f41f0896e22(module, "_PolymorphicCopy_86541250592e58489f051f41f0896e22", "");
    class_86541250592e58489f051f41f0896e22.def(pybind11::init<  >());
    class_86541250592e58489f051f41f0896e22.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}