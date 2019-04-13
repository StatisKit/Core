#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_b29f44482fce5d5ea16b45d1fa08f72f;
            virtual return_type_b29f44482fce5d5ea16b45d1fa08f72f children() const override { PYBIND11_OVERLOAD(return_type_b29f44482fce5d5ea16b45d1fa08f72f, class_type, children, ); };
            typedef double  return_type_a8793d7694b85cea8bead585bebfa116;
            typedef struct ::statiskit::UnivariateConditionalDistribution const * param_a8793d7694b85cea8bead585bebfa116_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_a8793d7694b85cea8bead585bebfa116_1_type;
            virtual return_type_a8793d7694b85cea8bead585bebfa116 scoring(param_a8793d7694b85cea8bead585bebfa116_0_type param_0, param_a8793d7694b85cea8bead585bebfa116_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_a8793d7694b85cea8bead585bebfa116, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_baf7c2d76c92553aa86016acc595e461;
            typedef class ::statiskit::UnivariateConditionalData const & param_baf7c2d76c92553aa86016acc595e461_0_type;
            typedef bool const & param_baf7c2d76c92553aa86016acc595e461_1_type;
            virtual return_type_baf7c2d76c92553aa86016acc595e461 operator()(param_baf7c2d76c92553aa86016acc595e461_0_type param_0, param_baf7c2d76c92553aa86016acc595e461_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_baf7c2d76c92553aa86016acc595e461, class_type, operator(), param_0, param_1); };
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

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_b802ccc39dcd5c0e835211836ab7d59d)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e274930ea2dc5ab1bc443203a08ceddc)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_50b5354942d657baa64f803083675e1d)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d3aa394a479f5aec8684a5608ca72448)(struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_6dd5e7e30c8252828df26a594edfa560)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_1bbe231bce835ebeb36da82ccdeb5997(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > class_1bbe231bce835ebeb36da82ccdeb5997(module, "Estimator", "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("__len__", method_pointer_b802ccc39dcd5c0e835211836ab7d59d, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("get_estimator", method_pointer_e274930ea2dc5ab1bc443203a08ceddc, pybind11::return_value_policy::reference_internal, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("set_estimator", method_pointer_50b5354942d657baa64f803083675e1d, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("add_estimator", method_pointer_d3aa394a479f5aec8684a5608ca72448, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("remove_estimator", method_pointer_6dd5e7e30c8252828df26a594edfa560, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}