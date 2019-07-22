#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_462d8e5c1a2858b99c356b0a0f27f99b;
            virtual return_type_462d8e5c1a2858b99c356b0a0f27f99b copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_462d8e5c1a2858b99c356b0a0f27f99b, class_type, copy, ); };
            typedef enum ::statiskit::outcome_type  return_type_587534d25215580ca64d3f38a0595f62;
            virtual return_type_587534d25215580ca64d3f38a0595f62 get_outcome() const override { PYBIND11_OVERLOAD(return_type_587534d25215580ca64d3f38a0595f62, class_type, get_outcome, ); };
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_513f1e95007657ac9d8f70c0a2356aac(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::DiscreteEvent > class_513f1e95007657ac9d8f70c0a2356aac(module, "_PolymorphicCopy_513f1e95007657ac9d8f70c0a2356aac", "");
    class_513f1e95007657ac9d8f70c0a2356aac.def(pybind11::init<  >());

}