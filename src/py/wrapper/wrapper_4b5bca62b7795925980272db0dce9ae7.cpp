#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_1306ea6a26b758598edecb2c09123293;
            virtual return_type_1306ea6a26b758598edecb2c09123293 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_1306ea6a26b758598edecb2c09123293, class_type, copy, ); };
            typedef enum ::statiskit::outcome_type  return_type_e273d319eb365120b28ccc9993bd199b;
            virtual return_type_e273d319eb365120b28ccc9993bd199b get_outcome() const override { PYBIND11_OVERLOAD(return_type_e273d319eb365120b28ccc9993bd199b, class_type, get_outcome, ); };
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_4b5bca62b7795925980272db0dce9ae7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >, struct ::statiskit::ContinuousEvent > >::Type, struct ::statiskit::ContinuousEvent > class_4b5bca62b7795925980272db0dce9ae7(module, "_PolymorphicCopy_4b5bca62b7795925980272db0dce9ae7", "");
    class_4b5bca62b7795925980272db0dce9ae7.def(pybind11::init<  >());

}