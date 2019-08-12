#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution >::PolymorphicCopy;


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
            typedef double  return_type_e743676180d85397828cc79f44d4d185;
            typedef int const & param_e743676180d85397828cc79f44d4d185_0_type;
            virtual return_type_e743676180d85397828cc79f44d4d185 pdf(param_e743676180d85397828cc79f44d4d185_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e743676180d85397828cc79f44d4d185, class_type, pdf, param_0); };

        public:
            typedef double  return_type_e31fb7a7a5b852af9574d7d8bac3da21;
            typedef int const & param_e31fb7a7a5b852af9574d7d8bac3da21_0_type;
            virtual return_type_e31fb7a7a5b852af9574d7d8bac3da21 ldf(param_e31fb7a7a5b852af9574d7d8bac3da21_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e31fb7a7a5b852af9574d7d8bac3da21, class_type, ldf, param_0); };

        public:
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}


namespace autowig {
}

void wrapper_551c927628b651a19489817a39ededb8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution > >::Type, struct ::statiskit::DiscreteUnivariateDistribution > class_551c927628b651a19489817a39ededb8(module, "_PolymorphicCopy_551c927628b651a19489817a39ededb8", "");
    class_551c927628b651a19489817a39ededb8.def(pybind11::init<  >());

}