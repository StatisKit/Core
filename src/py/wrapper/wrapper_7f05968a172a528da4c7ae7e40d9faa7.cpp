#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::Estimator::Estimator;

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

class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::Estimator::*method_pointer_030642c36da6500fb2e89aacc274d46b)()const= &::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator::copy;

namespace autowig {
}

void wrapper_7f05968a172a528da4c7ae7e40d9faa7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::Estimator >::Type > class_7f05968a172a528da4c7ae7e40d9faa7(module, "Estimator", "");
    class_7f05968a172a528da4c7ae7e40d9faa7.def(pybind11::init<  >());
    class_7f05968a172a528da4c7ae7e40d9faa7.def("copy", method_pointer_030642c36da6500fb2e89aacc274d46b, "");
    class_7f05968a172a528da4c7ae7e40d9faa7.def("___call__", static_cast< class ::std::unique_ptr< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >, struct ::std::default_delete< class ::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution > > >  (::statiskit::ConditionalDistributionEstimation< ::statiskit::UnivariateConditionalDistribution >::Estimator::*) (::statiskit::ConditionalDistributionEstimation< struct ::statiskit::UnivariateConditionalDistribution >::response_data_type const &, ::statiskit::explanatory_data_type const &) const >(&autowig::Publicist::operator()), "");

}