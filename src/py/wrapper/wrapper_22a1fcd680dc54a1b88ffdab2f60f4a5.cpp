#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_3f32a8595a7457cdb1730a938df93a52;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_3f32a8595a7457cdb1730a938df93a52_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_3f32a8595a7457cdb1730a938df93a52_1_type;
            virtual return_type_3f32a8595a7457cdb1730a938df93a52 scoring(param_3f32a8595a7457cdb1730a938df93a52_0_type param_0, param_3f32a8595a7457cdb1730a938df93a52_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_3f32a8595a7457cdb1730a938df93a52, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_22a1fcd680dc54a1b88ffdab2f60f4a5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator > class_22a1fcd680dc54a1b88ffdab2f60f4a5(module, "_PolymorphicCopy_22a1fcd680dc54a1b88ffdab2f60f4a5", "");
    class_22a1fcd680dc54a1b88ffdab2f60f4a5.def(pybind11::init<  >());
    class_22a1fcd680dc54a1b88ffdab2f60f4a5.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}