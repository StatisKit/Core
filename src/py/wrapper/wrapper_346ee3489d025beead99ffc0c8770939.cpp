#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

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
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };
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

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d2667e9b67005a438b7ac1df1fc16889)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d4439334c78255789ad4fae657e51987)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_dbe69e5ee0bf5a41aacdda29626d1a4e)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_de2857cfb7f95083849d5ba76a6d37a2)(struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_2e71c69036445fb9b45284b1b7289763)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_346ee3489d025beead99ffc0c8770939(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > class_346ee3489d025beead99ffc0c8770939(module, "Estimator", "");
    class_346ee3489d025beead99ffc0c8770939.def("__len__", method_pointer_d2667e9b67005a438b7ac1df1fc16889, "");
    class_346ee3489d025beead99ffc0c8770939.def("get_estimator", method_pointer_d4439334c78255789ad4fae657e51987, pybind11::return_value_policy::reference_internal, "");
    class_346ee3489d025beead99ffc0c8770939.def("set_estimator", method_pointer_dbe69e5ee0bf5a41aacdda29626d1a4e, "");
    class_346ee3489d025beead99ffc0c8770939.def("add_estimator", method_pointer_de2857cfb7f95083849d5ba76a6d37a2, "");
    class_346ee3489d025beead99ffc0c8770939.def("remove_estimator", method_pointer_2e71c69036445fb9b45284b1b7289763, "");
    class_346ee3489d025beead99ffc0c8770939.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}