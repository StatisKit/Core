#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_de5ae877a6785d2b99766b9f891dfcca;
            virtual return_type_de5ae877a6785d2b99766b9f891dfcca copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_de5ae877a6785d2b99766b9f891dfcca, class_type, copy, ); };
            typedef enum ::statiskit::outcome_type  return_type_587534d25215580ca64d3f38a0595f62;
            virtual return_type_587534d25215580ca64d3f38a0595f62 get_outcome() const override { PYBIND11_OVERLOAD(return_type_587534d25215580ca64d3f38a0595f62, class_type, get_outcome, ); };
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_864140a02b1554ffbf15f5c312a38d8c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::DiscreteEvent > class_864140a02b1554ffbf15f5c312a38d8c(module, "_PolymorphicCopy_864140a02b1554ffbf15f5c312a38d8c", "");
    class_864140a02b1554ffbf15f5c312a38d8c.def(pybind11::init<  >());

}