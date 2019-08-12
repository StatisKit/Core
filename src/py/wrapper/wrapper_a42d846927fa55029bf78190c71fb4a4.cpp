#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::MultivariateVarianceEstimation::Estimator, struct ::statiskit::MultivariateDispersionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::MultivariateVarianceEstimation::Estimator, struct ::statiskit::MultivariateDispersionEstimation::Estimator >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > >  return_type_362d225b055b59faab2c348f93722cb7;
            typedef struct ::statiskit::MultivariateData const & param_362d225b055b59faab2c348f93722cb7_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_362d225b055b59faab2c348f93722cb7_1_type;
            virtual return_type_362d225b055b59faab2c348f93722cb7 operator()(param_362d225b055b59faab2c348f93722cb7_0_type param_0, param_362d225b055b59faab2c348f93722cb7_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_362d225b055b59faab2c348f93722cb7, class_type, operator(), param_0, param_1); };
    };
}


namespace autowig {
}

void wrapper_a42d846927fa55029bf78190c71fb4a4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateVarianceEstimation::Estimator, struct ::statiskit::MultivariateDispersionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateVarianceEstimation::Estimator, struct ::statiskit::MultivariateDispersionEstimation::Estimator > >::Type, struct ::statiskit::MultivariateDispersionEstimation::Estimator > class_a42d846927fa55029bf78190c71fb4a4(module, "_PolymorphicCopy_a42d846927fa55029bf78190c71fb4a4", "");
    class_a42d846927fa55029bf78190c71fb4a4.def(pybind11::init<  >());

}