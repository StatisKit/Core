#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::distribution_type * return_type_e384889726ce5027bf376aeefa7b708d;
            typedef class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & param_e384889726ce5027bf376aeefa7b708d_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_e384889726ce5027bf376aeefa7b708d_1_type;
            virtual return_type_e384889726ce5027bf376aeefa7b708d create(param_e384889726ce5027bf376aeefa7b708d_0_type param_0, param_e384889726ce5027bf376aeefa7b708d_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_e384889726ce5027bf376aeefa7b708d, class_type, create, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_ffc375e050255b0e93aeb875148628ea;
            typedef struct ::statiskit::MultivariateData const & param_ffc375e050255b0e93aeb875148628ea_0_type;
            typedef unsigned long int const & param_ffc375e050255b0e93aeb875148628ea_1_type;
            virtual return_type_ffc375e050255b0e93aeb875148628ea operator()(param_ffc375e050255b0e93aeb875148628ea_0_type param_0, param_ffc375e050255b0e93aeb875148628ea_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_ffc375e050255b0e93aeb875148628ea, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::create;
    };
}


namespace autowig {
}

void wrapper_9662a6a016085675978d04e2bc87a7f3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_9662a6a016085675978d04e2bc87a7f3(module, "Estimator", "");
    class_9662a6a016085675978d04e2bc87a7f3.def(pybind11::init<  >());
    class_9662a6a016085675978d04e2bc87a7f3.def("_create", static_cast< ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::distribution_type * (::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*) (class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::create), pybind11::return_value_policy::reference_internal, "");

}