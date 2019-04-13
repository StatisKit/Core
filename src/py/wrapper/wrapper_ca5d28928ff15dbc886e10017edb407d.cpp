#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_83006002ee8051fbae55f45fd302b03c;
            virtual return_type_83006002ee8051fbae55f45fd302b03c copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_83006002ee8051fbae55f45fd302b03c, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_c82d383b9d4b56a280155ae882087ecb;
            virtual return_type_c82d383b9d4b56a280155ae882087ecb children() const override { PYBIND11_OVERLOAD(return_type_c82d383b9d4b56a280155ae882087ecb, class_type, children, ); };
            typedef double  return_type_eb86c0375a50572bbae183092f4fdcaa;
            typedef struct ::statiskit::MultivariateDistribution const * param_eb86c0375a50572bbae183092f4fdcaa_0_type;
            typedef struct ::statiskit::MultivariateData const & param_eb86c0375a50572bbae183092f4fdcaa_1_type;
            virtual return_type_eb86c0375a50572bbae183092f4fdcaa scoring(param_eb86c0375a50572bbae183092f4fdcaa_0_type param_0, param_eb86c0375a50572bbae183092f4fdcaa_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_eb86c0375a50572bbae183092f4fdcaa, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_f61beef9632f5847b38c805656a4a479;
            typedef struct ::statiskit::MultivariateData const & param_f61beef9632f5847b38c805656a4a479_0_type;
            typedef bool const & param_f61beef9632f5847b38c805656a4a479_1_type;
            virtual return_type_f61beef9632f5847b38c805656a4a479 operator()(param_f61beef9632f5847b38c805656a4a479_0_type param_0, param_f61beef9632f5847b38c805656a4a479_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_f61beef9632f5847b38c805656a4a479, class_type, operator(), param_0, param_1); };
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

void wrapper_ca5d28928ff15dbc886e10017edb407d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > class_ca5d28928ff15dbc886e10017edb407d(module, "_PolymorphicCopy_ca5d28928ff15dbc886e10017edb407d", "");
    class_ca5d28928ff15dbc886e10017edb407d.def(pybind11::init<  >());
    class_ca5d28928ff15dbc886e10017edb407d.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}