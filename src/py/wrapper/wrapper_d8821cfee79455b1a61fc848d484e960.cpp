#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef double  return_type_7b493f2698fd576a9919c7b753746d82;
            typedef struct ::statiskit::CategoricalMultivariateDistribution const * param_7b493f2698fd576a9919c7b753746d82_0_type;
            typedef struct ::statiskit::MultivariateData const & param_7b493f2698fd576a9919c7b753746d82_1_type;
            virtual return_type_7b493f2698fd576a9919c7b753746d82 scoring(param_7b493f2698fd576a9919c7b753746d82_0_type param_0, param_7b493f2698fd576a9919c7b753746d82_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_7b493f2698fd576a9919c7b753746d82, class_type, scoring, param_0, param_1); };

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

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_c9296e5c0ec15b43aed07fd2db329322)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::size;
class ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_3477ce542a21525b8c2a5d652f28488a)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_0988c3f248fe5cc5b4ca0fade795b1b0)(::statiskit::Index const &, class ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_f45c37f1453a55d28e88d14f9e69e414)(class ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_d591e49891e7532ab8b6739dcf77bd12)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_d8821cfee79455b1a61fc848d484e960(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > class_d8821cfee79455b1a61fc848d484e960(module, "Estimator", "");
    class_d8821cfee79455b1a61fc848d484e960.def(pybind11::init<  >());
    class_d8821cfee79455b1a61fc848d484e960.def("__len__", method_pointer_c9296e5c0ec15b43aed07fd2db329322, "");
    class_d8821cfee79455b1a61fc848d484e960.def("get_estimator", method_pointer_3477ce542a21525b8c2a5d652f28488a, pybind11::return_value_policy::reference_internal, "");
    class_d8821cfee79455b1a61fc848d484e960.def("set_estimator", method_pointer_0988c3f248fe5cc5b4ca0fade795b1b0, "");
    class_d8821cfee79455b1a61fc848d484e960.def("add_estimator", method_pointer_f45c37f1453a55d28e88d14f9e69e414, "");
    class_d8821cfee79455b1a61fc848d484e960.def("remove_estimator", method_pointer_d591e49891e7532ab8b6739dcf77bd12, "");
    class_d8821cfee79455b1a61fc848d484e960.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::CategoricalMultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}