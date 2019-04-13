#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Optimization;

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

double const & (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_35a1d72c2afe50abae544c7b85e81bf1)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_99ae7dd9f31d5974bde957949a5035c4)(double const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_83064646869d5d85a9ac96b3e9c8a59a)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_da042cc8718c58c5b1f93c727825184b)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_b163c4dfab725029a48aa0aacfca11b8)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_499fd696e18e520599ff940988b0bcb7)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_3d6a15edb2225daba874c2b80defe6b4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > class_3d6a15edb2225daba874c2b80defe6b4(module, "_Optimization_3d6a15edb2225daba874c2b80defe6b4", "");
    class_3d6a15edb2225daba874c2b80defe6b4.def(pybind11::init<  >());
    class_3d6a15edb2225daba874c2b80defe6b4.def("get_mindiff", method_pointer_35a1d72c2afe50abae544c7b85e81bf1, pybind11::return_value_policy::copy, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("set_mindiff", method_pointer_99ae7dd9f31d5974bde957949a5035c4, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("get_minits", method_pointer_83064646869d5d85a9ac96b3e9c8a59a, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("set_minits", method_pointer_da042cc8718c58c5b1f93c727825184b, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("get_maxits", method_pointer_b163c4dfab725029a48aa0aacfca11b8, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("set_maxits", method_pointer_499fd696e18e520599ff940988b0bcb7, "");

}