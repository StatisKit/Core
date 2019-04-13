#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::Optimization;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_20397b66478a59f481c4e33cec98b652;
            virtual return_type_20397b66478a59f481c4e33cec98b652 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_20397b66478a59f481c4e33cec98b652, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  return_type_0cfbeb46728f5e3393b2f59c4a91a99d;
            typedef ::statiskit::MultivariateDistributionEstimation::data_type const & param_0cfbeb46728f5e3393b2f59c4a91a99d_0_type;
            typedef bool const & param_0cfbeb46728f5e3393b2f59c4a91a99d_1_type;
            virtual return_type_0cfbeb46728f5e3393b2f59c4a91a99d operator()(param_0cfbeb46728f5e3393b2f59c4a91a99d_0_type param_0, param_0cfbeb46728f5e3393b2f59c4a91a99d_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_0cfbeb46728f5e3393b2f59c4a91a99d, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
            virtual return_type_7ba100805cd95f1cba468c9ce84eb72c children() const override { PYBIND11_OVERLOAD(return_type_7ba100805cd95f1cba468c9ce84eb72c, class_type, children, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::identifier;
            using class_type::children;
    };
}

double const & (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_c36d3177a65a55a2891c280bde267727)()const= &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_e16b7e51e2515da1900fc2a11cb70114)(double const &)= &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_2526bfe105a853a8abc9cf0014cb291e)()const= &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_caeeefd3cde85048a1b7379ab78dfaca)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_97799b3aec3e54c9a8650d8cf945ef67)()const= &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_2c031f7512535592a19998e88f178059)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_b65e2bfb02355375b92295f460fb1b15(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::MultivariateDistributionEstimation::Estimator > class_b65e2bfb02355375b92295f460fb1b15(module, "_Optimization_b65e2bfb02355375b92295f460fb1b15", "");
    class_b65e2bfb02355375b92295f460fb1b15.def(pybind11::init<  >());
    class_b65e2bfb02355375b92295f460fb1b15.def("get_mindiff", method_pointer_c36d3177a65a55a2891c280bde267727, pybind11::return_value_policy::copy, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("set_mindiff", method_pointer_e16b7e51e2515da1900fc2a11cb70114, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("get_minits", method_pointer_2526bfe105a853a8abc9cf0014cb291e, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("set_minits", method_pointer_caeeefd3cde85048a1b7379ab78dfaca, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("get_maxits", method_pointer_97799b3aec3e54c9a8650d8cf945ef67, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("set_maxits", method_pointer_2c031f7512535592a19998e88f178059, "");

}