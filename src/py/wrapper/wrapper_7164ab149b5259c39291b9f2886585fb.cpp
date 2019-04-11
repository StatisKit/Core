#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_c519765f3eb4568bb10f0646a34c14b6;
            typedef struct ::statiskit::MultivariateDistribution const * param_c519765f3eb4568bb10f0646a34c14b6_0_type;
            typedef struct ::statiskit::MultivariateData const & param_c519765f3eb4568bb10f0646a34c14b6_1_type;
            virtual return_type_c519765f3eb4568bb10f0646a34c14b6 scoring(param_c519765f3eb4568bb10f0646a34c14b6_0_type param_0, param_c519765f3eb4568bb10f0646a34c14b6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_c519765f3eb4568bb10f0646a34c14b6, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_20397b66478a59f481c4e33cec98b652;
            virtual return_type_20397b66478a59f481c4e33cec98b652 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_20397b66478a59f481c4e33cec98b652, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_b20ef68b9ad15ac589bf25df13306741)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_22a814da05e956fb8383e8bd93034732)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_c9375e0ad0a15c85aa3c64667af8a3c6)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_6fb62e6ac5c353b0a8b041b7f18f5179)(struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_834ba6db864f50bb9e6ecf139c578c70)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_7164ab149b5259c39291b9f2886585fb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > class_7164ab149b5259c39291b9f2886585fb(module, "Estimator", "");
    class_7164ab149b5259c39291b9f2886585fb.def("__len__", method_pointer_b20ef68b9ad15ac589bf25df13306741, "");
    class_7164ab149b5259c39291b9f2886585fb.def("get_estimator", method_pointer_22a814da05e956fb8383e8bd93034732, pybind11::return_value_policy::reference_internal, "");
    class_7164ab149b5259c39291b9f2886585fb.def("set_estimator", method_pointer_c9375e0ad0a15c85aa3c64667af8a3c6, "");
    class_7164ab149b5259c39291b9f2886585fb.def("add_estimator", method_pointer_6fb62e6ac5c353b0a8b041b7f18f5179, "");
    class_7164ab149b5259c39291b9f2886585fb.def("remove_estimator", method_pointer_834ba6db864f50bb9e6ecf139c578c70, "");
    class_7164ab149b5259c39291b9f2886585fb.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}