#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Optimization;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_56bfe1476d1c5751ac9fe73ff87e4079;
            typedef struct ::statiskit::MultivariateData const & param_56bfe1476d1c5751ac9fe73ff87e4079_0_type;
            typedef ::statiskit::Indices const & param_56bfe1476d1c5751ac9fe73ff87e4079_1_type;
            virtual return_type_56bfe1476d1c5751ac9fe73ff87e4079 operator()(param_56bfe1476d1c5751ac9fe73ff87e4079_0_type param_0, param_56bfe1476d1c5751ac9fe73ff87e4079_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_56bfe1476d1c5751ac9fe73ff87e4079, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator > >  return_type_8716d7dc42c752c2907da43ebb6cf7e5;
            virtual return_type_8716d7dc42c752c2907da43ebb6cf7e5 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8716d7dc42c752c2907da43ebb6cf7e5, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_48dd0f6ecf7e535bb0532e174797e614;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::data_type const & param_48dd0f6ecf7e535bb0532e174797e614_0_type;
            virtual return_type_48dd0f6ecf7e535bb0532e174797e614 operator()(param_48dd0f6ecf7e535bb0532e174797e614_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48dd0f6ecf7e535bb0532e174797e614, class_type, operator(), param_0); };
    };
}

double const & (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_2d570bb6238c588e8df030fcc186f8a2)()const= &::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_b5dbf9a293985f8ba1770a0b07915da4)(double const &)= &::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_2a0bf3f8ae745dd0adf4697ab5a385af)()const= &::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_d65c85cb59785e15ac07984f310b0d74)(unsigned int const &)= &::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_1ba12dd370ba5426a662a8c29fa3d4ef)()const= &::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_8215e7fb91415f0dbd10a2bb22e19766)(unsigned int const &)= &::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_b730e37e69f05687be99d670316afe25(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type, class ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > class_b730e37e69f05687be99d670316afe25(module, "_Optimization_b730e37e69f05687be99d670316afe25", "");
    class_b730e37e69f05687be99d670316afe25.def(pybind11::init<  >());
    class_b730e37e69f05687be99d670316afe25.def("get_mindiff", method_pointer_2d570bb6238c588e8df030fcc186f8a2, pybind11::return_value_policy::copy, "");
    class_b730e37e69f05687be99d670316afe25.def("set_mindiff", method_pointer_b5dbf9a293985f8ba1770a0b07915da4, "");
    class_b730e37e69f05687be99d670316afe25.def("get_minits", method_pointer_2a0bf3f8ae745dd0adf4697ab5a385af, "");
    class_b730e37e69f05687be99d670316afe25.def("set_minits", method_pointer_d65c85cb59785e15ac07984f310b0d74, "");
    class_b730e37e69f05687be99d670316afe25.def("get_maxits", method_pointer_1ba12dd370ba5426a662a8c29fa3d4ef, "");
    class_b730e37e69f05687be99d670316afe25.def("set_maxits", method_pointer_8215e7fb91415f0dbd10a2bb22e19766, "");

}