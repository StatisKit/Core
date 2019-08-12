#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        public:
            typedef class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > > >  return_type_45ab5c9717535df895abfb6127f37c74;
            typedef struct ::statiskit::MultivariateData const & param_45ab5c9717535df895abfb6127f37c74_0_type;
            typedef ::statiskit::Indices const & param_45ab5c9717535df895abfb6127f37c74_1_type;
            typedef ::statiskit::Indices const & param_45ab5c9717535df895abfb6127f37c74_2_type;
            virtual return_type_45ab5c9717535df895abfb6127f37c74 operator()(param_45ab5c9717535df895abfb6127f37c74_0_type param_0, param_45ab5c9717535df895abfb6127f37c74_1_type param_1, param_45ab5c9717535df895abfb6127f37c74_2_type param_2) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_45ab5c9717535df895abfb6127f37c74, class_type, operator(), param_0, param_1, param_2); };

        protected:
            typedef class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > > >  return_type_eb1bba57f46d5e84ae7593c48145dae1;
            typedef ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::response_data_type const & param_eb1bba57f46d5e84ae7593c48145dae1_0_type;
            typedef ::statiskit::explanatory_data_type const & param_eb1bba57f46d5e84ae7593c48145dae1_1_type;
            virtual return_type_eb1bba57f46d5e84ae7593c48145dae1 operator()(param_eb1bba57f46d5e84ae7593c48145dae1_0_type param_0, param_eb1bba57f46d5e84ae7593c48145dae1_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_eb1bba57f46d5e84ae7593c48145dae1, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::Estimator > >  return_type_e0f51277c2d15a7b848e5e67281ff6ad;
            virtual return_type_e0f51277c2d15a7b848e5e67281ff6ad copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0f51277c2d15a7b848e5e67281ff6ad, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::operator();
    };
}


namespace autowig {
}

void wrapper_4bb662287d1550c7b426d928afffbc0f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >::Type, class ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > class_4bb662287d1550c7b426d928afffbc0f(module, "Estimator", "");
    class_4bb662287d1550c7b426d928afffbc0f.def("___call__", static_cast< class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::Estimator::*) (::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::response_data_type const &, ::statiskit::explanatory_data_type const &) const >(&autowig::Publicist::operator()), "");

}