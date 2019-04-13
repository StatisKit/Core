#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Optimization;

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

double const & (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_e351a334895e5592bb25ac4bc81a5a9d)()const= &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_84d39c57b2755d6fac2d7258a600272a)(double const &)= &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_198b49d1d6b55d5497c4ccd1341688ce)()const= &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_08ce45b6646f51c2ab8fcdec1a7b3920)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_393d0ec811075e2b93831fd6d8cc63db)()const= &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_d60697ce86555d59bf5d869f782c010f)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_5bbb1918edfa5fb49894cb0a6bf46044(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > class_5bbb1918edfa5fb49894cb0a6bf46044(module, "_Optimization_5bbb1918edfa5fb49894cb0a6bf46044", "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def(pybind11::init<  >());
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("get_mindiff", method_pointer_e351a334895e5592bb25ac4bc81a5a9d, pybind11::return_value_policy::copy, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("set_mindiff", method_pointer_84d39c57b2755d6fac2d7258a600272a, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("get_minits", method_pointer_198b49d1d6b55d5497c4ccd1341688ce, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("set_minits", method_pointer_08ce45b6646f51c2ab8fcdec1a7b3920, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("get_maxits", method_pointer_393d0ec811075e2b93831fd6d8cc63db, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("set_maxits", method_pointer_d60697ce86555d59bf5d869f782c010f, "");

}