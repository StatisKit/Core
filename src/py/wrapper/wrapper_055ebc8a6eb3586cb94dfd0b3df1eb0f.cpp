#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::UnivariateMixtureDistribution;


        public:
            typedef void  return_type_246a8d3423cf5748b68f545f10de89b7;
            typedef ::statiskit::Index const & param_246a8d3423cf5748b68f545f10de89b7_0_type;
            typedef struct ::statiskit::DiscreteUnivariateDistribution const & param_246a8d3423cf5748b68f545f10de89b7_1_type;
            virtual return_type_246a8d3423cf5748b68f545f10de89b7 set_observation(param_246a8d3423cf5748b68f545f10de89b7_0_type param_0, param_246a8d3423cf5748b68f545f10de89b7_1_type param_1) override { PYBIND11_OVERLOAD(return_type_246a8d3423cf5748b68f545f10de89b7, class_type, set_observation, param_0, param_1); };

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

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}


namespace autowig {
}

void wrapper_055ebc8a6eb3586cb94dfd0b3df1eb0f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > class_055ebc8a6eb3586cb94dfd0b3df1eb0f(module, "_UnivariateMixtureDistribution_055ebc8a6eb3586cb94dfd0b3df1eb0f", "");
    class_055ebc8a6eb3586cb94dfd0b3df1eb0f.def(pybind11::init<  >());

}