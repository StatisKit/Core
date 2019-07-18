#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::distribution_type * return_type_dfd29c987e235fa4a01180e223b9a882;
            typedef class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & param_dfd29c987e235fa4a01180e223b9a882_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_dfd29c987e235fa4a01180e223b9a882_1_type;
            virtual return_type_dfd29c987e235fa4a01180e223b9a882 create(param_dfd29c987e235fa4a01180e223b9a882_0_type param_0, param_dfd29c987e235fa4a01180e223b9a882_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_dfd29c987e235fa4a01180e223b9a882, class_type, create, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_47877b68ac8c5802b57686bea7f9f547;
            typedef struct ::statiskit::MultivariateData const & param_47877b68ac8c5802b57686bea7f9f547_0_type;
            typedef ::statiskit::Index const & param_47877b68ac8c5802b57686bea7f9f547_1_type;
            virtual return_type_47877b68ac8c5802b57686bea7f9f547 operator()(param_47877b68ac8c5802b57686bea7f9f547_0_type param_0, param_47877b68ac8c5802b57686bea7f9f547_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_47877b68ac8c5802b57686bea7f9f547, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::create;
    };
}


namespace autowig {
}

void wrapper_0175e6a3766750de8ea59e8c340325ef(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_0175e6a3766750de8ea59e8c340325ef(module, "Estimator", "");
    class_0175e6a3766750de8ea59e8c340325ef.def(pybind11::init<  >());
    class_0175e6a3766750de8ea59e8c340325ef.def("_create", static_cast< ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::distribution_type * (::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*) (class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::create), pybind11::return_value_policy::reference_internal, "");

}