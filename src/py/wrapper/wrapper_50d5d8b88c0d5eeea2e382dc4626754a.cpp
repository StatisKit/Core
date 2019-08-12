#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::MultivariateVarianceEstimation, class ::statiskit::MultivariateDispersionEstimation > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::MultivariateVarianceEstimation, class ::statiskit::MultivariateDispersionEstimation >::PolymorphicCopy;


        public:
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & return_type_f90e89297ac2541ca0716c5f01e71bb0;
            virtual return_type_f90e89297ac2541ca0716c5f01e71bb0 get_dispersion() const override { PYBIND11_OVERLOAD_PURE(return_type_f90e89297ac2541ca0716c5f01e71bb0, class_type, get_dispersion, ); };
    };
}


namespace autowig {
}

void wrapper_50d5d8b88c0d5eeea2e382dc4626754a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateVarianceEstimation, class ::statiskit::MultivariateDispersionEstimation >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateVarianceEstimation, class ::statiskit::MultivariateDispersionEstimation > >::Type, class ::statiskit::MultivariateDispersionEstimation > class_50d5d8b88c0d5eeea2e382dc4626754a(module, "_PolymorphicCopy_50d5d8b88c0d5eeea2e382dc4626754a", "");

}