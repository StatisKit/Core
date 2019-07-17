#include "_core.h"

::std::string  (::std::locale::*method_pointer_c2c506ce991b5daca5247601529992fc)()const= &::std::locale::name;
bool  (::std::locale::*method_pointer_d6f72d3b43955c1bbf1e4531b69d14a9)(class ::std::locale const &)const= &::std::locale::operator==;
bool  (::std::locale::*method_pointer_4bb8912bb35551caaf4fba37f7b53426)(class ::std::locale const &)const= &::std::locale::operator!=;
class ::std::locale  (*method_pointer_5bf034e284795fd18ef049d2d37994ea)(class ::std::locale const &)= ::std::locale::global;
class ::std::locale const & (*method_pointer_37beb60d04255aa09f819d3e2545c8ef)()= ::std::locale::classic;

namespace autowig {
}

void wrapper_2f3439617e035c41b1282a03e900ef19(pybind11::module& module)
{

    pybind11::class_<class ::std::locale, autowig::HolderType< class ::std::locale >::Type > class_2f3439617e035c41b1282a03e900ef19(module, "Locale", "");
    class_2f3439617e035c41b1282a03e900ef19.def(pybind11::init<  >());
    class_2f3439617e035c41b1282a03e900ef19.def(pybind11::init< class ::std::locale const & >());
    class_2f3439617e035c41b1282a03e900ef19.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >());
    class_2f3439617e035c41b1282a03e900ef19.def(pybind11::init< class ::std::locale const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, ::std::locale::category  >());
    class_2f3439617e035c41b1282a03e900ef19.def(pybind11::init< class ::std::locale const &, class ::std::locale const &, ::std::locale::category  >());
    class_2f3439617e035c41b1282a03e900ef19.def("name", method_pointer_c2c506ce991b5daca5247601529992fc, "");
    class_2f3439617e035c41b1282a03e900ef19.def("__eq__", method_pointer_d6f72d3b43955c1bbf1e4531b69d14a9, "");
    class_2f3439617e035c41b1282a03e900ef19.def("__neq__", method_pointer_4bb8912bb35551caaf4fba37f7b53426, "");
    class_2f3439617e035c41b1282a03e900ef19.def_static("global", method_pointer_5bf034e284795fd18ef049d2d37994ea, "");
    class_2f3439617e035c41b1282a03e900ef19.def_static("classic", method_pointer_37beb60d04255aa09f819d3e2545c8ef, pybind11::return_value_policy::copy, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("none", &::std::locale::none, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("ctype", &::std::locale::ctype, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("numeric", &::std::locale::numeric, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("collate", &::std::locale::collate, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("time", &::std::locale::time, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("monetary", &::std::locale::monetary, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("messages", &::std::locale::messages, "");
    class_2f3439617e035c41b1282a03e900ef19.def_readonly_static("all", &::std::locale::all, "");

}