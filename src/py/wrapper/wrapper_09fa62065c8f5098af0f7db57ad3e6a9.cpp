#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_744f08fdf88a5deb9ed150b0a6582da2;
            typedef struct ::statiskit::SingularDistribution const * param_744f08fdf88a5deb9ed150b0a6582da2_0_type;
            typedef struct ::statiskit::MultivariateData const & param_744f08fdf88a5deb9ed150b0a6582da2_1_type;
            virtual return_type_744f08fdf88a5deb9ed150b0a6582da2 scoring(param_744f08fdf88a5deb9ed150b0a6582da2_0_type param_0, param_744f08fdf88a5deb9ed150b0a6582da2_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_744f08fdf88a5deb9ed150b0a6582da2, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_09fa62065c8f5098af0f7db57ad3e6a9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > class_09fa62065c8f5098af0f7db57ad3e6a9(module, "_PolymorphicCopy_09fa62065c8f5098af0f7db57ad3e6a9", "");
    class_09fa62065c8f5098af0f7db57ad3e6a9.def(pybind11::init<  >());
    class_09fa62065c8f5098af0f7db57ad3e6a9.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*) (struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}