#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_78996ca7fa9d5ebead3e3c6a72db16ee;
            typedef struct ::statiskit::DiscreteUnivariateDistribution const * param_78996ca7fa9d5ebead3e3c6a72db16ee_0_type;
            typedef struct ::statiskit::UnivariateData const & param_78996ca7fa9d5ebead3e3c6a72db16ee_1_type;
            virtual return_type_78996ca7fa9d5ebead3e3c6a72db16ee scoring(param_78996ca7fa9d5ebead3e3c6a72db16ee_0_type param_0, param_78996ca7fa9d5ebead3e3c6a72db16ee_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_78996ca7fa9d5ebead3e3c6a72db16ee, class_type, scoring, param_0, param_1); };

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

void wrapper_b6d36b833ba954b1a5101fc3e17aeea9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > class_b6d36b833ba954b1a5101fc3e17aeea9(module, "_PolymorphicCopy_b6d36b833ba954b1a5101fc3e17aeea9", "");
    class_b6d36b833ba954b1a5101fc3e17aeea9.def(pybind11::init<  >());
    class_b6d36b833ba954b1a5101fc3e17aeea9.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::DiscreteUnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}