#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Optimization;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_97c0dcb4b9a55407beb1affee63e5b47;
            virtual return_type_97c0dcb4b9a55407beb1affee63e5b47 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_97c0dcb4b9a55407beb1affee63e5b47, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_163f6bff094c5658b1290a9b2b3a9d26;
            typedef ::statiskit::UnivariateDistributionEstimation::data_type const & param_163f6bff094c5658b1290a9b2b3a9d26_0_type;
            typedef bool const & param_163f6bff094c5658b1290a9b2b3a9d26_1_type;
            virtual return_type_163f6bff094c5658b1290a9b2b3a9d26 operator()(param_163f6bff094c5658b1290a9b2b3a9d26_0_type param_0, param_163f6bff094c5658b1290a9b2b3a9d26_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_163f6bff094c5658b1290a9b2b3a9d26, class_type, operator(), param_0, param_1); };
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

double const & (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_317b55cf2f095441a90761b585894a2b)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_aded8a75326850b0acbd175d00c01d1d)(double const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_91242b0124445c0b8e7b72267c81d545)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_5e32f2df117a5ee8b63adef68de2c3b4)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_b5dbfd41b6465487af36b9a482ed6aa9)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_7a8db1f4d8665a20a3e3664348f116e6)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_f81a8ee127995b0890ddd9786aab755d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_f81a8ee127995b0890ddd9786aab755d(module, "_Optimization_f81a8ee127995b0890ddd9786aab755d", "");
    class_f81a8ee127995b0890ddd9786aab755d.def(pybind11::init<  >());
    class_f81a8ee127995b0890ddd9786aab755d.def("get_mindiff", method_pointer_317b55cf2f095441a90761b585894a2b, pybind11::return_value_policy::copy, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("set_mindiff", method_pointer_aded8a75326850b0acbd175d00c01d1d, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("get_minits", method_pointer_91242b0124445c0b8e7b72267c81d545, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("set_minits", method_pointer_5e32f2df117a5ee8b63adef68de2c3b4, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("get_maxits", method_pointer_b5dbfd41b6465487af36b9a482ed6aa9, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("set_maxits", method_pointer_7a8db1f4d8665a20a3e3664348f116e6, "");

}