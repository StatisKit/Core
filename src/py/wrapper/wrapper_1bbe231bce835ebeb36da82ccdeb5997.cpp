#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_a8793d7694b85cea8bead585bebfa116;
            typedef struct ::statiskit::UnivariateConditionalDistribution const * param_a8793d7694b85cea8bead585bebfa116_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_a8793d7694b85cea8bead585bebfa116_1_type;
            virtual return_type_a8793d7694b85cea8bead585bebfa116 scoring(param_a8793d7694b85cea8bead585bebfa116_0_type param_0, param_a8793d7694b85cea8bead585bebfa116_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_a8793d7694b85cea8bead585bebfa116, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_b802ccc39dcd5c0e835211836ab7d59d)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e274930ea2dc5ab1bc443203a08ceddc)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_50b5354942d657baa64f803083675e1d)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d3aa394a479f5aec8684a5608ca72448)(struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_6dd5e7e30c8252828df26a594edfa560)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_1bbe231bce835ebeb36da82ccdeb5997(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > class_1bbe231bce835ebeb36da82ccdeb5997(module, "Estimator", "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("__len__", method_pointer_b802ccc39dcd5c0e835211836ab7d59d, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("get_estimator", method_pointer_e274930ea2dc5ab1bc443203a08ceddc, pybind11::return_value_policy::reference_internal, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("set_estimator", method_pointer_50b5354942d657baa64f803083675e1d, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("add_estimator", method_pointer_d3aa394a479f5aec8684a5608ca72448, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("remove_estimator", method_pointer_6dd5e7e30c8252828df26a594edfa560, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}