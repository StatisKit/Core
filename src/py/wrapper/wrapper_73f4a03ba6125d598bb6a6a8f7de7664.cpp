#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

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
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_59986b4f11705d0e8aa830dfb22c3798;
            virtual return_type_59986b4f11705d0e8aa830dfb22c3798 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_59986b4f11705d0e8aa830dfb22c3798, class_type, copy, ); };
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

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_c402748d2cab5e21a1f757e2c6d42c30)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_04cbf63a882c577cbaedece0977b3f06)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_1e1f9feb5de151d487d37d04f23903af)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_097be74e909e59baa2be813e4fcc1e91)(struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_93d565997abe5f4f88a7ea3a6c859f11)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_73f4a03ba6125d598bb6a6a8f7de7664(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator > class_73f4a03ba6125d598bb6a6a8f7de7664(module, "Estimator", "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("__len__", method_pointer_c402748d2cab5e21a1f757e2c6d42c30, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("get_estimator", method_pointer_04cbf63a882c577cbaedece0977b3f06, pybind11::return_value_policy::reference_internal, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("set_estimator", method_pointer_1e1f9feb5de151d487d37d04f23903af, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("add_estimator", method_pointer_097be74e909e59baa2be813e4fcc1e91, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("remove_estimator", method_pointer_93d565997abe5f4f88a7ea3a6c859f11, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}