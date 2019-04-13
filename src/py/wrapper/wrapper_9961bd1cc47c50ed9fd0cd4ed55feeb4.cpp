#include "_core.h"

namespace autowig
{
    typedef ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::QuantitativeUnivariateMixtureDistribution;

            typedef double  return_type_c4dc031fcd6b5b508c63fc475642c309;
            virtual return_type_c4dc031fcd6b5b508c63fc475642c309 get_variance() const override { PYBIND11_OVERLOAD(return_type_c4dc031fcd6b5b508c63fc475642c309, class_type, get_variance, ); };
            typedef double  return_type_b7de9903a18f5021ac4a5f63c60a0db4;
            virtual return_type_b7de9903a18f5021ac4a5f63c60a0db4 get_mean() const override { PYBIND11_OVERLOAD(return_type_b7de9903a18f5021ac4a5f63c60a0db4, class_type, get_mean, ); };
            typedef double  return_type_e3a3227c8b17560ea250e74ba2447dfc;
            typedef int const & param_e3a3227c8b17560ea250e74ba2447dfc_0_type;
            virtual return_type_e3a3227c8b17560ea250e74ba2447dfc cdf(param_e3a3227c8b17560ea250e74ba2447dfc_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e3a3227c8b17560ea250e74ba2447dfc, class_type, cdf, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_d152937768ff50b8823d85a82c980d17;
            virtual return_type_d152937768ff50b8823d85a82c980d17 simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_d152937768ff50b8823d85a82c980d17, class_type, simulate, ); };
            typedef double  return_type_1f7e0f6d5a4658e791627aac9a3e075c;
            typedef int const & param_1f7e0f6d5a4658e791627aac9a3e075c_0_type;
            virtual return_type_1f7e0f6d5a4658e791627aac9a3e075c pdf(param_1f7e0f6d5a4658e791627aac9a3e075c_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_1f7e0f6d5a4658e791627aac9a3e075c, class_type, pdf, param_0); };
            typedef double  return_type_b288349953745909be3b581da8f23621;
            typedef int const & param_b288349953745909be3b581da8f23621_0_type;
            virtual return_type_b288349953745909be3b581da8f23621 ldf(param_b288349953745909be3b581da8f23621_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_b288349953745909be3b581da8f23621, class_type, ldf, param_0); };
            typedef void  return_type_246a8d3423cf5748b68f545f10de89b7;
            typedef ::statiskit::Index const & param_246a8d3423cf5748b68f545f10de89b7_0_type;
            typedef struct ::statiskit::DiscreteUnivariateDistribution const & param_246a8d3423cf5748b68f545f10de89b7_1_type;
            virtual return_type_246a8d3423cf5748b68f545f10de89b7 set_observation(param_246a8d3423cf5748b68f545f10de89b7_0_type param_0, param_246a8d3423cf5748b68f545f10de89b7_1_type param_1) override { PYBIND11_OVERLOAD(return_type_246a8d3423cf5748b68f545f10de89b7, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_f927fce3d16b5492bcef59bbf039772b;
            virtual return_type_f927fce3d16b5492bcef59bbf039772b get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_f927fce3d16b5492bcef59bbf039772b, class_type, get_nb_parameters, ); };
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };
            typedef double  return_type_c3377d2e9b535f76985d786c2f3a6fe0;
            typedef struct ::statiskit::UnivariateEvent const * param_c3377d2e9b535f76985d786c2f3a6fe0_0_type;
            typedef bool const & param_c3377d2e9b535f76985d786c2f3a6fe0_1_type;
            virtual return_type_c3377d2e9b535f76985d786c2f3a6fe0 probability(param_c3377d2e9b535f76985d786c2f3a6fe0_0_type param_0, param_c3377d2e9b535f76985d786c2f3a6fe0_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3377d2e9b535f76985d786c2f3a6fe0, class_type, probability, param_0, param_1); };
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