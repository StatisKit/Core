#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef double  return_type_7a2eb6205f06597cb23670c231cfb903;
            typedef struct ::statiskit::DiscreteMultivariateDistribution const * param_7a2eb6205f06597cb23670c231cfb903_0_type;
            typedef struct ::statiskit::MultivariateData const & param_7a2eb6205f06597cb23670c231cfb903_1_type;
            virtual return_type_7a2eb6205f06597cb23670c231cfb903 scoring(param_7a2eb6205f06597cb23670c231cfb903_0_type param_0, param_7a2eb6205f06597cb23670c231cfb903_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_7a2eb6205f06597cb23670c231cfb903, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator > >  return_type_8716d7dc42c752c2907da43ebb6cf7e5;
            virtual return_type_8716d7dc42c752c2907da43ebb6cf7e5 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8716d7dc42c752c2907da43ebb6cf7e5, class_type, copy, ); };

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

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_090690c9f5c25e379ca3f4dcb8978918)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::size;
class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_4f80455338d25d6f867cddad88993fd1)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_fe51419163e853d0a7133a8404642e78)(::statiskit::Index const &, class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_a435c44c8f575532b4b49e04fc157b71)(class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_d59dbeb69fb1502882765fb503abf294)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_ce42b7211004522c9d9271fe72fb3e17(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > class_ce42b7211004522c9d9271fe72fb3e17(module, "Estimator", "");
    class_ce42b7211004522c9d9271fe72fb3e17.def(pybind11::init<  >());
    class_ce42b7211004522c9d9271fe72fb3e17.def("__len__", method_pointer_090690c9f5c25e379ca3f4dcb8978918, "");
    class_ce42b7211004522c9d9271fe72fb3e17.def("get_estimator", method_pointer_4f80455338d25d6f867cddad88993fd1, pybind11::return_value_policy::reference_internal, "");
    class_ce42b7211004522c9d9271fe72fb3e17.def("set_estimator", method_pointer_fe51419163e853d0a7133a8404642e78, "");
    class_ce42b7211004522c9d9271fe72fb3e17.def("add_estimator", method_pointer_a435c44c8f575532b4b49e04fc157b71, "");
    class_ce42b7211004522c9d9271fe72fb3e17.def("remove_estimator", method_pointer_d59dbeb69fb1502882765fb503abf294, "");
    class_ce42b7211004522c9d9271fe72fb3e17.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::DiscreteMultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}