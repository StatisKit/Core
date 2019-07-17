#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateData::Generator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateData::Generator::Generator;


        public:
            typedef struct ::statiskit::MultivariateData::Generator & return_type_63b969fdfda0571a865b8fd09d42ff6f;
            virtual return_type_63b969fdfda0571a865b8fd09d42ff6f operator++() override { PYBIND11_OVERLOAD_PURE(return_type_63b969fdfda0571a865b8fd09d42ff6f, class_type, operator++, ); };

        public:
            typedef bool  return_type_d3e757b7d5b05c689e6686d4856df74c;
            virtual return_type_d3e757b7d5b05c689e6686d4856df74c is_valid() const override { PYBIND11_OVERLOAD_PURE(return_type_d3e757b7d5b05c689e6686d4856df74c, class_type, is_valid, ); };

        public:
            typedef double  return_type_27f1417576dc5f07946c8258dad0fd1e;
            virtual return_type_27f1417576dc5f07946c8258dad0fd1e get_weight() const override { PYBIND11_OVERLOAD_PURE(return_type_27f1417576dc5f07946c8258dad0fd1e, class_type, get_weight, ); };

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

double  (::statiskit::MultivariateData::Generator::*method_pointer_27f1417576dc5f07946c8258dad0fd1e)()const= &::statiskit::MultivariateData::Generator::get_weight;
bool  (::statiskit::MultivariateData::Generator::*method_pointer_d3e757b7d5b05c689e6686d4856df74c)()const= &::statiskit::MultivariateData::Generator::is_valid;
struct ::statiskit::MultivariateData::Generator & (::statiskit::MultivariateData::Generator::*method_pointer_63b969fdfda0571a865b8fd09d42ff6f)()= &::statiskit::MultivariateData::Generator::operator++;

namespace autowig {
    void method_decorator_63b969fdfda0571a865b8fd09d42ff6f(struct ::statiskit::MultivariateData::Generator & instance, const struct ::statiskit::MultivariateData::Generator & param_out) { instance.operator++() = param_out; }
}

void wrapper_98e77d2afcc252cba528077bc2cc3103(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateData::Generator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateData::Generator >::Type, struct ::statiskit::MultivariateEvent > class_98e77d2afcc252cba528077bc2cc3103(module, "Generator", "");
    class_98e77d2afcc252cba528077bc2cc3103.def(pybind11::init<  >());
    class_98e77d2afcc252cba528077bc2cc3103.def("get_weight", method_pointer_27f1417576dc5f07946c8258dad0fd1e, "");
    class_98e77d2afcc252cba528077bc2cc3103.def("is_valid", method_pointer_d3e757b7d5b05c689e6686d4856df74c, "");
    class_98e77d2afcc252cba528077bc2cc3103.def("__next__", method_pointer_63b969fdfda0571a865b8fd09d42ff6f, pybind11::return_value_policy::reference_internal, "");
    class_98e77d2afcc252cba528077bc2cc3103.def("__next__", autowig::method_decorator_63b969fdfda0571a865b8fd09d42ff6f);

}