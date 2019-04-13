#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_ca4ace19940e584a9d9874ea517d3698;
            virtual return_type_ca4ace19940e584a9d9874ea517d3698 children() const override { PYBIND11_OVERLOAD(return_type_ca4ace19940e584a9d9874ea517d3698, class_type, children, ); };
            typedef double  return_type_26031caefebc58d18c7e0990c9c8afcd;
            typedef struct ::statiskit::UnivariateDistribution const * param_26031caefebc58d18c7e0990c9c8afcd_0_type;
            typedef struct ::statiskit::UnivariateData const & param_26031caefebc58d18c7e0990c9c8afcd_1_type;
            virtual return_type_26031caefebc58d18c7e0990c9c8afcd scoring(param_26031caefebc58d18c7e0990c9c8afcd_0_type param_0, param_26031caefebc58d18c7e0990c9c8afcd_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_26031caefebc58d18c7e0990c9c8afcd, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_b373cbbc64b45c8399cc598cb190014c;
            typedef struct ::statiskit::UnivariateData const & param_b373cbbc64b45c8399cc598cb190014c_0_type;
            typedef bool const & param_b373cbbc64b45c8399cc598cb190014c_1_type;
            virtual return_type_b373cbbc64b45c8399cc598cb190014c operator()(param_b373cbbc64b45c8399cc598cb190014c_0_type param_0, param_b373cbbc64b45c8399cc598cb190014c_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_b373cbbc64b45c8399cc598cb190014c, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_97c0dcb4b9a55407beb1affee63e5b47;
            virtual return_type_97c0dcb4b9a55407beb1affee63e5b47 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_97c0dcb4b9a55407beb1affee63e5b47, class_type, copy, ); };
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

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_dadf8b529f475bada70e94fa2d10fbf0)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_28de231ff729594dac57dfda306b3b32)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_04cdbc7ec82057368ad722125ac29266)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_fe97198c58045d729542b4e01963ec13)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_4a30e310a40c52158292918774e58316)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_06b2640afe975f8dbf856bb3a88451cf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_06b2640afe975f8dbf856bb3a88451cf(module, "Estimator", "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("__len__", method_pointer_dadf8b529f475bada70e94fa2d10fbf0, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("get_estimator", method_pointer_28de231ff729594dac57dfda306b3b32, pybind11::return_value_policy::reference_internal, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("set_estimator", method_pointer_04cdbc7ec82057368ad722125ac29266, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("add_estimator", method_pointer_fe97198c58045d729542b4e01963ec13, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("remove_estimator", method_pointer_4a30e310a40c52158292918774e58316, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}