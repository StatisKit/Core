#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_b628a3a5c0785787839ff6ada564c85d;
            typedef struct ::statiskit::ContinuousMultivariateDistribution const * param_b628a3a5c0785787839ff6ada564c85d_0_type;
            typedef struct ::statiskit::MultivariateData const & param_b628a3a5c0785787839ff6ada564c85d_1_type;
            virtual return_type_b628a3a5c0785787839ff6ada564c85d scoring(param_b628a3a5c0785787839ff6ada564c85d_0_type param_0, param_b628a3a5c0785787839ff6ada564c85d_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_b628a3a5c0785787839ff6ada564c85d, class_type, scoring, param_0, param_1); };

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

void wrapper_80abf3b31d59572db1c8566cad592e92(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > class_80abf3b31d59572db1c8566cad592e92(module, "_PolymorphicCopy_80abf3b31d59572db1c8566cad592e92", "");
    class_80abf3b31d59572db1c8566cad592e92.def(pybind11::init<  >());
    class_80abf3b31d59572db1c8566cad592e92.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::ContinuousMultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}