#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateDispersionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateDispersionEstimation::Estimator::Estimator;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > >  return_type_8f20422aab135f9fb601488df3d82cfa;
            virtual return_type_8f20422aab135f9fb601488df3d82cfa copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8f20422aab135f9fb601488df3d82cfa, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > >  return_type_4e882ea0348e56a2816e3f3d20b8b14f;
            typedef struct ::statiskit::UnivariateData const & param_4e882ea0348e56a2816e3f3d20b8b14f_0_type;
            typedef double const & param_4e882ea0348e56a2816e3f3d20b8b14f_1_type;
            virtual return_type_4e882ea0348e56a2816e3f3d20b8b14f operator()(param_4e882ea0348e56a2816e3f3d20b8b14f_0_type param_0, param_4e882ea0348e56a2816e3f3d20b8b14f_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4e882ea0348e56a2816e3f3d20b8b14f, class_type, operator(), param_0, param_1); };
    };
}

class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > >  (::statiskit::UnivariateDispersionEstimation::Estimator::*method_pointer_4e882ea0348e56a2816e3f3d20b8b14f)(struct ::statiskit::UnivariateData const &, double const &)const= &::statiskit::UnivariateDispersionEstimation::Estimator::operator();
class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > >  (::statiskit::UnivariateDispersionEstimation::Estimator::*method_pointer_8f20422aab135f9fb601488df3d82cfa)()const= &::statiskit::UnivariateDispersionEstimation::Estimator::copy;

namespace autowig {
}

void wrapper_484cc9c9d3f856c7aa18f642966f14a9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateDispersionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateDispersionEstimation::Estimator >::Type > class_484cc9c9d3f856c7aa18f642966f14a9(module, "Estimator", "");
    class_484cc9c9d3f856c7aa18f642966f14a9.def(pybind11::init<  >());
    class_484cc9c9d3f856c7aa18f642966f14a9.def("__call__", method_pointer_4e882ea0348e56a2816e3f3d20b8b14f, "");
    class_484cc9c9d3f856c7aa18f642966f14a9.def("copy", method_pointer_8f20422aab135f9fb601488df3d82cfa, "");

}