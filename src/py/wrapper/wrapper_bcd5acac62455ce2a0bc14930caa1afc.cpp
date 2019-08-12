#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_7b493f2698fd576a9919c7b753746d82;
            typedef struct ::statiskit::CategoricalMultivariateDistribution const * param_7b493f2698fd576a9919c7b753746d82_0_type;
            typedef struct ::statiskit::MultivariateData const & param_7b493f2698fd576a9919c7b753746d82_1_type;
            virtual return_type_7b493f2698fd576a9919c7b753746d82 scoring(param_7b493f2698fd576a9919c7b753746d82_0_type param_0, param_7b493f2698fd576a9919c7b753746d82_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_7b493f2698fd576a9919c7b753746d82, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_171594468546584aa9e0715c04238dd6;
            typedef struct ::statiskit::MultivariateData const & param_171594468546584aa9e0715c04238dd6_0_type;
            typedef class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & param_171594468546584aa9e0715c04238dd6_1_type;
            virtual return_type_171594468546584aa9e0715c04238dd6 operator()(param_171594468546584aa9e0715c04238dd6_0_type param_0, param_171594468546584aa9e0715c04238dd6_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_171594468546584aa9e0715c04238dd6, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_bcd5acac62455ce2a0bc14930caa1afc(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > class_bcd5acac62455ce2a0bc14930caa1afc(module, "_PolymorphicCopy_bcd5acac62455ce2a0bc14930caa1afc", "");
    class_bcd5acac62455ce2a0bc14930caa1afc.def(pybind11::init<  >());
    class_bcd5acac62455ce2a0bc14930caa1afc.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::CategoricalMultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}