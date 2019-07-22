#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< class ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< class ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator >::Optimization;

            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > >  return_type_9457ae163d2b51e6a4b68c1d52a61c5e;
            virtual return_type_9457ae163d2b51e6a4b68c1d52a61c5e copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_9457ae163d2b51e6a4b68c1d52a61c5e, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_1b58fb67872859e3906ec2e648200d3c;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::data_type const & param_1b58fb67872859e3906ec2e648200d3c_0_type;
            virtual return_type_1b58fb67872859e3906ec2e648200d3c operator()(param_1b58fb67872859e3906ec2e648200d3c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_1b58fb67872859e3906ec2e648200d3c, class_type, operator(), param_0); };
    };
}

double const & (::statiskit::Optimization< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator >::*method_pointer_62864b3a322356a2a80b76a11ba0c820)()const= &::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator >::*method_pointer_d7181c3e83475a49b0b2f77908e0fccb)(double const &)= &::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator >::*method_pointer_bc8fd952a44f5c7ea4e769562d731f01)()const= &::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator >::*method_pointer_daa45e2e7f165ae0b03831c259edb58f)(unsigned int const &)= &::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator >::*method_pointer_6c2c2aafd1325298b0e13e4a19ba5ad0)()const= &::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator >::*method_pointer_9870c347070a5ed693415ab08aa37496)(unsigned int const &)= &::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_3170a5376b065cea9f39ca7a6ad5332f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > class_3170a5376b065cea9f39ca7a6ad5332f(module, "_Optimization_3170a5376b065cea9f39ca7a6ad5332f", "");
    class_3170a5376b065cea9f39ca7a6ad5332f.def(pybind11::init<  >());
    class_3170a5376b065cea9f39ca7a6ad5332f.def("get_mindiff", method_pointer_62864b3a322356a2a80b76a11ba0c820, pybind11::return_value_policy::copy, "");
    class_3170a5376b065cea9f39ca7a6ad5332f.def("set_mindiff", method_pointer_d7181c3e83475a49b0b2f77908e0fccb, "");
    class_3170a5376b065cea9f39ca7a6ad5332f.def("get_minits", method_pointer_bc8fd952a44f5c7ea4e769562d731f01, "");
    class_3170a5376b065cea9f39ca7a6ad5332f.def("set_minits", method_pointer_daa45e2e7f165ae0b03831c259edb58f, "");
    class_3170a5376b065cea9f39ca7a6ad5332f.def("get_maxits", method_pointer_6c2c2aafd1325298b0e13e4a19ba5ad0, "");
    class_3170a5376b065cea9f39ca7a6ad5332f.def("set_maxits", method_pointer_9870c347070a5ed693415ab08aa37496, "");

}