#include "_core.h"

::std::size_t  (::std::locale::id::*method_pointer_e68fc79fdb385b8494652d968f50fb2b)()const= &::std::locale::id::_M_id;

namespace autowig {
}

void wrapper_b2b598c024f65acba246d207ae371e07(pybind11::module& module)
{

    pybind11::class_<class ::std::locale::id, autowig::HolderType< class ::std::locale::id >::Type > class_b2b598c024f65acba246d207ae371e07(module, "Id", "");
    class_b2b598c024f65acba246d207ae371e07.def(pybind11::init<  >());
    class_b2b598c024f65acba246d207ae371e07.def("m__id", method_pointer_e68fc79fdb385b8494652d968f50fb2b, "");

}