#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::Optimization;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator > >  return_type_8716d7dc42c752c2907da43ebb6cf7e5;
            virtual return_type_8716d7dc42c752c2907da43ebb6cf7e5 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8716d7dc42c752c2907da43ebb6cf7e5, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_171594468546584aa9e0715c04238dd6;
            typedef struct ::statiskit::MultivariateData const & param_171594468546584aa9e0715c04238dd6_0_type;
            typedef class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & param_171594468546584aa9e0715c04238dd6_1_type;
            virtual return_type_171594468546584aa9e0715c04238dd6 operator()(param_171594468546584aa9e0715c04238dd6_0_type param_0, param_171594468546584aa9e0715c04238dd6_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_171594468546584aa9e0715c04238dd6, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution > > >  return_type_48dd0f6ecf7e535bb0532e174797e614;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::MultivariateDistribution >::Estimator::data_type const & param_48dd0f6ecf7e535bb0532e174797e614_0_type;
            virtual return_type_48dd0f6ecf7e535bb0532e174797e614 operator()(param_48dd0f6ecf7e535bb0532e174797e614_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48dd0f6ecf7e535bb0532e174797e614, class_type, operator(), param_0); };
    };
}

double const & (::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::*method_pointer_4d95d48abd75547d8edebae27f7ffb98)()const= &::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::*method_pointer_670ac5d1b2445dceba299169780cb36c)(double const &)= &::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::*method_pointer_91b88fbedca65b38a8d6bb3e4526939f)()const= &::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::*method_pointer_b878c3c62950543b8ab9d62665c43159)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::*method_pointer_ff07c3be94365ccab5758e39b3a35c8d)()const= &::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::*method_pointer_1916b75d26d55d169edfc40ca32e94a9)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_7341ddcf708c51d5b493d81c653b51bb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > >::Type, struct ::statiskit::NegativeMultinomialDistributionEstimation::Estimator > class_7341ddcf708c51d5b493d81c653b51bb(module, "_Optimization_7341ddcf708c51d5b493d81c653b51bb", "");
    class_7341ddcf708c51d5b493d81c653b51bb.def(pybind11::init<  >());
    class_7341ddcf708c51d5b493d81c653b51bb.def("get_mindiff", method_pointer_4d95d48abd75547d8edebae27f7ffb98, pybind11::return_value_policy::copy, "");
    class_7341ddcf708c51d5b493d81c653b51bb.def("set_mindiff", method_pointer_670ac5d1b2445dceba299169780cb36c, "");
    class_7341ddcf708c51d5b493d81c653b51bb.def("get_minits", method_pointer_91b88fbedca65b38a8d6bb3e4526939f, "");
    class_7341ddcf708c51d5b493d81c653b51bb.def("set_minits", method_pointer_b878c3c62950543b8ab9d62665c43159, "");
    class_7341ddcf708c51d5b493d81c653b51bb.def("get_maxits", method_pointer_ff07c3be94365ccab5758e39b3a35c8d, "");
    class_7341ddcf708c51d5b493d81c653b51bb.def("set_maxits", method_pointer_1916b75d26d55d169edfc40ca32e94a9, "");

}