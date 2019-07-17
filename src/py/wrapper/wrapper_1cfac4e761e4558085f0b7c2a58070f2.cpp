#include "_core.h"

void  (::std::error_code::*method_pointer_983f6b690936572f9b22589850b87def)()= &::std::error_code::clear;
int  (::std::error_code::*method_pointer_15ef1dc09b265385bc5d0bc13c03cd5f)()const= &::std::error_code::value;
struct ::std::error_condition  (::std::error_code::*method_pointer_aa96e684628c562dbdbb67930ecd700f)()const= &::std::error_code::default_error_condition;
::std::string  (::std::error_code::*method_pointer_604d388a5fc85f429bfce6b9a0669a37)()const= &::std::error_code::message;

namespace autowig {
}

void wrapper_1cfac4e761e4558085f0b7c2a58070f2(pybind11::module& module)
{

    struct function_group
    {
        static bool  function_62a2517aca055e82999b1fdab8b77aba(struct ::std::error_code const & parameter_0, struct ::std::error_code const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_02f97a7b553f5cd7b662a58496440d07(struct ::std::error_code const & parameter_0, struct ::std::error_code const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_0579cfdfcb8653b9bea15d147cd3cfe7(struct ::std::error_code const & parameter_0, struct ::std::error_condition const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_46b1beaae0cf5872b1631c85adea7e86(struct ::std::error_code const & parameter_0, struct ::std::error_code const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_50be8ab183cd5585bda2b0af6e5b783a(struct ::std::error_code const & parameter_0, struct ::std::error_condition const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    pybind11::class_<struct ::std::error_code, autowig::HolderType< struct ::std::error_code >::Type > class_1cfac4e761e4558085f0b7c2a58070f2(module, "ErrorCode", "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def(pybind11::init<  >());
    class_1cfac4e761e4558085f0b7c2a58070f2.def(pybind11::init< struct ::std::error_code const & >());
    class_1cfac4e761e4558085f0b7c2a58070f2.def("clear", method_pointer_983f6b690936572f9b22589850b87def, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("value", method_pointer_15ef1dc09b265385bc5d0bc13c03cd5f, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("default_error_condition", method_pointer_aa96e684628c562dbdbb67930ecd700f, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("message", method_pointer_604d388a5fc85f429bfce6b9a0669a37, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("__lt__", function_group::function_62a2517aca055e82999b1fdab8b77aba, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("__eq__", function_group::function_02f97a7b553f5cd7b662a58496440d07, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("__eq__", function_group::function_0579cfdfcb8653b9bea15d147cd3cfe7, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("__neq__", function_group::function_46b1beaae0cf5872b1631c85adea7e86, "");
    class_1cfac4e761e4558085f0b7c2a58070f2.def("__neq__", function_group::function_50be8ab183cd5585bda2b0af6e5b783a, "");

}