#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousMultivariateConditionalDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ContinuousMultivariateConditionalDistribution::ContinuousMultivariateConditionalDistribution;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  return_type_5602cdbf2c275bce8b45653e1d25ff61;
            virtual return_type_5602cdbf2c275bce8b45653e1d25ff61 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_5602cdbf2c275bce8b45653e1d25ff61, class_type, copy, ); };
            typedef unsigned int  return_type_645f02f88f8b570697bc8d8b93b48d3b;
            virtual return_type_645f02f88f8b570697bc8d8b93b48d3b get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_645f02f88f8b570697bc8d8b93b48d3b, class_type, get_nb_parameters, ); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_7efcb466ce8a5d1094143e91829eeb72;
            virtual return_type_7efcb466ce8a5d1094143e91829eeb72 get_explanatory_space() const override { PYBIND11_OVERLOAD_PURE(return_type_7efcb466ce8a5d1094143e91829eeb72, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::MultivariateDistribution const * return_type_3285f0544f0e5aada41213932efa56a7;
            typedef struct ::statiskit::MultivariateEvent const & param_3285f0544f0e5aada41213932efa56a7_0_type;
            virtual return_type_3285f0544f0e5aada41213932efa56a7 operator()(param_3285f0544f0e5aada41213932efa56a7_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_3285f0544f0e5aada41213932efa56a7, class_type, operator(), param_0); };
            typedef ::statiskit::Index  return_type_5c154b63f1c35786827ec4701044e25a;
            virtual return_type_5c154b63f1c35786827ec4701044e25a get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_5c154b63f1c35786827ec4701044e25a, class_type, get_nb_components, ); };
    };
}


namespace autowig {
}

void wrapper_098b1688f9d6517bac4fe76bfdbe24bd(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousMultivariateConditionalDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousMultivariateConditionalDistribution >::Type, struct ::statiskit::MultivariateConditionalDistribution > class_098b1688f9d6517bac4fe76bfdbe24bd(module, "ContinuousMultivariateConditionalDistribution", "");

}