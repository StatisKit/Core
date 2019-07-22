#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::IndexSelectedData, struct ::statiskit::UnivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::IndexSelectedData, struct ::statiskit::UnivariateData >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_00dc14d2344551038bf30fab06a278a1;
            virtual return_type_00dc14d2344551038bf30fab06a278a1 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_00dc14d2344551038bf30fab06a278a1, class_type, copy, ); };
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_21507917363a580db5491fa57b8df73d;
            virtual return_type_21507917363a580db5491fa57b8df73d get_sample_space() const override { PYBIND11_OVERLOAD_PURE(return_type_21507917363a580db5491fa57b8df73d, class_type, get_sample_space, ); };
            typedef ::statiskit::Index  return_type_7329cda10ff05b02b002e0eb5bbc9083;
            virtual return_type_7329cda10ff05b02b002e0eb5bbc9083 get_nb_events() const override { PYBIND11_OVERLOAD(return_type_7329cda10ff05b02b002e0eb5bbc9083, class_type, get_nb_events, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  return_type_a33919ff84f759e6b649d1aea1a76e87;
            virtual return_type_a33919ff84f759e6b649d1aea1a76e87 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a33919ff84f759e6b649d1aea1a76e87, class_type, generator, ); };
    };
}


namespace autowig {
}

void wrapper_bc2764672801516e9cea984f33c9d9bf(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::IndexSelectedData, struct ::statiskit::UnivariateData >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::IndexSelectedData, struct ::statiskit::UnivariateData > >::Type, struct ::statiskit::UnivariateData > class_bc2764672801516e9cea984f33c9d9bf(module, "_PolymorphicCopy_bc2764672801516e9cea984f33c9d9bf", "");
    class_bc2764672801516e9cea984f33c9d9bf.def(pybind11::init<  >());

}