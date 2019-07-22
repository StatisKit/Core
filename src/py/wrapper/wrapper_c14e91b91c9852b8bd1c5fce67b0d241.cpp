#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< class ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::CriterionEstimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< class ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::CriterionEstimator::CriterionEstimator;

            typedef double  return_type_844181d50d9e567c896a1b3e4ae33115;
            typedef struct ::statiskit::SingularDistribution const * param_844181d50d9e567c896a1b3e4ae33115_0_type;
            typedef struct ::statiskit::MultivariateData const & param_844181d50d9e567c896a1b3e4ae33115_1_type;
            virtual return_type_844181d50d9e567c896a1b3e4ae33115 scoring(param_844181d50d9e567c896a1b3e4ae33115_0_type param_0, param_844181d50d9e567c896a1b3e4ae33115_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_844181d50d9e567c896a1b3e4ae33115, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > >  return_type_579b178acefc5660adf3ccb09fdbef9d;
            virtual return_type_579b178acefc5660adf3ccb09fdbef9d copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_579b178acefc5660adf3ccb09fdbef9d, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_e63871509e675384a85dc2f7ea740325;
            typedef struct ::statiskit::MultivariateData const & param_e63871509e675384a85dc2f7ea740325_0_type;
            typedef bool const & param_e63871509e675384a85dc2f7ea740325_1_type;
            virtual return_type_e63871509e675384a85dc2f7ea740325 operator()(param_e63871509e675384a85dc2f7ea740325_0_type param_0, param_e63871509e675384a85dc2f7ea740325_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_e63871509e675384a85dc2f7ea740325, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_1b58fb67872859e3906ec2e648200d3c;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::data_type const & param_1b58fb67872859e3906ec2e648200d3c_0_type;
            virtual return_type_1b58fb67872859e3906ec2e648200d3c operator()(param_1b58fb67872859e3906ec2e648200d3c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_1b58fb67872859e3906ec2e648200d3c, class_type, operator(), param_0); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

enum ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::CriterionEstimator::*method_pointer_b44ef74eea0156c2a9e658dcd1081763)()const= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::CriterionEstimator::*method_pointer_ecc46aaf5a885e4588963ddadae0464a)(enum ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_c14e91b91c9852b8bd1c5fce67b0d241(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator > > class_c14e91b91c9852b8bd1c5fce67b0d241(module, "CriterionEstimator", "");
    class_c14e91b91c9852b8bd1c5fce67b0d241.def(pybind11::init<  >());
    class_c14e91b91c9852b8bd1c5fce67b0d241.def("get_criterion", method_pointer_b44ef74eea0156c2a9e658dcd1081763, pybind11::return_value_policy::copy, "");
    class_c14e91b91c9852b8bd1c5fce67b0d241.def("set_criterion", method_pointer_ecc46aaf5a885e4588963ddadae0464a, "");

}