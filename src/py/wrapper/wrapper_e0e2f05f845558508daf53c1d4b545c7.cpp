#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_a9b3fe6023445b199d3e0affdbba4ff7;
            virtual return_type_a9b3fe6023445b199d3e0affdbba4ff7 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_a9b3fe6023445b199d3e0affdbba4ff7, class_type, copy, ); };
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

void wrapper_e0e2f05f845558508daf53c1d4b545c7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_e0e2f05f845558508daf53c1d4b545c7(module, "_PolymorphicCopy_e0e2f05f845558508daf53c1d4b545c7", "");
    class_e0e2f05f845558508daf53c1d4b545c7.def(pybind11::init<  >());

}