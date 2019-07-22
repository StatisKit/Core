#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateDistributionEstimation::Estimator::Estimator;

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

class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  (::statiskit::MultivariateDistributionEstimation::Estimator::*method_pointer_56bfe1476d1c5751ac9fe73ff87e4079)(struct ::statiskit::MultivariateData const &, ::statiskit::Indices const &)const= &::statiskit::MultivariateDistributionEstimation::Estimator::operator();

namespace autowig {
}

void wrapper_6eb1ba92b1d158b09999c16267a2ec28(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator > class_6eb1ba92b1d158b09999c16267a2ec28(module, "Estimator", "");
    class_6eb1ba92b1d158b09999c16267a2ec28.def(pybind11::init<  >());
    class_6eb1ba92b1d158b09999c16267a2ec28.def("__call__", method_pointer_56bfe1476d1c5751ac9fe73ff87e4079, "");

}