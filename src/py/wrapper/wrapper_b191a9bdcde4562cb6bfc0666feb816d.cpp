#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_c93b6deaf5ac5c9c8019576650d00ef6;
            virtual return_type_c93b6deaf5ac5c9c8019576650d00ef6 children() const override { PYBIND11_OVERLOAD(return_type_c93b6deaf5ac5c9c8019576650d00ef6, class_type, children, ); };
            typedef double  return_type_9a2b587d8c785568a61d786f1bf14a8d;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_9a2b587d8c785568a61d786f1bf14a8d_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_9a2b587d8c785568a61d786f1bf14a8d_1_type;
            virtual return_type_9a2b587d8c785568a61d786f1bf14a8d scoring(param_9a2b587d8c785568a61d786f1bf14a8d_0_type param_0, param_9a2b587d8c785568a61d786f1bf14a8d_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_9a2b587d8c785568a61d786f1bf14a8d, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_7f7d8d4a95a053b7a1804b1f6d9aa937;
            typedef class ::statiskit::MultivariateConditionalData const & param_7f7d8d4a95a053b7a1804b1f6d9aa937_0_type;
            typedef bool const & param_7f7d8d4a95a053b7a1804b1f6d9aa937_1_type;
            virtual return_type_7f7d8d4a95a053b7a1804b1f6d9aa937 operator()(param_7f7d8d4a95a053b7a1804b1f6d9aa937_0_type param_0, param_7f7d8d4a95a053b7a1804b1f6d9aa937_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_7f7d8d4a95a053b7a1804b1f6d9aa937, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_59986b4f11705d0e8aa830dfb22c3798;
            virtual return_type_59986b4f11705d0e8aa830dfb22c3798 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_59986b4f11705d0e8aa830dfb22c3798, class_type, copy, ); };
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

::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_04ab084b79a455b693e64f489c453b2d)()const= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_ddcbf68804c25e6eb53c74ef3ffb5c6f)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_06ea3744ff195b1e825286bf5ed0a859)(::statiskit::Index const &, struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_afbb8fda8a9058e7ae26aec284e566c9)(struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_2666deeec9645437b6197d6e4c198f2f)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_b191a9bdcde4562cb6bfc0666feb816d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > class_b191a9bdcde4562cb6bfc0666feb816d(module, "Estimator", "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("__len__", method_pointer_04ab084b79a455b693e64f489c453b2d, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("get_estimator", method_pointer_ddcbf68804c25e6eb53c74ef3ffb5c6f, pybind11::return_value_policy::reference_internal, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("set_estimator", method_pointer_06ea3744ff195b1e825286bf5ed0a859, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("add_estimator", method_pointer_afbb8fda8a9058e7ae26aec284e566c9, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("remove_estimator", method_pointer_2666deeec9645437b6197d6e4c198f2f, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}