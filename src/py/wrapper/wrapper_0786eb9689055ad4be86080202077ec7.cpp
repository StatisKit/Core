#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateMeanEstimation::Estimator, struct ::statiskit::UnivariateLocationEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateMeanEstimation::Estimator, struct ::statiskit::UnivariateLocationEstimation::Estimator >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  return_type_e340294596125a0b839c5cee432407c7;
            typedef struct ::statiskit::UnivariateData const & param_e340294596125a0b839c5cee432407c7_0_type;
            virtual return_type_e340294596125a0b839c5cee432407c7 operator()(param_e340294596125a0b839c5cee432407c7_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e340294596125a0b839c5cee432407c7, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_0786eb9689055ad4be86080202077ec7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateMeanEstimation::Estimator, struct ::statiskit::UnivariateLocationEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateMeanEstimation::Estimator, struct ::statiskit::UnivariateLocationEstimation::Estimator > >::Type, struct ::statiskit::UnivariateLocationEstimation::Estimator > class_0786eb9689055ad4be86080202077ec7(module, "_PolymorphicCopy_0786eb9689055ad4be86080202077ec7", "");
    class_0786eb9689055ad4be86080202077ec7.def(pybind11::init<  >());

}