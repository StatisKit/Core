#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateData::Generator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef double  return_type_97dd3ac3ad43541faf4f468d1c840930;
            virtual return_type_97dd3ac3ad43541faf4f468d1c840930 weight() const override { PYBIND11_OVERLOAD_PURE(return_type_97dd3ac3ad43541faf4f468d1c840930, class_type, weight, ); };
            typedef struct ::statiskit::MultivariateEvent const * return_type_8c2339dd565653b4a935b28162423031;
            virtual return_type_8c2339dd565653b4a935b28162423031 event() const override { PYBIND11_OVERLOAD_PURE(return_type_8c2339dd565653b4a935b28162423031, class_type, event, ); };
            typedef struct ::statiskit::MultivariateData::Generator & return_type_63b969fdfda0571a865b8fd09d42ff6f;
            virtual return_type_63b969fdfda0571a865b8fd09d42ff6f operator++() override { PYBIND11_OVERLOAD_PURE(return_type_63b969fdfda0571a865b8fd09d42ff6f, class_type, operator++, ); };
            typedef bool  return_type_d3e757b7d5b05c689e6686d4856df74c;
            virtual return_type_d3e757b7d5b05c689e6686d4856df74c is_valid() const override { PYBIND11_OVERLOAD_PURE(return_type_d3e757b7d5b05c689e6686d4856df74c, class_type, is_valid, ); };
    };
}

bool  (::statiskit::MultivariateData::Generator::*method_pointer_d3e757b7d5b05c689e6686d4856df74c)()const= &::statiskit::MultivariateData::Generator::is_valid;
struct ::statiskit::MultivariateData::Generator & (::statiskit::MultivariateData::Generator::*method_pointer_63b969fdfda0571a865b8fd09d42ff6f)()= &::statiskit::MultivariateData::Generator::operator++;
struct ::statiskit::MultivariateEvent const * (::statiskit::MultivariateData::Generator::*method_pointer_8c2339dd565653b4a935b28162423031)()const= &::statiskit::MultivariateData::Generator::event;
double  (::statiskit::MultivariateData::Generator::*method_pointer_97dd3ac3ad43541faf4f468d1c840930)()const= &::statiskit::MultivariateData::Generator::weight;

namespace autowig {
    void method_decorator_63b969fdfda0571a865b8fd09d42ff6f(struct ::statiskit::MultivariateData::Generator & instance, const struct ::statiskit::MultivariateData::Generator & param_out) { instance.operator++() = param_out; }
}

void wrapper_98e77d2afcc252cba528077bc2cc3103(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateData::Generator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateData::Generator >::Type > class_98e77d2afcc252cba528077bc2cc3103(module, "Generator", "");
    class_98e77d2afcc252cba528077bc2cc3103.def("is_valid", method_pointer_d3e757b7d5b05c689e6686d4856df74c, "");
    class_98e77d2afcc252cba528077bc2cc3103.def("__next__", method_pointer_63b969fdfda0571a865b8fd09d42ff6f, pybind11::return_value_policy::reference_internal, "");
    class_98e77d2afcc252cba528077bc2cc3103.def("__next__", autowig::method_decorator_63b969fdfda0571a865b8fd09d42ff6f);
    class_98e77d2afcc252cba528077bc2cc3103.def("event", method_pointer_8c2339dd565653b4a935b28162423031, pybind11::return_value_policy::reference_internal, "");
    class_98e77d2afcc252cba528077bc2cc3103.def("weight", method_pointer_97dd3ac3ad43541faf4f468d1c840930, "");

}