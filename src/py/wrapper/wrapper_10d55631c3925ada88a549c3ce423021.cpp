#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_1b474f5a5e7a5dc3894e485ae0076666;
            virtual return_type_1b474f5a5e7a5dc3894e485ae0076666 children() const override { PYBIND11_OVERLOAD(return_type_1b474f5a5e7a5dc3894e485ae0076666, class_type, children, ); };
            typedef double  return_type_75c720739866535bb74aece0734d68b3;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_75c720739866535bb74aece0734d68b3_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_75c720739866535bb74aece0734d68b3_1_type;
            virtual return_type_75c720739866535bb74aece0734d68b3 scoring(param_75c720739866535bb74aece0734d68b3_0_type param_0, param_75c720739866535bb74aece0734d68b3_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_75c720739866535bb74aece0734d68b3, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_76b103f5f72b5db48313a44c94356068;
            typedef class ::statiskit::MultivariateConditionalData const & param_76b103f5f72b5db48313a44c94356068_0_type;
            typedef bool const & param_76b103f5f72b5db48313a44c94356068_1_type;
            virtual return_type_76b103f5f72b5db48313a44c94356068 operator()(param_76b103f5f72b5db48313a44c94356068_0_type param_0, param_76b103f5f72b5db48313a44c94356068_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_76b103f5f72b5db48313a44c94356068, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_59986b4f11705d0e8aa830dfb22c3798;
            virtual return_type_59986b4f11705d0e8aa830dfb22c3798 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_59986b4f11705d0e8aa830dfb22c3798, class_type, copy, ); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::children;
            using class_type::scoring;
            using class_type::identifier;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_211825a5ce8b5203805ae26a1de855fe)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_77a7da95d40f554e94e8f3c97ea9d999)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_a4c078acb1225745a2fd7d5cf3b60310)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e8847d0419dd5a9292bd0be2086203f7)(struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_bbec5b8237e256e9be611226efaa856d)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_10d55631c3925ada88a549c3ce423021(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator > class_10d55631c3925ada88a549c3ce423021(module, "Estimator", "");
    class_10d55631c3925ada88a549c3ce423021.def("__len__", method_pointer_211825a5ce8b5203805ae26a1de855fe, "");
    class_10d55631c3925ada88a549c3ce423021.def("get_estimator", method_pointer_77a7da95d40f554e94e8f3c97ea9d999, pybind11::return_value_policy::reference_internal, "");
    class_10d55631c3925ada88a549c3ce423021.def("set_estimator", method_pointer_a4c078acb1225745a2fd7d5cf3b60310, "");
    class_10d55631c3925ada88a549c3ce423021.def("add_estimator", method_pointer_e8847d0419dd5a9292bd0be2086203f7, "");
    class_10d55631c3925ada88a549c3ce423021.def("remove_estimator", method_pointer_bbec5b8237e256e9be611226efaa856d, "");
    class_10d55631c3925ada88a549c3ce423021.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}