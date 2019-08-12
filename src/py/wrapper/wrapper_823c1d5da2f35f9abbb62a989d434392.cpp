#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::distribution_type * return_type_dfd29c987e235fa4a01180e223b9a882;
            typedef class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & param_dfd29c987e235fa4a01180e223b9a882_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_dfd29c987e235fa4a01180e223b9a882_1_type;
            virtual return_type_dfd29c987e235fa4a01180e223b9a882 create(param_dfd29c987e235fa4a01180e223b9a882_0_type param_0, param_dfd29c987e235fa4a01180e223b9a882_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_dfd29c987e235fa4a01180e223b9a882, class_type, create, param_0, param_1); };

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

void wrapper_823c1d5da2f35f9abbb62a989d434392(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::ContinuousUnivariateFrequencyDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > class_823c1d5da2f35f9abbb62a989d434392(module, "_PolymorphicCopy_823c1d5da2f35f9abbb62a989d434392", "");
    class_823c1d5da2f35f9abbb62a989d434392.def(pybind11::init<  >());
    class_823c1d5da2f35f9abbb62a989d434392.def("_create", static_cast< ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::distribution_type * (::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*) (class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::create), pybind11::return_value_policy::reference_internal, "");

}