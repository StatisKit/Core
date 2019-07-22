#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_cbbca6699ce05d0ea9488bf5a1a5e645;
            virtual return_type_cbbca6699ce05d0ea9488bf5a1a5e645 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_cbbca6699ce05d0ea9488bf5a1a5e645, class_type, copy, ); };
            typedef enum ::statiskit::outcome_type  return_type_e273d319eb365120b28ccc9993bd199b;
            virtual return_type_e273d319eb365120b28ccc9993bd199b get_outcome() const override { PYBIND11_OVERLOAD(return_type_e273d319eb365120b28ccc9993bd199b, class_type, get_outcome, ); };
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_acaf9a5cc6ee5eff8cfa5b68a6258d5a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::ContinuousEvent > class_acaf9a5cc6ee5eff8cfa5b68a6258d5a(module, "_PolymorphicCopy_acaf9a5cc6ee5eff8cfa5b68a6258d5a", "");
    class_acaf9a5cc6ee5eff8cfa5b68a6258d5a.def(pybind11::init<  >());

}