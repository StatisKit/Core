#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Optimization;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_20397b66478a59f481c4e33cec98b652;
            virtual return_type_20397b66478a59f481c4e33cec98b652 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_20397b66478a59f481c4e33cec98b652, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_0cfbeb46728f5e3393b2f59c4a91a99d;
            typedef ::statiskit::MultivariateDistributionEstimation::data_type const & param_0cfbeb46728f5e3393b2f59c4a91a99d_0_type;
            typedef bool const & param_0cfbeb46728f5e3393b2f59c4a91a99d_1_type;
            virtual return_type_0cfbeb46728f5e3393b2f59c4a91a99d operator()(param_0cfbeb46728f5e3393b2f59c4a91a99d_0_type param_0, param_0cfbeb46728f5e3393b2f59c4a91a99d_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_0cfbeb46728f5e3393b2f59c4a91a99d, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}

double const & (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_5b9bcc4fe66253cca80b0d443d707303)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_cac31c79d98b50c99b89ebd949f2b5b2)(double const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_365e06823d7b5fe881b3aa677480ee84)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_4d6899b64ba65c2797f81ebdd7533797)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_637003e6b1d05c07a8854d0dedcd3999)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_449444cfaac857d681270a697240179f)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_e04b2c4523535837960c26d5b28953fc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > class_e04b2c4523535837960c26d5b28953fc(module, "_Optimization_e04b2c4523535837960c26d5b28953fc", "");
    class_e04b2c4523535837960c26d5b28953fc.def(pybind11::init<  >());
    class_e04b2c4523535837960c26d5b28953fc.def("get_mindiff", method_pointer_5b9bcc4fe66253cca80b0d443d707303, pybind11::return_value_policy::copy, "");
    class_e04b2c4523535837960c26d5b28953fc.def("set_mindiff", method_pointer_cac31c79d98b50c99b89ebd949f2b5b2, "");
    class_e04b2c4523535837960c26d5b28953fc.def("get_minits", method_pointer_365e06823d7b5fe881b3aa677480ee84, "");
    class_e04b2c4523535837960c26d5b28953fc.def("set_minits", method_pointer_4d6899b64ba65c2797f81ebdd7533797, "");
    class_e04b2c4523535837960c26d5b28953fc.def("get_maxits", method_pointer_637003e6b1d05c07a8854d0dedcd3999, "");
    class_e04b2c4523535837960c26d5b28953fc.def("set_maxits", method_pointer_449444cfaac857d681270a697240179f, "");

}