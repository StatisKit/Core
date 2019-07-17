#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::NormalDistributionMLEstimation::Estimator, ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::NormalDistributionMLEstimation::Estimator, ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_47877b68ac8c5802b57686bea7f9f547;
            typedef struct ::statiskit::MultivariateData const & param_47877b68ac8c5802b57686bea7f9f547_0_type;
            typedef ::statiskit::Index const & param_47877b68ac8c5802b57686bea7f9f547_1_type;
            virtual return_type_47877b68ac8c5802b57686bea7f9f547 operator()(param_47877b68ac8c5802b57686bea7f9f547_0_type param_0, param_47877b68ac8c5802b57686bea7f9f547_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_47877b68ac8c5802b57686bea7f9f547, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_f5006c7de7595cf1b83e7502ffda0880;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::data_type const & param_f5006c7de7595cf1b83e7502ffda0880_0_type;
            virtual return_type_f5006c7de7595cf1b83e7502ffda0880 operator()(param_f5006c7de7595cf1b83e7502ffda0880_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f5006c7de7595cf1b83e7502ffda0880, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_8dc14cd974045db7ab63d2d8c0c5c496(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::NormalDistributionMLEstimation::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NormalDistributionMLEstimation::Estimator, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type, class ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_8dc14cd974045db7ab63d2d8c0c5c496(module, "_PolymorphicCopy_8dc14cd974045db7ab63d2d8c0c5c496", "");
    class_8dc14cd974045db7ab63d2d8c0c5c496.def(pybind11::init<  >());

}