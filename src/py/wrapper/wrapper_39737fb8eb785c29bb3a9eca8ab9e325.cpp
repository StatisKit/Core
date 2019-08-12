#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateData::Generator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateData::Generator::Generator;


        public:
            typedef struct ::statiskit::UnivariateData::Generator & return_type_de48c02aa8db50929f6a3f8784c2ec4d;
            virtual return_type_de48c02aa8db50929f6a3f8784c2ec4d operator++() override { PYBIND11_OVERLOAD_PURE(return_type_de48c02aa8db50929f6a3f8784c2ec4d, class_type, operator++, ); };

        public:
            typedef bool  return_type_ef9b151802e1543cb7c98d1c40761fbe;
            virtual return_type_ef9b151802e1543cb7c98d1c40761fbe is_valid() const override { PYBIND11_OVERLOAD_PURE(return_type_ef9b151802e1543cb7c98d1c40761fbe, class_type, is_valid, ); };

        public:
            typedef double  return_type_3ff5d6aeae9b500daee4500fa6bcd9d2;
            virtual return_type_3ff5d6aeae9b500daee4500fa6bcd9d2 get_weight() const override { PYBIND11_OVERLOAD_PURE(return_type_3ff5d6aeae9b500daee4500fa6bcd9d2, class_type, get_weight, ); };

        public:
            typedef struct ::statiskit::UnivariateEvent const * return_type_54decb3c8cd45099a4ee49e01abbc27d;
            virtual return_type_54decb3c8cd45099a4ee49e01abbc27d get_event() const override { PYBIND11_OVERLOAD_PURE(return_type_54decb3c8cd45099a4ee49e01abbc27d, class_type, get_event, ); };
    };
}

struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateData::Generator::*method_pointer_54decb3c8cd45099a4ee49e01abbc27d)()const= &::statiskit::UnivariateData::Generator::get_event;
double  (::statiskit::UnivariateData::Generator::*method_pointer_3ff5d6aeae9b500daee4500fa6bcd9d2)()const= &::statiskit::UnivariateData::Generator::get_weight;
bool  (::statiskit::UnivariateData::Generator::*method_pointer_ef9b151802e1543cb7c98d1c40761fbe)()const= &::statiskit::UnivariateData::Generator::is_valid;
struct ::statiskit::UnivariateData::Generator & (::statiskit::UnivariateData::Generator::*method_pointer_de48c02aa8db50929f6a3f8784c2ec4d)()= &::statiskit::UnivariateData::Generator::operator++;

namespace autowig {
    void method_decorator_de48c02aa8db50929f6a3f8784c2ec4d(struct ::statiskit::UnivariateData::Generator & instance, const struct ::statiskit::UnivariateData::Generator & param_out) { instance.operator++() = param_out; }
}

void wrapper_39737fb8eb785c29bb3a9eca8ab9e325(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateData::Generator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateData::Generator >::Type > class_39737fb8eb785c29bb3a9eca8ab9e325(module, "Generator", "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def(pybind11::init<  >());
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("get_event", method_pointer_54decb3c8cd45099a4ee49e01abbc27d, pybind11::return_value_policy::reference_internal, "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("get_weight", method_pointer_3ff5d6aeae9b500daee4500fa6bcd9d2, "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("is_valid", method_pointer_ef9b151802e1543cb7c98d1c40761fbe, "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", method_pointer_de48c02aa8db50929f6a3f8784c2ec4d, pybind11::return_value_policy::reference_internal, "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", autowig::method_decorator_de48c02aa8db50929f6a3f8784c2ec4d);

}