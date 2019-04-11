#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::PolymorphicCopy;


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

void wrapper_2613fe07dc7251cea4181b6d9d00aad1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > class_2613fe07dc7251cea4181b6d9d00aad1(module, "_PolymorphicCopy_2613fe07dc7251cea4181b6d9d00aad1", "");
    class_2613fe07dc7251cea4181b6d9d00aad1.def(pybind11::init<  >());

}