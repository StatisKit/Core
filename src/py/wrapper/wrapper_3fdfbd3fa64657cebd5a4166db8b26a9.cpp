#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_28dc383dfbf7582aa9f956fa8a4a6234;
            virtual return_type_28dc383dfbf7582aa9f956fa8a4a6234 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_28dc383dfbf7582aa9f956fa8a4a6234, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_c1e704385f9e54c89913f36b04d0775a;
            virtual return_type_c1e704385f9e54c89913f36b04d0775a simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c1e704385f9e54c89913f36b04d0775a, class_type, simulate, ); };
            typedef double  return_type_e1babe464b835687aea3395298d710d6;
            typedef int const & param_e1babe464b835687aea3395298d710d6_0_type;
            virtual return_type_e1babe464b835687aea3395298d710d6 pdf(param_e1babe464b835687aea3395298d710d6_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e1babe464b835687aea3395298d710d6, class_type, pdf, param_0); };
            typedef double  return_type_0c7621818b33548e866bb39bbb4e2157;
            typedef int const & param_0c7621818b33548e866bb39bbb4e2157_0_type;
            virtual return_type_0c7621818b33548e866bb39bbb4e2157 ldf(param_0c7621818b33548e866bb39bbb4e2157_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0c7621818b33548e866bb39bbb4e2157, class_type, ldf, param_0); };
            typedef unsigned int  return_type_11ac2b9e2041511595a9554076d9bb30;
            virtual return_type_11ac2b9e2041511595a9554076d9bb30 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_11ac2b9e2041511595a9554076d9bb30, class_type, get_nb_parameters, ); };
            typedef double  return_type_c6a8fd2e5dc454c89e463671fdf91f3e;
            virtual return_type_c6a8fd2e5dc454c89e463671fdf91f3e get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_c6a8fd2e5dc454c89e463671fdf91f3e, class_type, get_variance, ); };
            typedef double  return_type_9fdf92df3e8c5e0e85306b85eb662025;
            virtual return_type_9fdf92df3e8c5e0e85306b85eb662025 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_9fdf92df3e8c5e0e85306b85eb662025, class_type, get_mean, ); };
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };
            typedef double  return_type_b8cb3c3bef9a57b0b9e80ef518f215b7;
            typedef int const & param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type;
            virtual return_type_b8cb3c3bef9a57b0b9e80ef518f215b7 cdf(param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_b8cb3c3bef9a57b0b9e80ef518f215b7, class_type, cdf, param_0); };
            typedef double  return_type_c3377d2e9b535f76985d786c2f3a6fe0;
            typedef struct ::statiskit::UnivariateEvent const * param_c3377d2e9b535f76985d786c2f3a6fe0_0_type;
            typedef bool const & param_c3377d2e9b535f76985d786c2f3a6fe0_1_type;
            virtual return_type_c3377d2e9b535f76985d786c2f3a6fe0 probability(param_c3377d2e9b535f76985d786c2f3a6fe0_0_type param_0, param_c3377d2e9b535f76985d786c2f3a6fe0_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3377d2e9b535f76985d786c2f3a6fe0, class_type, probability, param_0, param_1); };
    };
}


namespace autowig {
}

void wrapper_3fdfbd3fa64657cebd5a4166db8b26a9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > class_3fdfbd3fa64657cebd5a4166db8b26a9(module, "_PolymorphicCopy_3fdfbd3fa64657cebd5a4166db8b26a9", "");
    class_3fdfbd3fa64657cebd5a4166db8b26a9.def(pybind11::init<  >());

}