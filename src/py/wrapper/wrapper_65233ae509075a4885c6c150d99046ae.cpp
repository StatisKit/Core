#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

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
            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  return_type_8b02691f7b535adda732068708b90596;
            virtual return_type_8b02691f7b535adda732068708b90596 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8b02691f7b535adda732068708b90596, class_type, copy, ); };
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

::statiskit::Index  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_a0c9a82c65995967a70e9b22f105ae17)()const= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::size;
struct ::statiskit::SingularDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_0d2bc6a52ba1565ea265832d78542f65)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_a12f9b73b5085a6181e99fee1afce5a1)(::statiskit::Index const &, struct ::statiskit::SingularDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_215deeba5eef51bdbc3e7da8f73608ea)(struct ::statiskit::SingularDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_c732d7a5b1c052edaf245bf716818973)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_65233ae509075a4885c6c150d99046ae(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type, struct ::statiskit::SingularDistributionEstimation::Estimator > class_65233ae509075a4885c6c150d99046ae(module, "Estimator", "");
    class_65233ae509075a4885c6c150d99046ae.def("__len__", method_pointer_a0c9a82c65995967a70e9b22f105ae17, "");
    class_65233ae509075a4885c6c150d99046ae.def("get_estimator", method_pointer_0d2bc6a52ba1565ea265832d78542f65, pybind11::return_value_policy::reference_internal, "");
    class_65233ae509075a4885c6c150d99046ae.def("set_estimator", method_pointer_a12f9b73b5085a6181e99fee1afce5a1, "");
    class_65233ae509075a4885c6c150d99046ae.def("add_estimator", method_pointer_215deeba5eef51bdbc3e7da8f73608ea, "");
    class_65233ae509075a4885c6c150d99046ae.def("remove_estimator", method_pointer_c732d7a5b1c052edaf245bf716818973, "");
    class_65233ae509075a4885c6c150d99046ae.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*) (struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}