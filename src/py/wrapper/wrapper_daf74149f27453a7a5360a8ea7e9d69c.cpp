#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateDistribution::UnivariateDistribution;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_320fcafd931d58898fc5be99cb1979fe;
            virtual return_type_320fcafd931d58898fc5be99cb1979fe simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_320fcafd931d58898fc5be99cb1979fe, class_type, simulate, ); };
            typedef double  return_type_e54dcb61962b537ca725a1f2230202dc;
            typedef struct ::statiskit::UnivariateEvent const * param_e54dcb61962b537ca725a1f2230202dc_0_type;
            typedef bool const & param_e54dcb61962b537ca725a1f2230202dc_1_type;
            virtual return_type_e54dcb61962b537ca725a1f2230202dc probability(param_e54dcb61962b537ca725a1f2230202dc_0_type param_0, param_e54dcb61962b537ca725a1f2230202dc_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_e54dcb61962b537ca725a1f2230202dc, class_type, probability, param_0, param_1); };
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}

unsigned int  (::statiskit::UnivariateDistribution::*method_pointer_0826ef63abcb5a8d83b7e3e2df48a620)()const= &::statiskit::UnivariateDistribution::get_nb_parameters;
double  (::statiskit::UnivariateDistribution::*method_pointer_e54dcb61962b537ca725a1f2230202dc)(struct ::statiskit::UnivariateEvent const *, bool const &)const= &::statiskit::UnivariateDistribution::probability;
double  (::statiskit::UnivariateDistribution::*method_pointer_fea412084f2c5ba9bc73dfaeb8b4c3dc)(struct ::statiskit::UnivariateData const &)const= &::statiskit::UnivariateDistribution::loglikelihood;
class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateDistribution::*method_pointer_320fcafd931d58898fc5be99cb1979fe)()const= &::statiskit::UnivariateDistribution::simulate;
class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::UnivariateDistribution::*method_pointer_7043746e82585022aaf3d0d72cbf150b)()const= &::statiskit::UnivariateDistribution::copy;

namespace autowig {
}

void wrapper_daf74149f27453a7a5360a8ea7e9d69c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateDistribution >::Type > class_daf74149f27453a7a5360a8ea7e9d69c(module, "UnivariateDistribution", "This virtual class UnivariateDistribution represents the distribution of\na random univariate component $ X $. The support of this distribution is\na set $ :raw-latex:`\\mathcal{X}` $ with one dimension.\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def(pybind11::init<  >());
    class_daf74149f27453a7a5360a8ea7e9d69c.def("get_nb_parameters", method_pointer_0826ef63abcb5a8d83b7e3e2df48a620, "Get the number of parameters of the distribution.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("probability", method_pointer_e54dcb61962b537ca725a1f2230202dc, "Compute the probability of a set of values.\n\nLet $A :raw-latex:`\\subseteq `:raw-latex:`\\mathcal{X}` $ denote the set\nof values. The probability function get the probability $\nP:raw-latex:`\\left`(X :raw-latex:`\\in `A:raw-latex:`\\right`) $ or the\nlog probability $ :raw-latex:`\\ln `P:raw-latex:`\\left`(X\n:raw-latex:`\\in `A:raw-latex:`\\right`) $ according to the boolean\nparameter logarithm.\n\n:Parameters:\n  - `event` (:cpp:class:`::statiskit::UnivariateEvent`) - Undocumented\n  - `logarithm` (:cpp:any:`bool`) - The boolean.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("loglikelihood", method_pointer_fea412084f2c5ba9bc73dfaeb8b4c3dc, "Compute the log-likelihood of an univariate dataset according to the\nconsidered univariate distribution.\n\n:Parameter:\n    `data` (:cpp:class:`::statiskit::UnivariateData`) - The considered univariate dataset.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("simulate", method_pointer_320fcafd931d58898fc5be99cb1979fe, ":Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::UnivariateEvent, struct ::std::default_delete< struct\n    ::statiskit::UnivariateEvent > >\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("copy", method_pointer_7043746e82585022aaf3d0d72cbf150b, "");

}