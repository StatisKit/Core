#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::Estimator::Estimator;


        protected:
            typedef void  return_type_9922ed8b4e6d52969dede35f73d6a80e;
            typedef ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::response_data_type const & param_9922ed8b4e6d52969dede35f73d6a80e_0_type;
            virtual return_type_9922ed8b4e6d52969dede35f73d6a80e check(param_9922ed8b4e6d52969dede35f73d6a80e_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_9922ed8b4e6d52969dede35f73d6a80e, class_type, check, param_0); };

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
            using class_type::check;
            using class_type::operator();
    };
}

class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::Estimator > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::Estimator::*method_pointer_e0f51277c2d15a7b848e5e67281ff6ad)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::Estimator::copy;

namespace autowig {
}

void wrapper_663730845d925082a43337bf446ebf00(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::Estimator >::Type > class_663730845d925082a43337bf446ebf00(module, "Estimator", "");
    class_663730845d925082a43337bf446ebf00.def(pybind11::init<  >());
    class_663730845d925082a43337bf446ebf00.def("copy", method_pointer_e0f51277c2d15a7b848e5e67281ff6ad, "");
    class_663730845d925082a43337bf446ebf00.def("_check", static_cast< void  (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::Estimator::*) (::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::response_data_type const &) const >(&autowig::Publicist::check), "");
    class_663730845d925082a43337bf446ebf00.def("___call__", static_cast< class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution > > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::MultivariateConditionalDistribution >::Estimator::*) (::statiskit::ConditionalDistributionEstimation< struct ::statiskit::MultivariateConditionalDistribution >::response_data_type const &, ::statiskit::explanatory_data_type const &) const >(&autowig::Publicist::operator()), "");

}