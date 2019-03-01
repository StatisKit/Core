#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalUnivariateConditionalDistribution class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  return_type_2d42bbbaff065a9cb38813f62e9dafda;
            virtual return_type_2d42bbbaff065a9cb38813f62e9dafda copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_2d42bbbaff065a9cb38813f62e9dafda, class_type, copy, ); };
            typedef unsigned int  return_type_a19605344e725c65ab302819d1663dbe;
            virtual return_type_a19605344e725c65ab302819d1663dbe get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_a19605344e725c65ab302819d1663dbe, class_type, get_nb_parameters, ); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_152a627d69cd5b35837e015943fc1e75;
            virtual return_type_152a627d69cd5b35837e015943fc1e75 get_explanatory_space() const override { PYBIND11_OVERLOAD_PURE(return_type_152a627d69cd5b35837e015943fc1e75, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_53f978a20dca5ccd9144b1aeb74559b6;
            typedef struct ::statiskit::MultivariateEvent const & param_53f978a20dca5ccd9144b1aeb74559b6_0_type;
            virtual return_type_53f978a20dca5ccd9144b1aeb74559b6 operator()(param_53f978a20dca5ccd9144b1aeb74559b6_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_53f978a20dca5ccd9144b1aeb74559b6, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_295ece6953a856c8b865758b0a34795c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalUnivariateConditionalDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type, struct ::statiskit::UnivariateConditionalDistribution > class_295ece6953a856c8b865758b0a34795c(module, "CategoricalUnivariateConditionalDistribution", "");

}