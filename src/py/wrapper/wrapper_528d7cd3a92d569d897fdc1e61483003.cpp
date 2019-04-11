#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_a8793d7694b85cea8bead585bebfa116;
            typedef struct ::statiskit::UnivariateConditionalDistribution const * param_a8793d7694b85cea8bead585bebfa116_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_a8793d7694b85cea8bead585bebfa116_1_type;
            virtual return_type_a8793d7694b85cea8bead585bebfa116 scoring(param_a8793d7694b85cea8bead585bebfa116_0_type param_0, param_a8793d7694b85cea8bead585bebfa116_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_a8793d7694b85cea8bead585bebfa116, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
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