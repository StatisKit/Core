#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateConditionalDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateConditionalDistribution::MultivariateConditionalDistribution;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  return_type_5602cdbf2c275bce8b45653e1d25ff61;
            virtual return_type_5602cdbf2c275bce8b45653e1d25ff61 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_5602cdbf2c275bce8b45653e1d25ff61, class_type, copy, ); };

        public:
            typedef unsigned int  return_type_645f02f88f8b570697bc8d8b93b48d3b;
            virtual return_type_645f02f88f8b570697bc8d8b93b48d3b get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_645f02f88f8b570697bc8d8b93b48d3b, class_type, get_nb_parameters, ); };

        public:
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_7efcb466ce8a5d1094143e91829eeb72;
            virtual return_type_7efcb466ce8a5d1094143e91829eeb72 get_explanatory_space() const override { PYBIND11_OVERLOAD_PURE(return_type_7efcb466ce8a5d1094143e91829eeb72, class_type, get_explanatory_space, ); };

        public:
            typedef struct ::statiskit::MultivariateDistribution const * return_type_3285f0544f0e5aada41213932efa56a7;
            typedef struct ::statiskit::MultivariateEvent const & param_3285f0544f0e5aada41213932efa56a7_0_type;
            virtual return_type_3285f0544f0e5aada41213932efa56a7 operator()(param_3285f0544f0e5aada41213932efa56a7_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_3285f0544f0e5aada41213932efa56a7, class_type, operator(), param_0); };

        public:
            typedef ::statiskit::Index  return_type_5c154b63f1c35786827ec4701044e25a;
            virtual return_type_5c154b63f1c35786827ec4701044e25a get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_5c154b63f1c35786827ec4701044e25a, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::MultivariateConditionalDistribution::*method_pointer_5c154b63f1c35786827ec4701044e25a)()const= &::statiskit::MultivariateConditionalDistribution::get_nb_components;
struct ::statiskit::MultivariateDistribution const * (::statiskit::MultivariateConditionalDistribution::*method_pointer_3285f0544f0e5aada41213932efa56a7)(struct ::statiskit::MultivariateEvent const &)const= &::statiskit::MultivariateConditionalDistribution::operator();
struct ::statiskit::MultivariateSampleSpace const * (::statiskit::MultivariateConditionalDistribution::*method_pointer_7efcb466ce8a5d1094143e91829eeb72)()const= &::statiskit::MultivariateConditionalDistribution::get_explanatory_space;
unsigned int  (::statiskit::MultivariateConditionalDistribution::*method_pointer_645f02f88f8b570697bc8d8b93b48d3b)()const= &::statiskit::MultivariateConditionalDistribution::get_nb_parameters;
class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  (::statiskit::MultivariateConditionalDistribution::*method_pointer_5602cdbf2c275bce8b45653e1d25ff61)()const= &::statiskit::MultivariateConditionalDistribution::copy;

namespace autowig {
}

void wrapper_6d1d52249a4c562691e57f68df4bcc06(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateConditionalDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateConditionalDistribution >::Type > class_6d1d52249a4c562691e57f68df4bcc06(module, "MultivariateConditionalDistribution", "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("get_nb_components", method_pointer_5c154b63f1c35786827ec4701044e25a, "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("__call__", method_pointer_3285f0544f0e5aada41213932efa56a7, pybind11::return_value_policy::reference_internal, "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("get_explanatory_space", method_pointer_7efcb466ce8a5d1094143e91829eeb72, pybind11::return_value_policy::reference_internal, "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("get_nb_parameters", method_pointer_645f02f88f8b570697bc8d8b93b48d3b, "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("copy", method_pointer_5602cdbf2c275bce8b45653e1d25ff61, "");

}