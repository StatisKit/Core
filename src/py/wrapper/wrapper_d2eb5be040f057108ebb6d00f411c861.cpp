#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_7a2eb6205f06597cb23670c231cfb903;
            typedef struct ::statiskit::DiscreteMultivariateDistribution const * param_7a2eb6205f06597cb23670c231cfb903_0_type;
            typedef struct ::statiskit::MultivariateData const & param_7a2eb6205f06597cb23670c231cfb903_1_type;
            virtual return_type_7a2eb6205f06597cb23670c231cfb903 scoring(param_7a2eb6205f06597cb23670c231cfb903_0_type param_0, param_7a2eb6205f06597cb23670c231cfb903_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_7a2eb6205f06597cb23670c231cfb903, class_type, scoring, param_0, param_1); };

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

void wrapper_d2eb5be040f057108ebb6d00f411c861(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > class_d2eb5be040f057108ebb6d00f411c861(module, "_PolymorphicCopy_d2eb5be040f057108ebb6d00f411c861", "");
    class_d2eb5be040f057108ebb6d00f411c861.def(pybind11::init<  >());
    class_d2eb5be040f057108ebb6d00f411c861.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::DiscreteMultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}