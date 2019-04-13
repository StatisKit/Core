#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_6b9c5246bc7c5b2390495090a05fd9b1;
            virtual return_type_6b9c5246bc7c5b2390495090a05fd9b1 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_6b9c5246bc7c5b2390495090a05fd9b1, class_type, copy, ); };
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


namespace autowig {
}

void wrapper_f76f62b9f79a5f43900330c071ce00fb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator > class_f76f62b9f79a5f43900330c071ce00fb(module, "_PolymorphicCopy_f76f62b9f79a5f43900330c071ce00fb", "");
    class_f76f62b9f79a5f43900330c071ce00fb.def(pybind11::init<  >());
    class_f76f62b9f79a5f43900330c071ce00fb.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}