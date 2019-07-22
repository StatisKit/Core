#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_2b9392ba394f5f1a8380d5bc47aa793e;
            virtual return_type_2b9392ba394f5f1a8380d5bc47aa793e copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_2b9392ba394f5f1a8380d5bc47aa793e, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_47877b68ac8c5802b57686bea7f9f547;
            typedef struct ::statiskit::MultivariateData const & param_47877b68ac8c5802b57686bea7f9f547_0_type;
            typedef ::statiskit::Index const & param_47877b68ac8c5802b57686bea7f9f547_1_type;
            virtual return_type_47877b68ac8c5802b57686bea7f9f547 operator()(param_47877b68ac8c5802b57686bea7f9f547_0_type param_0, param_47877b68ac8c5802b57686bea7f9f547_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_47877b68ac8c5802b57686bea7f9f547, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_f5006c7de7595cf1b83e7502ffda0880;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::data_type const & param_f5006c7de7595cf1b83e7502ffda0880_0_type;
            virtual return_type_f5006c7de7595cf1b83e7502ffda0880 operator()(param_f5006c7de7595cf1b83e7502ffda0880_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f5006c7de7595cf1b83e7502ffda0880, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_cbe0be5b997e578ea56a5ddbc174c53e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, class ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, class ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > >::Type, class ::statiskit::Optimization< class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_cbe0be5b997e578ea56a5ddbc174c53e(module, "_PolymorphicCopy_cbe0be5b997e578ea56a5ddbc174c53e", "");
    class_cbe0be5b997e578ea56a5ddbc174c53e.def(pybind11::init<  >());

}