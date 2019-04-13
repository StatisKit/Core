#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateDistributionEstimation::Estimator::Estimator;

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

class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  (::statiskit::MultivariateDistributionEstimation::Estimator::*method_pointer_0cfbeb46728f5e3393b2f59c4a91a99d)(::statiskit::MultivariateDistributionEstimation::data_type const &, bool const &)const= &::statiskit::MultivariateDistributionEstimation::Estimator::operator();
class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  (::statiskit::MultivariateDistributionEstimation::Estimator::*method_pointer_20397b66478a59f481c4e33cec98b652)()const= &::statiskit::MultivariateDistributionEstimation::Estimator::copy;

namespace autowig {
}

void wrapper_6eb1ba92b1d158b09999c16267a2ec28(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type, class ::statiskit::Estimator > class_6eb1ba92b1d158b09999c16267a2ec28(module, "Estimator", "");
    class_6eb1ba92b1d158b09999c16267a2ec28.def("__call__", method_pointer_0cfbeb46728f5e3393b2f59c4a91a99d, "");
    class_6eb1ba92b1d158b09999c16267a2ec28.def("copy", method_pointer_20397b66478a59f481c4e33cec98b652, "");

}