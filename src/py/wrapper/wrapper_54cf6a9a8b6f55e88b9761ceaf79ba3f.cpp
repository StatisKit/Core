#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousUnivariateDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ContinuousUnivariateDistribution::ContinuousUnivariateDistribution;

            typedef double  return_type_17d4a13bc764561299d331907516003f;
            virtual return_type_17d4a13bc764561299d331907516003f get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_17d4a13bc764561299d331907516003f, class_type, get_variance, ); };
            typedef double  return_type_cb42091f4cb35419b13eb0e0c27eb470;
            virtual return_type_cb42091f4cb35419b13eb0e0c27eb470 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_cb42091f4cb35419b13eb0e0c27eb470, class_type, get_mean, ); };
            typedef double  return_type_32217c345e3d5454a2e46058d702ce84;
            typedef double const & param_32217c345e3d5454a2e46058d702ce84_0_type;
            virtual return_type_32217c345e3d5454a2e46058d702ce84 quantile(param_32217c345e3d5454a2e46058d702ce84_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_32217c345e3d5454a2e46058d702ce84, class_type, quantile, param_0); };
            typedef double  return_type_3e9327a27cc259a1a813cf253bd84642;
            typedef double const & param_3e9327a27cc259a1a813cf253bd84642_0_type;
            virtual return_type_3e9327a27cc259a1a813cf253bd84642 cdf(param_3e9327a27cc259a1a813cf253bd84642_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_3e9327a27cc259a1a813cf253bd84642, class_type, cdf, param_0); };
            typedef double  return_type_30c20faf3f5a515d9541c73f1eb020df;
            typedef double const & param_30c20faf3f5a515d9541c73f1eb020df_0_type;
            virtual return_type_30c20faf3f5a515d9541c73f1eb020df pdf(param_30c20faf3f5a515d9541c73f1eb020df_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_30c20faf3f5a515d9541c73f1eb020df, class_type, pdf, param_0); };
            typedef double  return_type_2843df1d3dc6596aaccccc3a0dd5da36;
            typedef double const & param_2843df1d3dc6596aaccccc3a0dd5da36_0_type;
            virtual return_type_2843df1d3dc6596aaccccc3a0dd5da36 ldf(param_2843df1d3dc6596aaccccc3a0dd5da36_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_2843df1d3dc6596aaccccc3a0dd5da36, class_type, ldf, param_0); };
            typedef double  return_type_c3090cef11805fc1858df60ff42a7c43;
            typedef struct ::statiskit::UnivariateEvent const * param_c3090cef11805fc1858df60ff42a7c43_0_type;
            typedef bool const & param_c3090cef11805fc1858df60ff42a7c43_1_type;
            virtual return_type_c3090cef11805fc1858df60ff42a7c43 probability(param_c3090cef11805fc1858df60ff42a7c43_0_type param_0, param_c3090cef11805fc1858df60ff42a7c43_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3090cef11805fc1858df60ff42a7c43, class_type, probability, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_320fcafd931d58898fc5be99cb1979fe;
            virtual return_type_320fcafd931d58898fc5be99cb1979fe simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_320fcafd931d58898fc5be99cb1979fe, class_type, simulate, ); };
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}

double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_2843df1d3dc6596aaccccc3a0dd5da36)(double const &)const= &::statiskit::ContinuousUnivariateDistribution::ldf;
double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_30c20faf3f5a515d9541c73f1eb020df)(double const &)const= &::statiskit::ContinuousUnivariateDistribution::pdf;
double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_3e9327a27cc259a1a813cf253bd84642)(double const &)const= &::statiskit::ContinuousUnivariateDistribution::cdf;
double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_32217c345e3d5454a2e46058d702ce84)(double const &)const= &::statiskit::ContinuousUnivariateDistribution::quantile;
double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_cb42091f4cb35419b13eb0e0c27eb470)()const= &::statiskit::ContinuousUnivariateDistribution::get_mean;
double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_17d4a13bc764561299d331907516003f)()const= &::statiskit::ContinuousUnivariateDistribution::get_variance;

namespace autowig {
}

void wrapper_54cf6a9a8b6f55e88b9761ceaf79ba3f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousUnivariateDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousUnivariateDistribution >::Type, struct ::statiskit::UnivariateDistribution > class_54cf6a9a8b6f55e88b9761ceaf79ba3f(module, "ContinuousUnivariateDistribution", "This virtual class ContinuousUnivariateDistribution represents the\ndistribution of a random continuous component $ X$. The support is $\n:raw-latex:`\\mathbb{R}` $ and we have $\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^{:raw-latex:`\\infty`} f(x) dx\n= 1$.\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def(pybind11::init<  >());
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("ldf", method_pointer_2843df1d3dc6596aaccccc3a0dd5da36, "Compute the log-probability density of a value.\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $\n:raw-latex:`\\ln `f(x) = :raw-latex:`\\ln `P:raw-latex:`\\left`(X\n:raw-latex:`\\in `dx:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("pdf", method_pointer_30c20faf3f5a515d9541c73f1eb020df, "Compute the probability density of a value.\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $\nf(x) = P:raw-latex:`\\left`(X :raw-latex:`\\in `dx:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("cdf", method_pointer_3e9327a27cc259a1a813cf253bd84642, "Compute the cumulative probability of a value.\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $\nP:raw-latex:`\\left`(X :raw-latex:`\\leq `x :raw-latex:`\\right`) =\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^x f(t) dt $.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("quantile", method_pointer_32217c345e3d5454a2e46058d702ce84, "Compute the quantile of a probability. This is the value $ x\n:raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ such that $ P(X\n:raw-latex:`\\leq `x) = p $.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("get_mean", method_pointer_cb42091f4cb35419b13eb0e0c27eb470, "Get mean of a continuous random component $ E(X) =\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^{:raw-latex:`\\infty`} x f(x)\ndx $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("get_variance", method_pointer_17d4a13bc764561299d331907516003f, "Get variance of a continuous random component $ V(X) =\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^{:raw-latex:`\\infty`}\n:raw-latex:`\\lbrace `x-E(X) :raw-latex:`\\rbrace`^2 f(x) dx $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

}