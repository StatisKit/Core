#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_431ab0a81913563e8a2199e34aeb94d0;
            virtual return_type_431ab0a81913563e8a2199e34aeb94d0 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_431ab0a81913563e8a2199e34aeb94d0, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_64dbb43dd673576da853b5fa47a4cd5e;
            virtual return_type_64dbb43dd673576da853b5fa47a4cd5e children() const override { PYBIND11_OVERLOAD(return_type_64dbb43dd673576da853b5fa47a4cd5e, class_type, children, ); };
            typedef double  return_type_39e39a5ba6795282a3c28212fea5c5d7;
            typedef struct ::statiskit::UnivariateDistribution const * param_39e39a5ba6795282a3c28212fea5c5d7_0_type;
            typedef struct ::statiskit::UnivariateData const & param_39e39a5ba6795282a3c28212fea5c5d7_1_type;
            virtual return_type_39e39a5ba6795282a3c28212fea5c5d7 scoring(param_39e39a5ba6795282a3c28212fea5c5d7_0_type param_0, param_39e39a5ba6795282a3c28212fea5c5d7_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_39e39a5ba6795282a3c28212fea5c5d7, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_4220f23a7cfe5f818092feddf6ad9aa9;
            typedef struct ::statiskit::UnivariateData const & param_4220f23a7cfe5f818092feddf6ad9aa9_0_type;
            typedef bool const & param_4220f23a7cfe5f818092feddf6ad9aa9_1_type;
            virtual return_type_4220f23a7cfe5f818092feddf6ad9aa9 operator()(param_4220f23a7cfe5f818092feddf6ad9aa9_0_type param_0, param_4220f23a7cfe5f818092feddf6ad9aa9_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_4220f23a7cfe5f818092feddf6ad9aa9, class_type, operator(), param_0, param_1); };
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

void wrapper_603c48a232f0549ab95e7c0325f6f159(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > class_603c48a232f0549ab95e7c0325f6f159(module, "_PolymorphicCopy_603c48a232f0549ab95e7c0325f6f159", "");
    class_603c48a232f0549ab95e7c0325f6f159.def(pybind11::init<  >());
    class_603c48a232f0549ab95e7c0325f6f159.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}