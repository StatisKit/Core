#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_def090d4b953521f8c2bc7b02153b148;
            virtual return_type_def090d4b953521f8c2bc7b02153b148 children() const override { PYBIND11_OVERLOAD(return_type_def090d4b953521f8c2bc7b02153b148, class_type, children, ); };
            typedef double  return_type_d3cc1b08869452229c8e3e4fc5e6e472;
            typedef struct ::statiskit::MultivariateDistribution const * param_d3cc1b08869452229c8e3e4fc5e6e472_0_type;
            typedef struct ::statiskit::MultivariateData const & param_d3cc1b08869452229c8e3e4fc5e6e472_1_type;
            virtual return_type_d3cc1b08869452229c8e3e4fc5e6e472 scoring(param_d3cc1b08869452229c8e3e4fc5e6e472_0_type param_0, param_d3cc1b08869452229c8e3e4fc5e6e472_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_d3cc1b08869452229c8e3e4fc5e6e472, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_84770be1e4c25f1c97c16a5e777cffdf;
            typedef struct ::statiskit::MultivariateData const & param_84770be1e4c25f1c97c16a5e777cffdf_0_type;
            typedef bool const & param_84770be1e4c25f1c97c16a5e777cffdf_1_type;
            virtual return_type_84770be1e4c25f1c97c16a5e777cffdf operator()(param_84770be1e4c25f1c97c16a5e777cffdf_0_type param_0, param_84770be1e4c25f1c97c16a5e777cffdf_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_84770be1e4c25f1c97c16a5e777cffdf, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_20397b66478a59f481c4e33cec98b652;
            virtual return_type_20397b66478a59f481c4e33cec98b652 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_20397b66478a59f481c4e33cec98b652, class_type, copy, ); };
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

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_8a70218c19c85c61a675c59c5e170794)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_057b6efe62bf5455adb4babbd3c6d7b1)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_c18ded6290b358be8850f8d8daae8a6e)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_2ec80de535e75c4e8725ce514b4cdf92)(struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_4e44b3e085ff51c1b0633f02b4bd9988)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_5a3d233a5dc55aaba123c4eb5cd6e502(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > class_5a3d233a5dc55aaba123c4eb5cd6e502(module, "Estimator", "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("__len__", method_pointer_8a70218c19c85c61a675c59c5e170794, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("get_estimator", method_pointer_057b6efe62bf5455adb4babbd3c6d7b1, pybind11::return_value_policy::reference_internal, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("set_estimator", method_pointer_c18ded6290b358be8850f8d8daae8a6e, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("add_estimator", method_pointer_2ec80de535e75c4e8725ce514b4cdf92, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("remove_estimator", method_pointer_4e44b3e085ff51c1b0633f02b4bd9988, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}