#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_163f6bff094c5658b1290a9b2b3a9d26;
            typedef ::statiskit::UnivariateDistributionEstimation::data_type const & param_163f6bff094c5658b1290a9b2b3a9d26_0_type;
            typedef bool const & param_163f6bff094c5658b1290a9b2b3a9d26_1_type;
            virtual return_type_163f6bff094c5658b1290a9b2b3a9d26 operator()(param_163f6bff094c5658b1290a9b2b3a9d26_0_type param_0, param_163f6bff094c5658b1290a9b2b3a9d26_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_163f6bff094c5658b1290a9b2b3a9d26, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}


namespace autowig {
}

void wrapper_e49aea4bd5fa5370abfd0a3ba47ff03e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_e49aea4bd5fa5370abfd0a3ba47ff03e(module, "_PolymorphicCopy_e49aea4bd5fa5370abfd0a3ba47ff03e", "");
    class_e49aea4bd5fa5370abfd0a3ba47ff03e.def(pybind11::init<  >());

}