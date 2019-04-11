#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_aadfe73fd9155a8e9db0f0d0e48799bc;
            typedef struct ::statiskit::MultivariateDistribution const * param_aadfe73fd9155a8e9db0f0d0e48799bc_0_type;
            typedef struct ::statiskit::MultivariateData const & param_aadfe73fd9155a8e9db0f0d0e48799bc_1_type;
            virtual return_type_aadfe73fd9155a8e9db0f0d0e48799bc scoring(param_aadfe73fd9155a8e9db0f0d0e48799bc_0_type param_0, param_aadfe73fd9155a8e9db0f0d0e48799bc_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_aadfe73fd9155a8e9db0f0d0e48799bc, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_48bccb3a91fe5cebbca2f6105b37b2c5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > class_48bccb3a91fe5cebbca2f6105b37b2c5(module, "_PolymorphicCopy_48bccb3a91fe5cebbca2f6105b37b2c5", "");
    class_48bccb3a91fe5cebbca2f6105b37b2c5.def(pybind11::init<  >());
    class_48bccb3a91fe5cebbca2f6105b37b2c5.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}