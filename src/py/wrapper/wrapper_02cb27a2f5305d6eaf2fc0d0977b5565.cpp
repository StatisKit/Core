#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DiscreteUnivariateDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DiscreteUnivariateDistribution::DiscreteUnivariateDistribution;


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
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };

        public:
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}

double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_e31fb7a7a5b852af9574d7d8bac3da21)(int const &)const= &::statiskit::DiscreteUnivariateDistribution::ldf;
double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_e743676180d85397828cc79f44d4d185)(int const &)const= &::statiskit::DiscreteUnivariateDistribution::pdf;
double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_b8cb3c3bef9a57b0b9e80ef518f215b7)(int const &)const= &::statiskit::DiscreteUnivariateDistribution::cdf;
int  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_0f752a27239a55e4a5244da5bea67286)(double const &)const= &::statiskit::DiscreteUnivariateDistribution::quantile;
double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_9fdf92df3e8c5e0e85306b85eb662025)()const= &::statiskit::DiscreteUnivariateDistribution::get_mean;
double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_c6a8fd2e5dc454c89e463671fdf91f3e)()const= &::statiskit::DiscreteUnivariateDistribution::get_variance;

namespace autowig {
}

void wrapper_02cb27a2f5305d6eaf2fc0d0977b5565(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteUnivariateDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::DiscreteUnivariateDistribution >::Type, struct ::statiskit::UnivariateDistribution > class_02cb27a2f5305d6eaf2fc0d0977b5565(module, "DiscreteUnivariateDistribution", "This virtual class DiscreteUnivariateDistribution represents the\ndistribution of a random discrete component $ N$. The support is $\n:raw-latex:`\\mathbb{Z}` $ and we have $\n:raw-latex:`\\sum`\\_{n:raw-latex:`\\in `:raw-latex:`\\mathbb{Z}`} P(N=n) =\n1$.\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def(pybind11::init<  >());
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("ldf", method_pointer_e31fb7a7a5b852af9574d7d8bac3da21, "Compute the log-probability of a value.\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ denote the value, $\n:raw-latex:`\\ln `P:raw-latex:`\\left`(N = n:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("pdf", method_pointer_e743676180d85397828cc79f44d4d185, "Compute the probability of a value\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ denote the value, $\nP:raw-latex:`\\left`(N = n:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("cdf", method_pointer_b8cb3c3bef9a57b0b9e80ef518f215b7, "Compute the cumulative probability of a value\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ denote the value\n\n.. math::\n\n\n   P\\left(N \\leq n\\right)  =   \\sum_{k \\leq n} P\\left(N = k\\right).\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("quantile", method_pointer_0f752a27239a55e4a5244da5bea67286, "Compute the quantile of a probability. This is the value $ n\n:raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ such that $ P(N\n:raw-latex:`\\leq `n) :raw-latex:`\\leq `p < P(N :raw-latex:`\\leq `n+1) $.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("get_mean", method_pointer_9fdf92df3e8c5e0e85306b85eb662025, "Get mean of a discrete random component $ E(N) =\n:raw-latex:`\\sum`\\_{n:raw-latex:`\\in`:raw-latex:`\\mathbb{Z}`} n P(N=n)\n$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("get_variance", method_pointer_c6a8fd2e5dc454c89e463671fdf91f3e, "Get variance of a discrete random component $ V(N) =\n:raw-latex:`\\sum`\\_{n:raw-latex:`\\in`:raw-latex:`\\mathbb{Z}`}\n:raw-latex:`\\lbrace `n-E(n) :raw-latex:`\\rbrace`^2 P(N=n) $ $\n:raw-latex:`\\mathbb{N}` $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

}