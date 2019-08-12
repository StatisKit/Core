#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateEvent class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateEvent::UnivariateEvent;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_963689b729ca55bb9ee4a8fbb5e871c0;
            virtual return_type_963689b729ca55bb9ee4a8fbb5e871c0 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_963689b729ca55bb9ee4a8fbb5e871c0, class_type, copy, ); };

        public:
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };

        public:
            typedef enum ::statiskit::outcome_type  return_type_68e98310906f5b1a8f388fded81a6acd;
            virtual return_type_68e98310906f5b1a8f388fded81a6acd get_outcome() const override { PYBIND11_OVERLOAD_PURE(return_type_68e98310906f5b1a8f388fded81a6acd, class_type, get_outcome, ); };
    };
}

enum ::statiskit::outcome_type  (::statiskit::UnivariateEvent::*method_pointer_68e98310906f5b1a8f388fded81a6acd)()const= &::statiskit::UnivariateEvent::get_outcome;
enum ::statiskit::censoring_type  (::statiskit::UnivariateEvent::*method_pointer_e27fd4219e44503fa91f650545c9af28)()const= &::statiskit::UnivariateEvent::get_censoring;
class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateEvent::*method_pointer_963689b729ca55bb9ee4a8fbb5e871c0)()const= &::statiskit::UnivariateEvent::copy;

namespace autowig {
}

void wrapper_e695b5b519815f1f96debe2f459d2f2b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateEvent, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateEvent >::Type > class_e695b5b519815f1f96debe2f459d2f2b(module, "UnivariateEvent", "");
    class_e695b5b519815f1f96debe2f459d2f2b.def("get_outcome", method_pointer_68e98310906f5b1a8f388fded81a6acd, "");
    class_e695b5b519815f1f96debe2f459d2f2b.def("get_censoring", method_pointer_e27fd4219e44503fa91f650545c9af28, "");
    class_e695b5b519815f1f96debe2f459d2f2b.def("copy", method_pointer_963689b729ca55bb9ee4a8fbb5e871c0, "");

}