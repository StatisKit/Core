#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateConditionalDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateConditionalDistributionEstimation::Estimator::Estimator;

            typedef class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > > >  return_type_2e84d0444d9f5eb29e764d81a82e587c;
            typedef struct ::statiskit::MultivariateData const & param_2e84d0444d9f5eb29e764d81a82e587c_0_type;
            typedef ::statiskit::Index const & param_2e84d0444d9f5eb29e764d81a82e587c_1_type;
            typedef ::statiskit::Indices const & param_2e84d0444d9f5eb29e764d81a82e587c_2_type;
            virtual return_type_2e84d0444d9f5eb29e764d81a82e587c operator()(param_2e84d0444d9f5eb29e764d81a82e587c_0_type param_0, param_2e84d0444d9f5eb29e764d81a82e587c_1_type param_1, param_2e84d0444d9f5eb29e764d81a82e587c_2_type param_2) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_2e84d0444d9f5eb29e764d81a82e587c, class_type, operator(), param_0, param_1, param_2); };
            typedef class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > > >  return_type_d18d2511347f5c78ba04fd10700b87ec;
            typedef ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::response_data_type const & param_d18d2511347f5c78ba04fd10700b87ec_0_type;
            typedef ::statiskit::explanatory_data_type const & param_d18d2511347f5c78ba04fd10700b87ec_1_type;
            virtual return_type_d18d2511347f5c78ba04fd10700b87ec operator()(param_d18d2511347f5c78ba04fd10700b87ec_0_type param_0, param_d18d2511347f5c78ba04fd10700b87ec_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_d18d2511347f5c78ba04fd10700b87ec, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator > >  return_type_030642c36da6500fb2e89aacc274d46b;
            virtual return_type_030642c36da6500fb2e89aacc274d46b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_030642c36da6500fb2e89aacc274d46b, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::operator();
    };
}

class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > > >  (::statiskit::UnivariateConditionalDistributionEstimation::Estimator::*method_pointer_2e84d0444d9f5eb29e764d81a82e587c)(struct ::statiskit::MultivariateData const &, ::statiskit::Index const &, ::statiskit::Indices const &)const= &::statiskit::UnivariateConditionalDistributionEstimation::Estimator::operator();

namespace autowig {
}

void wrapper_8dcb38f525415f5eb16b5b180a314eab(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type, class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator > class_8dcb38f525415f5eb16b5b180a314eab(module, "Estimator", "");
    class_8dcb38f525415f5eb16b5b180a314eab.def(pybind11::init<  >());
    class_8dcb38f525415f5eb16b5b180a314eab.def("__call__", method_pointer_2e84d0444d9f5eb29e764d81a82e587c, "");
    class_8dcb38f525415f5eb16b5b180a314eab.def("___call__", static_cast< class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::Estimator::*) (::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::response_data_type const &, ::statiskit::explanatory_data_type const &) const >(&autowig::Publicist::operator()), "");

}