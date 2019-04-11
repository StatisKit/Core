#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_75c720739866535bb74aece0734d68b3;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_75c720739866535bb74aece0734d68b3_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_75c720739866535bb74aece0734d68b3_1_type;
            virtual return_type_75c720739866535bb74aece0734d68b3 scoring(param_75c720739866535bb74aece0734d68b3_0_type param_0, param_75c720739866535bb74aece0734d68b3_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_75c720739866535bb74aece0734d68b3, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_3b85938d896e56519b8342119ca08869(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator > class_3b85938d896e56519b8342119ca08869(module, "_PolymorphicCopy_3b85938d896e56519b8342119ca08869", "");
    class_3b85938d896e56519b8342119ca08869.def(pybind11::init<  >());
    class_3b85938d896e56519b8342119ca08869.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}