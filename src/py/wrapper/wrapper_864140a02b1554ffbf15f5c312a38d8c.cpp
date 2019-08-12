#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, struct ::statiskit::DiscreteEvent >::PolymorphicCopy;


        public:
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