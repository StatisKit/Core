#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator, ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator, ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_56bfe1476d1c5751ac9fe73ff87e4079;
            typedef struct ::statiskit::MultivariateData const & param_56bfe1476d1c5751ac9fe73ff87e4079_0_type;
            typedef ::statiskit::Indices const & param_56bfe1476d1c5751ac9fe73ff87e4079_1_type;
            virtual return_type_56bfe1476d1c5751ac9fe73ff87e4079 operator()(param_56bfe1476d1c5751ac9fe73ff87e4079_0_type param_0, param_56bfe1476d1c5751ac9fe73ff87e4079_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_56bfe1476d1c5751ac9fe73ff87e4079, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_48dd0f6ecf7e535bb0532e174797e614;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::data_type const & param_48dd0f6ecf7e535bb0532e174797e614_0_type;
            virtual return_type_48dd0f6ecf7e535bb0532e174797e614 operator()(param_48dd0f6ecf7e535bb0532e174797e614_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48dd0f6ecf7e535bb0532e174797e614, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_c6691c5b303051859dffd8d2f0d6c188(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator, class ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator, class ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > > >::Type, class ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > > class_c6691c5b303051859dffd8d2f0d6c188(module, "_PolymorphicCopy_c6691c5b303051859dffd8d2f0d6c188", "");
    class_c6691c5b303051859dffd8d2f0d6c188.def(pybind11::init<  >());

}