#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::UnivariateVarianceEstimation::Estimator, struct ::statiskit::UnivariateDispersionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::UnivariateVarianceEstimation::Estimator, struct ::statiskit::UnivariateDispersionEstimation::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > >  return_type_7d584df28f0f5117a57a488efd306b17;
            virtual return_type_7d584df28f0f5117a57a488efd306b17 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_7d584df28f0f5117a57a488efd306b17, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > >  return_type_4e882ea0348e56a2816e3f3d20b8b14f;
            typedef struct ::statiskit::UnivariateData const & param_4e882ea0348e56a2816e3f3d20b8b14f_0_type;
            typedef double const & param_4e882ea0348e56a2816e3f3d20b8b14f_1_type;
            virtual return_type_4e882ea0348e56a2816e3f3d20b8b14f operator()(param_4e882ea0348e56a2816e3f3d20b8b14f_0_type param_0, param_4e882ea0348e56a2816e3f3d20b8b14f_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4e882ea0348e56a2816e3f3d20b8b14f, class_type, operator(), param_0, param_1); };
    };
}


namespace autowig {
}

void wrapper_254705bef21f59ca807412aa011917c0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateVarianceEstimation::Estimator, struct ::statiskit::UnivariateDispersionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateVarianceEstimation::Estimator, struct ::statiskit::UnivariateDispersionEstimation::Estimator > >::Type, struct ::statiskit::UnivariateDispersionEstimation::Estimator > class_254705bef21f59ca807412aa011917c0(module, "_PolymorphicCopy_254705bef21f59ca807412aa011917c0", "");
    class_254705bef21f59ca807412aa011917c0.def(pybind11::init<  >());

}