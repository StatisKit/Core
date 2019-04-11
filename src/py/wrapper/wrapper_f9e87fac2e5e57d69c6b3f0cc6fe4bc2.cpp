#include "_core.h"

namespace autowig
{
    typedef ::statiskit::OptimizationEstimationImpl< ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::OptimizationEstimationImpl< ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::Estimator;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  return_type_8b02691f7b535adda732068708b90596;
            virtual return_type_8b02691f7b535adda732068708b90596 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8b02691f7b535adda732068708b90596, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  return_type_ef6596d10b575b13b141d8bcf05ac09a;
            typedef ::statiskit::SingularDistributionEstimation::data_type const & param_ef6596d10b575b13b141d8bcf05ac09a_0_type;
            typedef bool const & param_ef6596d10b575b13b141d8bcf05ac09a_1_type;
            virtual return_type_ef6596d10b575b13b141d8bcf05ac09a operator()(param_ef6596d10b575b13b141d8bcf05ac09a_0_type param_0, param_ef6596d10b575b13b141d8bcf05ac09a_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_ef6596d10b575b13b141d8bcf05ac09a, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}


namespace autowig {
}

void wrapper_f9e87fac2e5e57d69c6b3f0cc6fe4bc2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type, class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > > class_f9e87fac2e5e57d69c6b3f0cc6fe4bc2(module, "Estimator", "");
    class_f9e87fac2e5e57d69c6b3f0cc6fe4bc2.def(pybind11::init<  >());

}