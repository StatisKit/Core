#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >::PolymorphicCopy;


        public:
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