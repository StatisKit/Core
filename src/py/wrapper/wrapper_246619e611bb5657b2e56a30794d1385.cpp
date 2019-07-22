#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Optimization;

            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_47877b68ac8c5802b57686bea7f9f547;
            typedef struct ::statiskit::MultivariateData const & param_47877b68ac8c5802b57686bea7f9f547_0_type;
            typedef ::statiskit::Index const & param_47877b68ac8c5802b57686bea7f9f547_1_type;
            virtual return_type_47877b68ac8c5802b57686bea7f9f547 operator()(param_47877b68ac8c5802b57686bea7f9f547_0_type param_0, param_47877b68ac8c5802b57686bea7f9f547_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_47877b68ac8c5802b57686bea7f9f547, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_f5006c7de7595cf1b83e7502ffda0880;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::data_type const & param_f5006c7de7595cf1b83e7502ffda0880_0_type;
            virtual return_type_f5006c7de7595cf1b83e7502ffda0880 operator()(param_f5006c7de7595cf1b83e7502ffda0880_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f5006c7de7595cf1b83e7502ffda0880, class_type, operator(), param_0); };
    };
}

double const & (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_74ff405766cc5b229ff106dfa000469b)()const= &::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_f2b24cec192b517fa70bcf750bd9d2e0)(double const &)= &::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_c2fed247fa98516190a1c160f3e695ed)()const= &::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_e10cbfb82fc857468fd5b631874bd804)(unsigned int const &)= &::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_0c89a8c5a137562c8a95dc5094acb405)()const= &::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_df3a8407ccfa5147a64e2d0fdc613ccc)(unsigned int const &)= &::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_246619e611bb5657b2e56a30794d1385(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_246619e611bb5657b2e56a30794d1385(module, "_Optimization_246619e611bb5657b2e56a30794d1385", "");
    class_246619e611bb5657b2e56a30794d1385.def(pybind11::init<  >());
    class_246619e611bb5657b2e56a30794d1385.def("get_mindiff", method_pointer_74ff405766cc5b229ff106dfa000469b, pybind11::return_value_policy::copy, "");
    class_246619e611bb5657b2e56a30794d1385.def("set_mindiff", method_pointer_f2b24cec192b517fa70bcf750bd9d2e0, "");
    class_246619e611bb5657b2e56a30794d1385.def("get_minits", method_pointer_c2fed247fa98516190a1c160f3e695ed, "");
    class_246619e611bb5657b2e56a30794d1385.def("set_minits", method_pointer_e10cbfb82fc857468fd5b631874bd804, "");
    class_246619e611bb5657b2e56a30794d1385.def("get_maxits", method_pointer_0c89a8c5a137562c8a95dc5094acb405, "");
    class_246619e611bb5657b2e56a30794d1385.def("set_maxits", method_pointer_df3a8407ccfa5147a64e2d0fdc613ccc, "");

}