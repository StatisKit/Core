#include "_core.h"

namespace autowig
{
    typedef ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::QuantitativeUnivariateMixtureDistribution;


        public:
            typedef void  return_type_246a8d3423cf5748b68f545f10de89b7;
            typedef ::statiskit::Index const & param_246a8d3423cf5748b68f545f10de89b7_0_type;
            typedef struct ::statiskit::DiscreteUnivariateDistribution const & param_246a8d3423cf5748b68f545f10de89b7_1_type;
            virtual return_type_246a8d3423cf5748b68f545f10de89b7 set_observation(param_246a8d3423cf5748b68f545f10de89b7_0_type param_0, param_246a8d3423cf5748b68f545f10de89b7_1_type param_1) override { PYBIND11_OVERLOAD(return_type_246a8d3423cf5748b68f545f10de89b7, class_type, set_observation, param_0, param_1); };

        public:
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}


namespace autowig {
}

void wrapper_9961bd1cc47c50ed9fd0cd4ed55feeb4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > class_9961bd1cc47c50ed9fd0cd4ed55feeb4(module, "_QuantitativeUnivariateMixtureDistribution_9961bd1cc47c50ed9fd0cd4ed55feeb4", "");
    class_9961bd1cc47c50ed9fd0cd4ed55feeb4.def(pybind11::init<  >());

}