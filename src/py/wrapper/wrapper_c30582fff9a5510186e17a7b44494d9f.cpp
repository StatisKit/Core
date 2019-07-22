#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_11748a94b8275545ae9616916b9f06c2;
            virtual return_type_11748a94b8275545ae9616916b9f06c2 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_11748a94b8275545ae9616916b9f06c2, class_type, copy, ); };
            typedef enum ::statiskit::outcome_type  return_type_e273d319eb365120b28ccc9993bd199b;
            virtual return_type_e273d319eb365120b28ccc9993bd199b get_outcome() const override { PYBIND11_OVERLOAD(return_type_e273d319eb365120b28ccc9993bd199b, class_type, get_outcome, ); };
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_c30582fff9a5510186e17a7b44494d9f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::ContinuousEvent > class_c30582fff9a5510186e17a7b44494d9f(module, "_PolymorphicCopy_c30582fff9a5510186e17a7b44494d9f", "");
    class_c30582fff9a5510186e17a7b44494d9f.def(pybind11::init<  >());

}