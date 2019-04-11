#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_940068d2d5d8523a8df7122dfde4f21b;
            typedef struct ::statiskit::MultivariateConditionalDistribution const * param_940068d2d5d8523a8df7122dfde4f21b_0_type;
            typedef class ::statiskit::MultivariateConditionalData const & param_940068d2d5d8523a8df7122dfde4f21b_1_type;
            virtual return_type_940068d2d5d8523a8df7122dfde4f21b scoring(param_940068d2d5d8523a8df7122dfde4f21b_0_type param_0, param_940068d2d5d8523a8df7122dfde4f21b_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_940068d2d5d8523a8df7122dfde4f21b, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  return_type_59986b4f11705d0e8aa830dfb22c3798;
            virtual return_type_59986b4f11705d0e8aa830dfb22c3798 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_59986b4f11705d0e8aa830dfb22c3798, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_ac2822c95c21522d8b8765da0facf1f6)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_f0e84d56824152fcbca92bf618404904)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_5eb59769d7a857799bed2ea2528f1144)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_ac0a56cc16ba513a87f266a002e8ef40)(struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_5d62b69050735063bfab83f64099b288)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_964cf359ff005773acf9fc2bf7c5743b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator > class_964cf359ff005773acf9fc2bf7c5743b(module, "Estimator", "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("__len__", method_pointer_ac2822c95c21522d8b8765da0facf1f6, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("get_estimator", method_pointer_f0e84d56824152fcbca92bf618404904, pybind11::return_value_policy::reference_internal, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("set_estimator", method_pointer_5eb59769d7a857799bed2ea2528f1144, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("add_estimator", method_pointer_ac0a56cc16ba513a87f266a002e8ef40, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("remove_estimator", method_pointer_5d62b69050735063bfab83f64099b288, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}