#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalEvent class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalEvent::CategoricalEvent;

            typedef enum ::statiskit::outcome_type  return_type_6be7c81ad3ae5c77a462d7101baa7329;
            virtual return_type_6be7c81ad3ae5c77a462d7101baa7329 get_outcome() const override { PYBIND11_OVERLOAD(return_type_6be7c81ad3ae5c77a462d7101baa7329, class_type, get_outcome, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_963689b729ca55bb9ee4a8fbb5e871c0;
            virtual return_type_963689b729ca55bb9ee4a8fbb5e871c0 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_963689b729ca55bb9ee4a8fbb5e871c0, class_type, copy, ); };
            typedef enum ::statiskit::event_type  return_type_3544ff3ce8685011b1261f19fcf546be;
            virtual return_type_3544ff3ce8685011b1261f19fcf546be get_event() const override { PYBIND11_OVERLOAD_PURE(return_type_3544ff3ce8685011b1261f19fcf546be, class_type, get_event, ); };
    };
}


namespace autowig {
}

void wrapper_cf0179fb6c94524589e450e5bcacc532(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalEvent, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalEvent >::Type, struct ::statiskit::UnivariateEvent > class_cf0179fb6c94524589e450e5bcacc532(module, "CategoricalEvent", "");

}