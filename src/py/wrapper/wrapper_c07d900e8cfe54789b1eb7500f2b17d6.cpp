#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >::PolymorphicCopy;


        public:
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_c07d900e8cfe54789b1eb7500f2b17d6(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::ContinuousEvent > class_c07d900e8cfe54789b1eb7500f2b17d6(module, "_PolymorphicCopy_c07d900e8cfe54789b1eb7500f2b17d6", "");
    class_c07d900e8cfe54789b1eb7500f2b17d6.def(pybind11::init<  >());

}