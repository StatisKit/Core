#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::PolymorphicCopy;


        public:
            typedef double  return_type_c6a8fd2e5dc454c89e463671fdf91f3e;
            virtual return_type_c6a8fd2e5dc454c89e463671fdf91f3e get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_c6a8fd2e5dc454c89e463671fdf91f3e, class_type, get_variance, ); };

        public:
            typedef double  return_type_9fdf92df3e8c5e0e85306b85eb662025;
            virtual return_type_9fdf92df3e8c5e0e85306b85eb662025 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_9fdf92df3e8c5e0e85306b85eb662025, class_type, get_mean, ); };

        public:
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };

        public:
            typedef double  return_type_b8cb3c3bef9a57b0b9e80ef518f215b7;
            typedef int const & param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type;
            virtual return_type_b8cb3c3bef9a57b0b9e80ef518f215b7 cdf(param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_b8cb3c3bef9a57b0b9e80ef518f215b7, class_type, cdf, param_0); };
    };
}


namespace autowig {
}

void wrapper_d3d68100c0aa515393562535c582529e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > class_d3d68100c0aa515393562535c582529e(module, "_PolymorphicCopy_d3d68100c0aa515393562535c582529e", "");
    class_d3d68100c0aa515393562535c582529e.def(pybind11::init<  >());

}