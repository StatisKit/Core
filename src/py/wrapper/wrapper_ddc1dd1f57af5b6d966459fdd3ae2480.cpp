#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_8f1ca79a82965d5faaad8f93d5e9b64d;
            virtual return_type_8f1ca79a82965d5faaad8f93d5e9b64d copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_8f1ca79a82965d5faaad8f93d5e9b64d, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_9999fc2bd8f15416a9ec2e208b75bf21;
            virtual return_type_9999fc2bd8f15416a9ec2e208b75bf21 children() const override { PYBIND11_OVERLOAD(return_type_9999fc2bd8f15416a9ec2e208b75bf21, class_type, children, ); };
            typedef double  return_type_c519765f3eb4568bb10f0646a34c14b6;
            typedef struct ::statiskit::MultivariateDistribution const * param_c519765f3eb4568bb10f0646a34c14b6_0_type;
            typedef struct ::statiskit::MultivariateData const & param_c519765f3eb4568bb10f0646a34c14b6_1_type;
            virtual return_type_c519765f3eb4568bb10f0646a34c14b6 scoring(param_c519765f3eb4568bb10f0646a34c14b6_0_type param_0, param_c519765f3eb4568bb10f0646a34c14b6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_c519765f3eb4568bb10f0646a34c14b6, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_02527c5c82cc503cbe70c6e8ed180111;
            typedef struct ::statiskit::MultivariateData const & param_02527c5c82cc503cbe70c6e8ed180111_0_type;
            typedef bool const & param_02527c5c82cc503cbe70c6e8ed180111_1_type;
            virtual return_type_02527c5c82cc503cbe70c6e8ed180111 operator()(param_02527c5c82cc503cbe70c6e8ed180111_0_type param_0, param_02527c5c82cc503cbe70c6e8ed180111_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_02527c5c82cc503cbe70c6e8ed180111, class_type, operator(), param_0, param_1); };
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

void wrapper_ddc1dd1f57af5b6d966459fdd3ae2480(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > class_ddc1dd1f57af5b6d966459fdd3ae2480(module, "_PolymorphicCopy_ddc1dd1f57af5b6d966459fdd3ae2480", "");
    class_ddc1dd1f57af5b6d966459fdd3ae2480.def(pybind11::init<  >());
    class_ddc1dd1f57af5b6d966459fdd3ae2480.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}