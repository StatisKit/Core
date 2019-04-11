#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_327da71272ea5094808d7deb45c022e6;
            typedef struct ::statiskit::UnivariateConditionalDistribution const * param_327da71272ea5094808d7deb45c022e6_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_327da71272ea5094808d7deb45c022e6_1_type;
            virtual return_type_327da71272ea5094808d7deb45c022e6 scoring(param_327da71272ea5094808d7deb45c022e6_0_type param_0, param_327da71272ea5094808d7deb45c022e6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_327da71272ea5094808d7deb45c022e6, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_681ebebfc39f52e7b797a69c6f165cc7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > class_681ebebfc39f52e7b797a69c6f165cc7(module, "_PolymorphicCopy_681ebebfc39f52e7b797a69c6f165cc7", "");
    class_681ebebfc39f52e7b797a69c6f165cc7.def(pybind11::init<  >());
    class_681ebebfc39f52e7b797a69c6f165cc7.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}