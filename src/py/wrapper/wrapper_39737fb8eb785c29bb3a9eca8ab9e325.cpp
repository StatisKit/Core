#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateData::Generator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef double  return_type_1aba7220d8185b52a1202c2468b95edb;
            virtual return_type_1aba7220d8185b52a1202c2468b95edb weight() const override { PYBIND11_OVERLOAD_PURE(return_type_1aba7220d8185b52a1202c2468b95edb, class_type, weight, ); };
            typedef struct ::statiskit::UnivariateEvent const * return_type_06724bc676b252b98a07b30de6e65bee;
            virtual return_type_06724bc676b252b98a07b30de6e65bee event() const override { PYBIND11_OVERLOAD_PURE(return_type_06724bc676b252b98a07b30de6e65bee, class_type, event, ); };
            typedef struct ::statiskit::UnivariateData::Generator & return_type_de48c02aa8db50929f6a3f8784c2ec4d;
            virtual return_type_de48c02aa8db50929f6a3f8784c2ec4d operator++() override { PYBIND11_OVERLOAD_PURE(return_type_de48c02aa8db50929f6a3f8784c2ec4d, class_type, operator++, ); };
            typedef bool  return_type_ef9b151802e1543cb7c98d1c40761fbe;
            virtual return_type_ef9b151802e1543cb7c98d1c40761fbe is_valid() const override { PYBIND11_OVERLOAD_PURE(return_type_ef9b151802e1543cb7c98d1c40761fbe, class_type, is_valid, ); };
    };
}

bool  (::statiskit::UnivariateData::Generator::*method_pointer_ef9b151802e1543cb7c98d1c40761fbe)()const= &::statiskit::UnivariateData::Generator::is_valid;
struct ::statiskit::UnivariateData::Generator & (::statiskit::UnivariateData::Generator::*method_pointer_de48c02aa8db50929f6a3f8784c2ec4d)()= &::statiskit::UnivariateData::Generator::operator++;
struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateData::Generator::*method_pointer_06724bc676b252b98a07b30de6e65bee)()const= &::statiskit::UnivariateData::Generator::event;
double  (::statiskit::UnivariateData::Generator::*method_pointer_1aba7220d8185b52a1202c2468b95edb)()const= &::statiskit::UnivariateData::Generator::weight;

namespace autowig {
    void method_decorator_de48c02aa8db50929f6a3f8784c2ec4d(struct ::statiskit::UnivariateData::Generator & instance, const struct ::statiskit::UnivariateData::Generator & param_out) { instance.operator++() = param_out; }
}

void wrapper_39737fb8eb785c29bb3a9eca8ab9e325(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateData::Generator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateData::Generator >::Type > class_39737fb8eb785c29bb3a9eca8ab9e325(module, "Generator", "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("is_valid", method_pointer_ef9b151802e1543cb7c98d1c40761fbe, "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", method_pointer_de48c02aa8db50929f6a3f8784c2ec4d, pybind11::return_value_policy::reference_internal, "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", autowig::method_decorator_de48c02aa8db50929f6a3f8784c2ec4d);
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("event", method_pointer_06724bc676b252b98a07b30de6e65bee, pybind11::return_value_policy::reference_internal, "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("weight", method_pointer_1aba7220d8185b52a1202c2468b95edb, "");

}