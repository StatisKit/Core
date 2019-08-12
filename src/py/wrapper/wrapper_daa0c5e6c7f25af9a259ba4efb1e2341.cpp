#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_80a600fe385250ceae032fc84893a1fc;
            typedef struct ::statiskit::MultivariateDistribution const * param_80a600fe385250ceae032fc84893a1fc_0_type;
            typedef struct ::statiskit::MultivariateData const & param_80a600fe385250ceae032fc84893a1fc_1_type;
            virtual return_type_80a600fe385250ceae032fc84893a1fc scoring(param_80a600fe385250ceae032fc84893a1fc_0_type param_0, param_80a600fe385250ceae032fc84893a1fc_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_80a600fe385250ceae032fc84893a1fc, class_type, scoring, param_0, param_1); };

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

void wrapper_daa0c5e6c7f25af9a259ba4efb1e2341(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator > class_daa0c5e6c7f25af9a259ba4efb1e2341(module, "_PolymorphicCopy_daa0c5e6c7f25af9a259ba4efb1e2341", "");
    class_daa0c5e6c7f25af9a259ba4efb1e2341.def(pybind11::init<  >());
    class_daa0c5e6c7f25af9a259ba4efb1e2341.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}