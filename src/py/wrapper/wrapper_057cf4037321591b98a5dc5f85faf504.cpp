#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DistributionEstimation< ::statiskit::MultivariateDistribution >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DistributionEstimation< ::statiskit::MultivariateDistribution >::Estimator::Estimator;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator > >  return_type_8716d7dc42c752c2907da43ebb6cf7e5;
            virtual return_type_8716d7dc42c752c2907da43ebb6cf7e5 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8716d7dc42c752c2907da43ebb6cf7e5, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_48dd0f6ecf7e535bb0532e174797e614;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::data_type const & param_48dd0f6ecf7e535bb0532e174797e614_0_type;
            virtual return_type_48dd0f6ecf7e535bb0532e174797e614 operator()(param_48dd0f6ecf7e535bb0532e174797e614_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48dd0f6ecf7e535bb0532e174797e614, class_type, operator(), param_0); };
    };
}

class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::MultivariateDistribution >::Estimator::*method_pointer_48dd0f6ecf7e535bb0532e174797e614)(::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::data_type const &)const= &::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::operator();
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator > >  (::statiskit::DistributionEstimation< ::statiskit::MultivariateDistribution >::Estimator::*method_pointer_8716d7dc42c752c2907da43ebb6cf7e5)()const= &::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::copy;

namespace autowig {
}

void wrapper_057cf4037321591b98a5dc5f85faf504(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator >::Type > class_057cf4037321591b98a5dc5f85faf504(module, "Estimator", "");
    class_057cf4037321591b98a5dc5f85faf504.def(pybind11::init<  >());
    class_057cf4037321591b98a5dc5f85faf504.def("__call__", method_pointer_48dd0f6ecf7e535bb0532e174797e614, "");
    class_057cf4037321591b98a5dc5f85faf504.def("copy", method_pointer_8716d7dc42c752c2907da43ebb6cf7e5, "");

}