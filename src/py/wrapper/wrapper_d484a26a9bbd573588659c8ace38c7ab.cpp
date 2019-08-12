#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef double  return_type_b628a3a5c0785787839ff6ada564c85d;
            typedef struct ::statiskit::ContinuousMultivariateDistribution const * param_b628a3a5c0785787839ff6ada564c85d_0_type;
            typedef struct ::statiskit::MultivariateData const & param_b628a3a5c0785787839ff6ada564c85d_1_type;
            virtual return_type_b628a3a5c0785787839ff6ada564c85d scoring(param_b628a3a5c0785787839ff6ada564c85d_0_type param_0, param_b628a3a5c0785787839ff6ada564c85d_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_b628a3a5c0785787839ff6ada564c85d, class_type, scoring, param_0, param_1); };

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

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_6cad53fd45fa5d4db1e9f856df3513b9)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::size;
class ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_f3760e5e89d951d38584522f675e6c0e)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_e5e834b031b15e679bf638cd21b5d4d0)(::statiskit::Index const &, class ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_39b9b7155bb95667994b39fa66c5a141)(class ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_4d2ca4226de057348b0aa1637db78ad6)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_d484a26a9bbd573588659c8ace38c7ab(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > class_d484a26a9bbd573588659c8ace38c7ab(module, "Estimator", "");
    class_d484a26a9bbd573588659c8ace38c7ab.def(pybind11::init<  >());
    class_d484a26a9bbd573588659c8ace38c7ab.def("__len__", method_pointer_6cad53fd45fa5d4db1e9f856df3513b9, "");
    class_d484a26a9bbd573588659c8ace38c7ab.def("get_estimator", method_pointer_f3760e5e89d951d38584522f675e6c0e, pybind11::return_value_policy::reference_internal, "");
    class_d484a26a9bbd573588659c8ace38c7ab.def("set_estimator", method_pointer_e5e834b031b15e679bf638cd21b5d4d0, "");
    class_d484a26a9bbd573588659c8ace38c7ab.def("add_estimator", method_pointer_39b9b7155bb95667994b39fa66c5a141, "");
    class_d484a26a9bbd573588659c8ace38c7ab.def("remove_estimator", method_pointer_4d2ca4226de057348b0aa1637db78ad6, "");
    class_d484a26a9bbd573588659c8ace38c7ab.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::ContinuousMultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}