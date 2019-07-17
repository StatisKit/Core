#include "_core.h"

void  (::std::error_condition::*method_pointer_fba0ff58c5425aa799ffc6ee30f6d2c7)()= &::std::error_condition::clear;
int  (::std::error_condition::*method_pointer_46f6bb84da0e5c45aed5f8ef3e6f7728)()const= &::std::error_condition::value;
::std::string  (::std::error_condition::*method_pointer_f967d5c96c0a539dae90ec7f0f01d2be)()const= &::std::error_condition::message;

namespace autowig {
}

void wrapper_9a33479821955c81b01e8f3c319e5180(pybind11::module& module)
{

    struct function_group
    {
        static bool  function_55c61eb8a32d5c7782d92bf46d363fb2(struct ::std::error_condition const & parameter_0, struct ::std::error_condition const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_22ae3e20bfac5d8998539effe8b661a5(struct ::std::error_condition const & parameter_0, struct ::std::error_code const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_924086b8713852e693ba4c93e8327800(struct ::std::error_condition const & parameter_0, struct ::std::error_condition const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_c10cd09edca553f09b5e98b7fbd35fce(struct ::std::error_condition const & parameter_0, struct ::std::error_code const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_9f0a211a6e3f56e9baf30f3870f725b9(struct ::std::error_condition const & parameter_0, struct ::std::error_condition const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    pybind11::class_<struct ::std::error_condition, autowig::HolderType< struct ::std::error_condition >::Type > class_9a33479821955c81b01e8f3c319e5180(module, "ErrorCondition", "");
    class_9a33479821955c81b01e8f3c319e5180.def(pybind11::init<  >());
    class_9a33479821955c81b01e8f3c319e5180.def(pybind11::init< struct ::std::error_condition const & >());
    class_9a33479821955c81b01e8f3c319e5180.def("clear", method_pointer_fba0ff58c5425aa799ffc6ee30f6d2c7, "");
    class_9a33479821955c81b01e8f3c319e5180.def("value", method_pointer_46f6bb84da0e5c45aed5f8ef3e6f7728, "");
    class_9a33479821955c81b01e8f3c319e5180.def("message", method_pointer_f967d5c96c0a539dae90ec7f0f01d2be, "");
    class_9a33479821955c81b01e8f3c319e5180.def("__lt__", function_group::function_55c61eb8a32d5c7782d92bf46d363fb2, "");
    class_9a33479821955c81b01e8f3c319e5180.def("__eq__", function_group::function_22ae3e20bfac5d8998539effe8b661a5, "");
    class_9a33479821955c81b01e8f3c319e5180.def("__eq__", function_group::function_924086b8713852e693ba4c93e8327800, "");
    class_9a33479821955c81b01e8f3c319e5180.def("__neq__", function_group::function_c10cd09edca553f09b5e98b7fbd35fce, "");
    class_9a33479821955c81b01e8f3c319e5180.def("__neq__", function_group::function_9f0a211a6e3f56e9baf30f3870f725b9, "");

}