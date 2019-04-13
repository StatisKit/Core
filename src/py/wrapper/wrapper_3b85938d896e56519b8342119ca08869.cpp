#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_211930b4467c5394b7933fdf64c94e73;
            virtual return_type_211930b4467c5394b7933fdf64c94e73 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_211930b4467c5394b7933fdf64c94e73, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_1b474f5a5e7a5dc3894e485ae0076666;
            virtual return_type_1b474f5a5e7a5dc3894e485ae0076666 children() const override { PYBIND11_OVERLOAD(return_type_1b474f5a5e7a5dc3894e485ae0076666, class_type, children, ); };
            typedef double  return_type_75c720739866535bb74aece0734d68b3;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_75c720739866535bb74aece0734d68b3_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_75c720739866535bb74aece0734d68b3_1_type;
            virtual return_type_75c720739866535bb74aece0734d68b3 scoring(param_75c720739866535bb74aece0734d68b3_0_type param_0, param_75c720739866535bb74aece0734d68b3_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_75c720739866535bb74aece0734d68b3, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_76b103f5f72b5db48313a44c94356068;
            typedef class ::statiskit::MultivariateConditionalData const & param_76b103f5f72b5db48313a44c94356068_0_type;
            typedef bool const & param_76b103f5f72b5db48313a44c94356068_1_type;
            virtual return_type_76b103f5f72b5db48313a44c94356068 operator()(param_76b103f5f72b5db48313a44c94356068_0_type param_0, param_76b103f5f72b5db48313a44c94356068_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_76b103f5f72b5db48313a44c94356068, class_type, operator(), param_0, param_1); };
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

void wrapper_3b85938d896e56519b8342119ca08869(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator > class_3b85938d896e56519b8342119ca08869(module, "_PolymorphicCopy_3b85938d896e56519b8342119ca08869", "");
    class_3b85938d896e56519b8342119ca08869.def(pybind11::init<  >());
    class_3b85938d896e56519b8342119ca08869.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}