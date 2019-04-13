#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_8c86d1b0ff0a5245afa03a841d54847a;
            virtual return_type_8c86d1b0ff0a5245afa03a841d54847a copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_8c86d1b0ff0a5245afa03a841d54847a, class_type, copy, ); };
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_21507917363a580db5491fa57b8df73d;
            virtual return_type_21507917363a580db5491fa57b8df73d get_sample_space() const override { PYBIND11_OVERLOAD_PURE(return_type_21507917363a580db5491fa57b8df73d, class_type, get_sample_space, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  return_type_a33919ff84f759e6b649d1aea1a76e87;
            virtual return_type_a33919ff84f759e6b649d1aea1a76e87 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a33919ff84f759e6b649d1aea1a76e87, class_type, generator, ); };
            typedef ::statiskit::Index  return_type_ccb6e82201a6558e9733151230bbc9af;
            virtual return_type_ccb6e82201a6558e9733151230bbc9af size() const override { PYBIND11_OVERLOAD(return_type_ccb6e82201a6558e9733151230bbc9af, class_type, size, ); };
    };
}


namespace autowig {
}

void wrapper_1790dd7d2111554099562871bb0f85af(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > >::Type, struct ::statiskit::UnivariateData > class_1790dd7d2111554099562871bb0f85af(module, "_PolymorphicCopy_1790dd7d2111554099562871bb0f85af", "");
    class_1790dd7d2111554099562871bb0f85af.def(pybind11::init<  >());

}