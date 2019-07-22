#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_090805dc0a4a5d56a6db0e2707d06cc6;
            virtual return_type_090805dc0a4a5d56a6db0e2707d06cc6 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_090805dc0a4a5d56a6db0e2707d06cc6, class_type, copy, ); };
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

void wrapper_55903cb2e67650868a4cd698632375c1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_55903cb2e67650868a4cd698632375c1(module, "_PolymorphicCopy_55903cb2e67650868a4cd698632375c1", "");
    class_55903cb2e67650868a4cd698632375c1.def(pybind11::init<  >());

}