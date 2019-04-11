#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_940068d2d5d8523a8df7122dfde4f21b;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_940068d2d5d8523a8df7122dfde4f21b_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_940068d2d5d8523a8df7122dfde4f21b_1_type;
            virtual return_type_940068d2d5d8523a8df7122dfde4f21b scoring(param_940068d2d5d8523a8df7122dfde4f21b_0_type param_0, param_940068d2d5d8523a8df7122dfde4f21b_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_940068d2d5d8523a8df7122dfde4f21b, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_58960b7597495bb78bb15e0b1e8c9de8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > class_58960b7597495bb78bb15e0b1e8c9de8(module, "_PolymorphicCopy_58960b7597495bb78bb15e0b1e8c9de8", "");
    class_58960b7597495bb78bb15e0b1e8c9de8.def(pybind11::init<  >());
    class_58960b7597495bb78bb15e0b1e8c9de8.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}