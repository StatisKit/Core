#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateMeanEstimation::Estimator, struct ::statiskit::MultivariateLocationEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateMeanEstimation::Estimator, struct ::statiskit::MultivariateLocationEstimation::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > >  return_type_5a6b8c33bc2a51f9946990fb646f8b2d;
            virtual return_type_5a6b8c33bc2a51f9946990fb646f8b2d copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_5a6b8c33bc2a51f9946990fb646f8b2d, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  return_type_e9ba7deeca0056cb9754cfd757b7c670;
            typedef struct ::statiskit::MultivariateData const & param_e9ba7deeca0056cb9754cfd757b7c670_0_type;
            virtual return_type_e9ba7deeca0056cb9754cfd757b7c670 operator()(param_e9ba7deeca0056cb9754cfd757b7c670_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e9ba7deeca0056cb9754cfd757b7c670, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_a0117c6545ed509a9f9743da0a6360b7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateMeanEstimation::Estimator, struct ::statiskit::MultivariateLocationEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateMeanEstimation::Estimator, struct ::statiskit::MultivariateLocationEstimation::Estimator > >::Type, struct ::statiskit::MultivariateLocationEstimation::Estimator > class_a0117c6545ed509a9f9743da0a6360b7(module, "_PolymorphicCopy_a0117c6545ed509a9f9743da0a6360b7", "");
    class_a0117c6545ed509a9f9743da0a6360b7.def(pybind11::init<  >());

}