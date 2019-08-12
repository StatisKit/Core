#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, struct ::statiskit::CategoricalEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, struct ::statiskit::CategoricalEvent >::PolymorphicCopy;


        public:
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_7d52c5fa83fa5b7abbc12831a19a2931(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, struct ::statiskit::CategoricalEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, struct ::statiskit::CategoricalEvent > >::Type, struct ::statiskit::CategoricalEvent > class_7d52c5fa83fa5b7abbc12831a19a2931(module, "_PolymorphicCopy_7d52c5fa83fa5b7abbc12831a19a2931", "");
    class_7d52c5fa83fa5b7abbc12831a19a2931.def(pybind11::init<  >());

}