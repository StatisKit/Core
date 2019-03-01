#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_c1b9b85064ea5c2083c7e6ac77d19f03;
            virtual return_type_c1b9b85064ea5c2083c7e6ac77d19f03 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c1b9b85064ea5c2083c7e6ac77d19f03, class_type, copy, ); };
            typedef double  return_type_c6a8fd2e5dc454c89e463671fdf91f3e;
            virtual return_type_c6a8fd2e5dc454c89e463671fdf91f3e get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_c6a8fd2e5dc454c89e463671fdf91f3e, class_type, get_variance, ); };
            typedef double  return_type_9fdf92df3e8c5e0e85306b85eb662025;
            virtual return_type_9fdf92df3e8c5e0e85306b85eb662025 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_9fdf92df3e8c5e0e85306b85eb662025, class_type, get_mean, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_9b1e41d78cb15fb485b076a8136faf6b;
            virtual return_type_9b1e41d78cb15fb485b076a8136faf6b simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_9b1e41d78cb15fb485b076a8136faf6b, class_type, simulate, ); };
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };
            typedef double  return_type_b8cb3c3bef9a57b0b9e80ef518f215b7;
            typedef int const & param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type;
            virtual return_type_b8cb3c3bef9a57b0b9e80ef518f215b7 cdf(param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_b8cb3c3bef9a57b0b9e80ef518f215b7, class_type, cdf, param_0); };
            typedef double  return_type_e743676180d85397828cc79f44d4d185;
            typedef int const & param_e743676180d85397828cc79f44d4d185_0_type;
            virtual return_type_e743676180d85397828cc79f44d4d185 pdf(param_e743676180d85397828cc79f44d4d185_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e743676180d85397828cc79f44d4d185, class_type, pdf, param_0); };
            typedef double  return_type_e31fb7a7a5b852af9574d7d8bac3da21;
            typedef int const & param_e31fb7a7a5b852af9574d7d8bac3da21_0_type;
            virtual return_type_e31fb7a7a5b852af9574d7d8bac3da21 ldf(param_e31fb7a7a5b852af9574d7d8bac3da21_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e31fb7a7a5b852af9574d7d8bac3da21, class_type, ldf, param_0); };
            typedef double  return_type_c3377d2e9b535f76985d786c2f3a6fe0;
            typedef struct ::statiskit::UnivariateEvent const * param_c3377d2e9b535f76985d786c2f3a6fe0_0_type;
            typedef bool const & param_c3377d2e9b535f76985d786c2f3a6fe0_1_type;
            virtual return_type_c3377d2e9b535f76985d786c2f3a6fe0 probability(param_c3377d2e9b535f76985d786c2f3a6fe0_0_type param_0, param_c3377d2e9b535f76985d786c2f3a6fe0_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3377d2e9b535f76985d786c2f3a6fe0, class_type, probability, param_0, param_1); };
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}


namespace autowig {
}

void wrapper_8486f4aa8ce25724972cec18f80c00cc(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type, struct ::statiskit::DiscreteUnivariateDistribution > class_8486f4aa8ce25724972cec18f80c00cc(module, "_PolymorphicCopy_8486f4aa8ce25724972cec18f80c00cc", "");

}