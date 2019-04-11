#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateConditionalDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateConditionalDistribution::UnivariateConditionalDistribution;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  return_type_2d42bbbaff065a9cb38813f62e9dafda;
            virtual return_type_2d42bbbaff065a9cb38813f62e9dafda copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_2d42bbbaff065a9cb38813f62e9dafda, class_type, copy, ); };

        public:
            typedef unsigned int  return_type_a19605344e725c65ab302819d1663dbe;
            virtual return_type_a19605344e725c65ab302819d1663dbe get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_a19605344e725c65ab302819d1663dbe, class_type, get_nb_parameters, ); };

        public:
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_152a627d69cd5b35837e015943fc1e75;
            virtual return_type_152a627d69cd5b35837e015943fc1e75 get_explanatory_space() const override { PYBIND11_OVERLOAD_PURE(return_type_152a627d69cd5b35837e015943fc1e75, class_type, get_explanatory_space, ); };

        public:
            typedef struct ::statiskit::UnivariateDistribution const * return_type_53f978a20dca5ccd9144b1aeb74559b6;
            typedef struct ::statiskit::MultivariateEvent const & param_53f978a20dca5ccd9144b1aeb74559b6_0_type;
            virtual return_type_53f978a20dca5ccd9144b1aeb74559b6 operator()(param_53f978a20dca5ccd9144b1aeb74559b6_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_53f978a20dca5ccd9144b1aeb74559b6, class_type, operator(), param_0); };
    };
}

struct ::statiskit::UnivariateDistribution const * (::statiskit::UnivariateConditionalDistribution::*method_pointer_53f978a20dca5ccd9144b1aeb74559b6)(struct ::statiskit::MultivariateEvent const &)const= &::statiskit::UnivariateConditionalDistribution::operator();
double  (::statiskit::UnivariateConditionalDistribution::*method_pointer_8dba0d01abc159cf8681ca1cca6dbacb)(class ::statiskit::UnivariateConditionalData const &)const= &::statiskit::UnivariateConditionalDistribution::loglikelihood;
struct ::statiskit::MultivariateSampleSpace const * (::statiskit::UnivariateConditionalDistribution::*method_pointer_152a627d69cd5b35837e015943fc1e75)()const= &::statiskit::UnivariateConditionalDistribution::get_explanatory_space;
unsigned int  (::statiskit::UnivariateConditionalDistribution::*method_pointer_a19605344e725c65ab302819d1663dbe)()const= &::statiskit::UnivariateConditionalDistribution::get_nb_parameters;
class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  (::statiskit::UnivariateConditionalDistribution::*method_pointer_2d42bbbaff065a9cb38813f62e9dafda)()const= &::statiskit::UnivariateConditionalDistribution::copy;

namespace autowig {
}

void wrapper_7ed55bcdec33582fb2767f7d96937c85(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateConditionalDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateConditionalDistribution >::Type > class_7ed55bcdec33582fb2767f7d96937c85(module, "UnivariateConditionalDistribution", "");
    class_7ed55bcdec33582fb2767f7d96937c85.def("__call__", method_pointer_53f978a20dca5ccd9144b1aeb74559b6, pybind11::return_value_policy::reference_internal, ":Parameter:\n    `event` (:cpp:class:`::statiskit::MultivariateEvent`) - Undocumented\n\n:Return Type:\n    :cpp:class:`::statiskit::UnivariateDistribution`\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("loglikelihood", method_pointer_8dba0d01abc159cf8681ca1cca6dbacb, "");
    class_7ed55bcdec33582fb2767f7d96937c85.def("get_explanatory_space", method_pointer_152a627d69cd5b35837e015943fc1e75, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::statiskit::MultivariateSampleSpace`\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("get_nb_parameters", method_pointer_a19605344e725c65ab302819d1663dbe, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("copy", method_pointer_2d42bbbaff065a9cb38813f62e9dafda, "");

}