#include "_core.h"

namespace autowig
{
    typedef ::statiskit::GeometricDistributionMLEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::GeometricDistributionMLEstimation::Estimator::Estimator;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_47877b68ac8c5802b57686bea7f9f547;
            typedef struct ::statiskit::MultivariateData const & param_47877b68ac8c5802b57686bea7f9f547_0_type;
            typedef ::statiskit::Index const & param_47877b68ac8c5802b57686bea7f9f547_1_type;
            virtual return_type_47877b68ac8c5802b57686bea7f9f547 operator()(param_47877b68ac8c5802b57686bea7f9f547_0_type param_0, param_47877b68ac8c5802b57686bea7f9f547_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_47877b68ac8c5802b57686bea7f9f547, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };
    };
}


namespace autowig {
}

void wrapper_cb4432e6b9d05dfaa3b6285bbadb3f60(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::GeometricDistributionMLEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::GeometricDistributionMLEstimation::Estimator >::Type, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_cb4432e6b9d05dfaa3b6285bbadb3f60(module, "Estimator", "");
    class_cb4432e6b9d05dfaa3b6285bbadb3f60.def(pybind11::init<  >());

}