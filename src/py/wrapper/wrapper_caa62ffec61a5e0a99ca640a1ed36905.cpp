#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_39e39a5ba6795282a3c28212fea5c5d7;
            typedef struct ::statiskit::UnivariateDistribution const * param_39e39a5ba6795282a3c28212fea5c5d7_0_type;
            typedef struct ::statiskit::UnivariateData const & param_39e39a5ba6795282a3c28212fea5c5d7_1_type;
            virtual return_type_39e39a5ba6795282a3c28212fea5c5d7 scoring(param_39e39a5ba6795282a3c28212fea5c5d7_0_type param_0, param_39e39a5ba6795282a3c28212fea5c5d7_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_39e39a5ba6795282a3c28212fea5c5d7, class_type, scoring, param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_d14f1b0afd7d5334aa815cfa7e9063df)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_6da8c84855f35c9d8505a81e9cf4c823)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_d382d54fd49b5beaab547053ddbbcdf0)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_d0cae626d46652ddb13449eca18a09c0)(struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_ef5bd1ef7f46550c9cfd23821bda32c4)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_caa62ffec61a5e0a99ca640a1ed36905(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > class_caa62ffec61a5e0a99ca640a1ed36905(module, "Estimator", "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("__len__", method_pointer_d14f1b0afd7d5334aa815cfa7e9063df, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("get_estimator", method_pointer_6da8c84855f35c9d8505a81e9cf4c823, pybind11::return_value_policy::reference_internal, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("set_estimator", method_pointer_d382d54fd49b5beaab547053ddbbcdf0, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("add_estimator", method_pointer_d0cae626d46652ddb13449eca18a09c0, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("remove_estimator", method_pointer_ef5bd1ef7f46550c9cfd23821bda32c4, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}