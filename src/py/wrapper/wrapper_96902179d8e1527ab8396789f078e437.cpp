#include "_core.h"


namespace autowig {
}

void wrapper_96902179d8e1527ab8396789f078e437(pybind11::module& module)
{

    pybind11::class_<struct ::std::ctype_base, autowig::HolderType< struct ::std::ctype_base >::Type > class_96902179d8e1527ab8396789f078e437(module, "CtypeBase", "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("upper", &::std::ctype_base::upper, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("lower", &::std::ctype_base::lower, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("alpha", &::std::ctype_base::alpha, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("digit", &::std::ctype_base::digit, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("xdigit", &::std::ctype_base::xdigit, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("space", &::std::ctype_base::space, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("print", &::std::ctype_base::print, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("graph", &::std::ctype_base::graph, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("cntrl", &::std::ctype_base::cntrl, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("punct", &::std::ctype_base::punct, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("alnum", &::std::ctype_base::alnum, "");
    class_96902179d8e1527ab8396789f078e437.def_readonly_static("blank", &::std::ctype_base::blank, "");

}