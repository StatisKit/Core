#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_ac1d2084aec051319f07ccbf56f83bc3;
            virtual return_type_ac1d2084aec051319f07ccbf56f83bc3 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_ac1d2084aec051319f07ccbf56f83bc3, class_type, copy, ); };
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

void wrapper_528d7cd3a92d569d897fdc1e61483003(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > class_528d7cd3a92d569d897fdc1e61483003(module, "_PolymorphicCopy_528d7cd3a92d569d897fdc1e61483003", "");
    class_528d7cd3a92d569d897fdc1e61483003.def(pybind11::init<  >());
    class_528d7cd3a92d569d897fdc1e61483003.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}