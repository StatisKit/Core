#include "_core.h"

bool  (::std::ctype< char >::*method_pointer_9dd924e9316e5530bf52d195c4a12410)(::std::ctype_base::mask , char )const= &::std::ctype< char >::is;
::std::ctype< char >::char_type  (::std::ctype< char >::*method_pointer_257942a509e35d0d9ebec35f44bdc3a9)(::std::ctype< char >::char_type )const= &::std::ctype< char >::toupper;
::std::ctype< char >::char_type  (::std::ctype< char >::*method_pointer_de1db92fef075cff9ae73cb8c7cd384a)(::std::ctype< char >::char_type )const= &::std::ctype< char >::tolower;
::std::ctype< char >::char_type  (::std::ctype< char >::*method_pointer_c07755c6029c5d788287a798b839abc5)(char )const= &::std::ctype< char >::widen;
char  (::std::ctype< char >::*method_pointer_625e9e2026b75458b11f4355faaa4269)(::std::ctype< char >::char_type , char )const= &::std::ctype< char >::narrow;

namespace autowig {
}

void wrapper_488de6b23c2d582c8382ac19e518b6a8(pybind11::module& module)
{

    pybind11::class_<class ::std::ctype< char >, autowig::NoDeleteHolderType< class ::std::ctype< char > >::Type, class ::std::locale::facet, struct ::std::ctype_base > class_488de6b23c2d582c8382ac19e518b6a8(module, "_Ctype_488de6b23c2d582c8382ac19e518b6a8", "");
    class_488de6b23c2d582c8382ac19e518b6a8.def("is", method_pointer_9dd924e9316e5530bf52d195c4a12410, "");
    class_488de6b23c2d582c8382ac19e518b6a8.def("toupper", method_pointer_257942a509e35d0d9ebec35f44bdc3a9, "");
    class_488de6b23c2d582c8382ac19e518b6a8.def("tolower", method_pointer_de1db92fef075cff9ae73cb8c7cd384a, "");
    class_488de6b23c2d582c8382ac19e518b6a8.def("widen", method_pointer_c07755c6029c5d788287a798b839abc5, "");
    class_488de6b23c2d582c8382ac19e518b6a8.def("narrow", method_pointer_625e9e2026b75458b11f4355faaa4269, "");
    class_488de6b23c2d582c8382ac19e518b6a8.def_readonly_static("table_size", &::std::ctype< char >::table_size, "");

}