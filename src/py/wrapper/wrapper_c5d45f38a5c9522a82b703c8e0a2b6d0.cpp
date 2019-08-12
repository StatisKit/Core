#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef double  return_type_dbb676a3a1445ba9bd529cd6856599a1;
            typedef struct ::statiskit::ContinuousUnivariateDistribution const * param_dbb676a3a1445ba9bd529cd6856599a1_0_type;
            typedef struct ::statiskit::UnivariateData const & param_dbb676a3a1445ba9bd529cd6856599a1_1_type;
            virtual return_type_dbb676a3a1445ba9bd529cd6856599a1 scoring(param_dbb676a3a1445ba9bd529cd6856599a1_0_type param_0, param_dbb676a3a1445ba9bd529cd6856599a1_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_dbb676a3a1445ba9bd529cd6856599a1, class_type, scoring, param_0, param_1); };

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

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_61264c1816f7581183dae971728d8f1a)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::size;
class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_e4311a8f8d8c598498bc517a59587f70)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_28ddc6d2f50a54e18c0ec9b82710f536)(::statiskit::Index const &, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_3c0f45f11af15f3eb7c821827ed8d4db)(class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_38d71e4e8fc750828bde9cc0cd7d5af9)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_c5d45f38a5c9522a82b703c8e0a2b6d0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_c5d45f38a5c9522a82b703c8e0a2b6d0(module, "Estimator", "");
    class_c5d45f38a5c9522a82b703c8e0a2b6d0.def(pybind11::init<  >());
    class_c5d45f38a5c9522a82b703c8e0a2b6d0.def("__len__", method_pointer_61264c1816f7581183dae971728d8f1a, "");
    class_c5d45f38a5c9522a82b703c8e0a2b6d0.def("get_estimator", method_pointer_e4311a8f8d8c598498bc517a59587f70, pybind11::return_value_policy::reference_internal, "");
    class_c5d45f38a5c9522a82b703c8e0a2b6d0.def("set_estimator", method_pointer_28ddc6d2f50a54e18c0ec9b82710f536, "");
    class_c5d45f38a5c9522a82b703c8e0a2b6d0.def("add_estimator", method_pointer_3c0f45f11af15f3eb7c821827ed8d4db, "");
    class_c5d45f38a5c9522a82b703c8e0a2b6d0.def("remove_estimator", method_pointer_38d71e4e8fc750828bde9cc0cd7d5af9, "");
    class_c5d45f38a5c9522a82b703c8e0a2b6d0.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::ContinuousUnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}