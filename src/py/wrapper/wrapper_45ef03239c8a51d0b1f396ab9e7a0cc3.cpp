#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_dbb676a3a1445ba9bd529cd6856599a1;
            typedef struct ::statiskit::ContinuousUnivariateDistribution const * param_dbb676a3a1445ba9bd529cd6856599a1_0_type;
            typedef struct ::statiskit::UnivariateData const & param_dbb676a3a1445ba9bd529cd6856599a1_1_type;
            virtual return_type_dbb676a3a1445ba9bd529cd6856599a1 scoring(param_dbb676a3a1445ba9bd529cd6856599a1_0_type param_0, param_dbb676a3a1445ba9bd529cd6856599a1_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_dbb676a3a1445ba9bd529cd6856599a1, class_type, scoring, param_0, param_1); };

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


namespace autowig {
}

void wrapper_45ef03239c8a51d0b1f396ab9e7a0cc3(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > class_45ef03239c8a51d0b1f396ab9e7a0cc3(module, "_PolymorphicCopy_45ef03239c8a51d0b1f396ab9e7a0cc3", "");
    class_45ef03239c8a51d0b1f396ab9e7a0cc3.def(pybind11::init<  >());
    class_45ef03239c8a51d0b1f396ab9e7a0cc3.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::ContinuousUnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}