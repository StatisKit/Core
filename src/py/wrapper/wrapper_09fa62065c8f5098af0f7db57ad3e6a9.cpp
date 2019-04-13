#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  return_type_9bf4a42ed922526b8a2d3061d558d03c;
            virtual return_type_9bf4a42ed922526b8a2d3061d558d03c copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_9bf4a42ed922526b8a2d3061d558d03c, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_d4181de1506551d9b4cabd76eecd0c24;
            virtual return_type_d4181de1506551d9b4cabd76eecd0c24 children() const override { PYBIND11_OVERLOAD(return_type_d4181de1506551d9b4cabd76eecd0c24, class_type, children, ); };
            typedef double  return_type_744f08fdf88a5deb9ed150b0a6582da2;
            typedef struct ::statiskit::SingularDistribution const * param_744f08fdf88a5deb9ed150b0a6582da2_0_type;
            typedef struct ::statiskit::MultivariateData const & param_744f08fdf88a5deb9ed150b0a6582da2_1_type;
            virtual return_type_744f08fdf88a5deb9ed150b0a6582da2 scoring(param_744f08fdf88a5deb9ed150b0a6582da2_0_type param_0, param_744f08fdf88a5deb9ed150b0a6582da2_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_744f08fdf88a5deb9ed150b0a6582da2, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  return_type_38bec538cb785ba8a98ef67b225e42e1;
            typedef struct ::statiskit::MultivariateData const & param_38bec538cb785ba8a98ef67b225e42e1_0_type;
            typedef bool const & param_38bec538cb785ba8a98ef67b225e42e1_1_type;
            virtual return_type_38bec538cb785ba8a98ef67b225e42e1 operator()(param_38bec538cb785ba8a98ef67b225e42e1_0_type param_0, param_38bec538cb785ba8a98ef67b225e42e1_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_38bec538cb785ba8a98ef67b225e42e1, class_type, operator(), param_0, param_1); };
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

void wrapper_09fa62065c8f5098af0f7db57ad3e6a9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > class_09fa62065c8f5098af0f7db57ad3e6a9(module, "_PolymorphicCopy_09fa62065c8f5098af0f7db57ad3e6a9", "");
    class_09fa62065c8f5098af0f7db57ad3e6a9.def(pybind11::init<  >());
    class_09fa62065c8f5098af0f7db57ad3e6a9.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*) (struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}