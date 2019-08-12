#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef double  return_type_78996ca7fa9d5ebead3e3c6a72db16ee;
            typedef struct ::statiskit::DiscreteUnivariateDistribution const * param_78996ca7fa9d5ebead3e3c6a72db16ee_0_type;
            typedef struct ::statiskit::UnivariateData const & param_78996ca7fa9d5ebead3e3c6a72db16ee_1_type;
            virtual return_type_78996ca7fa9d5ebead3e3c6a72db16ee scoring(param_78996ca7fa9d5ebead3e3c6a72db16ee_0_type param_0, param_78996ca7fa9d5ebead3e3c6a72db16ee_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_78996ca7fa9d5ebead3e3c6a72db16ee, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_ffc375e050255b0e93aeb875148628ea;
            typedef struct ::statiskit::MultivariateData const & param_ffc375e050255b0e93aeb875148628ea_0_type;
            typedef unsigned long int const & param_ffc375e050255b0e93aeb875148628ea_1_type;
            virtual return_type_ffc375e050255b0e93aeb875148628ea operator()(param_ffc375e050255b0e93aeb875148628ea_0_type param_0, param_ffc375e050255b0e93aeb875148628ea_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_ffc375e050255b0e93aeb875148628ea, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_d5b7cd65f46a575786fb2ca4cc5f6324)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::size;
class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_e0edc769d0755c2385358a38e4020e18)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_c4f03ec37f845e8394096d0061b43a16)(::statiskit::Index const &, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_f376e01830015b27be1db88df0451951)(class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_a3a541a3d19d5fd3ac9b5fdbd00119d6)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_63009220d99c5a15af7379e6f8123f66(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_63009220d99c5a15af7379e6f8123f66(module, "Estimator", "");
    class_63009220d99c5a15af7379e6f8123f66.def(pybind11::init<  >());
    class_63009220d99c5a15af7379e6f8123f66.def("__len__", method_pointer_d5b7cd65f46a575786fb2ca4cc5f6324, "");
    class_63009220d99c5a15af7379e6f8123f66.def("get_estimator", method_pointer_e0edc769d0755c2385358a38e4020e18, pybind11::return_value_policy::reference_internal, "");
    class_63009220d99c5a15af7379e6f8123f66.def("set_estimator", method_pointer_c4f03ec37f845e8394096d0061b43a16, "");
    class_63009220d99c5a15af7379e6f8123f66.def("add_estimator", method_pointer_f376e01830015b27be1db88df0451951, "");
    class_63009220d99c5a15af7379e6f8123f66.def("remove_estimator", method_pointer_a3a541a3d19d5fd3ac9b5fdbd00119d6, "");
    class_63009220d99c5a15af7379e6f8123f66.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::DiscreteUnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}