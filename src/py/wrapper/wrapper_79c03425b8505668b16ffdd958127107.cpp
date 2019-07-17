#include "_core.h"


namespace autowig {
}

void wrapper_79c03425b8505668b16ffdd958127107(pybind11::module& module)
{

    pybind11::class_<class ::std::basic_ostream< char, struct ::std::char_traits< char > >::sentry, autowig::HolderType< class ::std::basic_ostream< char, struct ::std::char_traits< char > >::sentry >::Type > class_79c03425b8505668b16ffdd958127107(module, "Sentry", "");
    class_79c03425b8505668b16ffdd958127107.def(pybind11::init< class ::std::basic_ostream< char, struct ::std::char_traits< char > > & >());

}