#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateConditionalDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_bdacedd56eba5861a3003ac87a422cf6;
            typedef ::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_bdacedd56eba5861a3003ac87a422cf6_0_type;
            typedef bool const & param_bdacedd56eba5861a3003ac87a422cf6_1_type;
            virtual return_type_bdacedd56eba5861a3003ac87a422cf6 operator()(param_bdacedd56eba5861a3003ac87a422cf6_0_type param_0, param_bdacedd56eba5861a3003ac87a422cf6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bdacedd56eba5861a3003ac87a422cf6, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}

class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  (::statiskit::UnivariateConditionalDistributionEstimation::Estimator::*method_pointer_bdacedd56eba5861a3003ac87a422cf6)(::statiskit::UnivariateConditionalDistributionEstimation::data_type const &, bool const &)const= &::statiskit::UnivariateConditionalDistributionEstimation::Estimator::operator();
class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  (::statiskit::UnivariateConditionalDistributionEstimation::Estimator::*method_pointer_e0fab2db391a546591b690a17ebe80ff)()const= &::statiskit::UnivariateConditionalDistributionEstimation::Estimator::copy;

namespace autowig {
}

void wrapper_e19df620173959fc805b30a13ab6379a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type, class ::statiskit::Estimator > class_e19df620173959fc805b30a13ab6379a(module, "Estimator", "");
    class_e19df620173959fc805b30a13ab6379a.def("__call__", method_pointer_bdacedd56eba5861a3003ac87a422cf6, "");
    class_e19df620173959fc805b30a13ab6379a.def("copy", method_pointer_e0fab2db391a546591b690a17ebe80ff, "");

}