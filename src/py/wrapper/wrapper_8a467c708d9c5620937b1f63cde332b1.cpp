#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_12fcf7e5c7655bf5b274be86d31f722f;
            typedef struct ::statiskit::UnivariateDistribution const * param_12fcf7e5c7655bf5b274be86d31f722f_0_type;
            typedef struct ::statiskit::UnivariateData const & param_12fcf7e5c7655bf5b274be86d31f722f_1_type;
            virtual return_type_12fcf7e5c7655bf5b274be86d31f722f scoring(param_12fcf7e5c7655bf5b274be86d31f722f_0_type param_0, param_12fcf7e5c7655bf5b274be86d31f722f_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_12fcf7e5c7655bf5b274be86d31f722f, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_97c0dcb4b9a55407beb1affee63e5b47;
            virtual return_type_97c0dcb4b9a55407beb1affee63e5b47 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_97c0dcb4b9a55407beb1affee63e5b47, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_73fd5e6da2d4530f8f111e67a7c33ce3)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_208343c9d16956f590cc79b5cd6d8ea4)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_a15a9e8967f253a4953743d81164250d)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_fcafee85447e50158a0e087e45635955)(struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_e1756c5ca72c5f958a12e2a83458b927)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_8a467c708d9c5620937b1f63cde332b1(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_8a467c708d9c5620937b1f63cde332b1(module, "Estimator", "");
    class_8a467c708d9c5620937b1f63cde332b1.def("__len__", method_pointer_73fd5e6da2d4530f8f111e67a7c33ce3, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("get_estimator", method_pointer_208343c9d16956f590cc79b5cd6d8ea4, pybind11::return_value_policy::reference_internal, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("set_estimator", method_pointer_a15a9e8967f253a4953743d81164250d, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("add_estimator", method_pointer_fcafee85447e50158a0e087e45635955, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("remove_estimator", method_pointer_e1756c5ca72c5f958a12e2a83458b927, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}