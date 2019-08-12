#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateEvent class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateEvent::MultivariateEvent;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_ee0381fa29a75d5782f895a637e2a8d5;
            virtual return_type_ee0381fa29a75d5782f895a637e2a8d5 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_ee0381fa29a75d5782f895a637e2a8d5, class_type, copy, ); };

        public:
            typedef struct ::statiskit::UnivariateEvent const * return_type_09d1fd5db58a5234abee68232835e76b;
            typedef ::statiskit::Index const & param_09d1fd5db58a5234abee68232835e76b_0_type;
            virtual return_type_09d1fd5db58a5234abee68232835e76b get_event(param_09d1fd5db58a5234abee68232835e76b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_09d1fd5db58a5234abee68232835e76b, class_type, get_event, param_0); };

        public:
            typedef ::statiskit::Index  return_type_b16ba67d442357de95884c2b80cd9413;
            virtual return_type_b16ba67d442357de95884c2b80cd9413 size() const override { PYBIND11_OVERLOAD_PURE(return_type_b16ba67d442357de95884c2b80cd9413, class_type, size, ); };
    };
}

::statiskit::Index  (::statiskit::MultivariateEvent::*method_pointer_b16ba67d442357de95884c2b80cd9413)()const= &::statiskit::MultivariateEvent::size;
struct ::statiskit::UnivariateEvent const * (::statiskit::MultivariateEvent::*method_pointer_09d1fd5db58a5234abee68232835e76b)(::statiskit::Index const &)const= &::statiskit::MultivariateEvent::get_event;
class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateEvent::*method_pointer_ee0381fa29a75d5782f895a637e2a8d5)()const= &::statiskit::MultivariateEvent::copy;

namespace autowig {
}

void wrapper_a40e46e6e0ca59f7a440e68cd5fd7072(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateEvent, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateEvent >::Type > class_a40e46e6e0ca59f7a440e68cd5fd7072(module, "MultivariateEvent", "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def(pybind11::init<  >());
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("__len__", method_pointer_b16ba67d442357de95884c2b80cd9413, "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("get_event", method_pointer_09d1fd5db58a5234abee68232835e76b, pybind11::return_value_policy::reference_internal, "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("copy", method_pointer_ee0381fa29a75d5782f895a637e2a8d5, "");

}