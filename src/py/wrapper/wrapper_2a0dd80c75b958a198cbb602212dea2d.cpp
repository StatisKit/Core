#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::UnivariateVarianceEstimation, class ::statiskit::UnivariateDispersionEstimation > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::UnivariateVarianceEstimation, class ::statiskit::UnivariateDispersionEstimation >::PolymorphicCopy;

            typedef class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > >  return_type_c976d20b0fea521da7eae4d4b0983573;
            virtual return_type_c976d20b0fea521da7eae4d4b0983573 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c976d20b0fea521da7eae4d4b0983573, class_type, copy, ); };
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