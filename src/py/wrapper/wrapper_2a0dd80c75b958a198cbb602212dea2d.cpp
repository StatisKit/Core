#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::UnivariateVarianceEstimation, class ::statiskit::UnivariateDispersionEstimation > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::UnivariateVarianceEstimation, class ::statiskit::UnivariateDispersionEstimation >::PolymorphicCopy;


        public:
            typedef double const & return_type_a18c7d90bacb538d9895cf5c0091b871;
            virtual return_type_a18c7d90bacb538d9895cf5c0091b871 get_dispersion() const override { PYBIND11_OVERLOAD_PURE(return_type_a18c7d90bacb538d9895cf5c0091b871, class_type, get_dispersion, ); };
    };
}


namespace autowig {
}

void wrapper_2a0dd80c75b958a198cbb602212dea2d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateVarianceEstimation, class ::statiskit::UnivariateDispersionEstimation >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateVarianceEstimation, class ::statiskit::UnivariateDispersionEstimation > >::Type, class ::statiskit::UnivariateDispersionEstimation > class_2a0dd80c75b958a198cbb602212dea2d(module, "_PolymorphicCopy_2a0dd80c75b958a198cbb602212dea2d", "");

}