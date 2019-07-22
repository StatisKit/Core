#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_56bfe1476d1c5751ac9fe73ff87e4079;
            typedef struct ::statiskit::MultivariateData const & param_56bfe1476d1c5751ac9fe73ff87e4079_0_type;
            typedef ::statiskit::Indices const & param_56bfe1476d1c5751ac9fe73ff87e4079_1_type;
            virtual return_type_56bfe1476d1c5751ac9fe73ff87e4079 operator()(param_56bfe1476d1c5751ac9fe73ff87e4079_0_type param_0, param_56bfe1476d1c5751ac9fe73ff87e4079_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_56bfe1476d1c5751ac9fe73ff87e4079, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator > >  return_type_8716d7dc42c752c2907da43ebb6cf7e5;
            virtual return_type_8716d7dc42c752c2907da43ebb6cf7e5 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8716d7dc42c752c2907da43ebb6cf7e5, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_48dd0f6ecf7e535bb0532e174797e614;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::data_type const & param_48dd0f6ecf7e535bb0532e174797e614_0_type;
            virtual return_type_48dd0f6ecf7e535bb0532e174797e614 operator()(param_48dd0f6ecf7e535bb0532e174797e614_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48dd0f6ecf7e535bb0532e174797e614, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_ccb69f6f1ea252c78b62bd2708670cdd(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::MultivariateDistributionEstimation::Estimator > class_ccb69f6f1ea252c78b62bd2708670cdd(module, "Estimator", "");

}