#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_6f8d19004461501ab782f1d329f7f359;
            virtual return_type_6f8d19004461501ab782f1d329f7f359 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_6f8d19004461501ab782f1d329f7f359, class_type, copy, ); };
            typedef enum ::statiskit::outcome_type  return_type_587534d25215580ca64d3f38a0595f62;
            virtual return_type_587534d25215580ca64d3f38a0595f62 get_outcome() const override { PYBIND11_OVERLOAD(return_type_587534d25215580ca64d3f38a0595f62, class_type, get_outcome, ); };
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_a32936912db85574b408168f51749429(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > >::Type, struct ::statiskit::DiscreteEvent > class_a32936912db85574b408168f51749429(module, "_PolymorphicCopy_a32936912db85574b408168f51749429", "");
    class_a32936912db85574b408168f51749429.def(pybind11::init<  >());

}