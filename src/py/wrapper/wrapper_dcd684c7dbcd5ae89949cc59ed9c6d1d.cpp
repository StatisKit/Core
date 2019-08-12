#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef double  return_type_80a600fe385250ceae032fc84893a1fc;
            typedef struct ::statiskit::MultivariateDistribution const * param_80a600fe385250ceae032fc84893a1fc_0_type;
            typedef struct ::statiskit::MultivariateData const & param_80a600fe385250ceae032fc84893a1fc_1_type;
            virtual return_type_80a600fe385250ceae032fc84893a1fc scoring(param_80a600fe385250ceae032fc84893a1fc_0_type param_0, param_80a600fe385250ceae032fc84893a1fc_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_80a600fe385250ceae032fc84893a1fc, class_type, scoring, param_0, param_1); };

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

::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_f13fa4966f25551dada3f4692c449082)()const= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::MultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_f8c80d7449f75e8cbc7d529769e0ec45)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_d73640e6a881501284670465fad43c8b)(::statiskit::Index const &, struct ::statiskit::MultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_ec4a87f941ea5a29b23059276d4e9f8b)(struct ::statiskit::MultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_7a34ddbefac35c1e91d52e8a17ebd90d)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_dcd684c7dbcd5ae89949cc59ed9c6d1d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::MultivariateDistributionEstimation::Estimator > class_dcd684c7dbcd5ae89949cc59ed9c6d1d(module, "Estimator", "");
    class_dcd684c7dbcd5ae89949cc59ed9c6d1d.def(pybind11::init<  >());
    class_dcd684c7dbcd5ae89949cc59ed9c6d1d.def("__len__", method_pointer_f13fa4966f25551dada3f4692c449082, "");
    class_dcd684c7dbcd5ae89949cc59ed9c6d1d.def("get_estimator", method_pointer_f8c80d7449f75e8cbc7d529769e0ec45, pybind11::return_value_policy::reference_internal, "");
    class_dcd684c7dbcd5ae89949cc59ed9c6d1d.def("set_estimator", method_pointer_d73640e6a881501284670465fad43c8b, "");
    class_dcd684c7dbcd5ae89949cc59ed9c6d1d.def("add_estimator", method_pointer_ec4a87f941ea5a29b23059276d4e9f8b, "");
    class_dcd684c7dbcd5ae89949cc59ed9c6d1d.def("remove_estimator", method_pointer_7a34ddbefac35c1e91d52e8a17ebd90d, "");
    class_dcd684c7dbcd5ae89949cc59ed9c6d1d.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::MultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}