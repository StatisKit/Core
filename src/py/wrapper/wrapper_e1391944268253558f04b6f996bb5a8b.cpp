#include "_core.h"

::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_811223937a145039bd3ba22522f05f34)(long int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_9623e9d08cc4596b80deed3b2ab056a9)(unsigned long int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_a9ead294136d560cb7a032dfe1b93328)(bool )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_6cf1e50b56e953a8b7b218284b1af8e9)(short int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_47c9630b79d65a088c8c4e07428cc4d2)(unsigned short int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_fd15bdaf9d8c50949e2a28a40246274f)(int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_98bdfe64296e5b3ca2c00ef4f0590911)(unsigned int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_55f880c410615b398a03d85b72e8296d)(long long int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_8418beee078d5bc882490ab7853cddd0)(unsigned long long int )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_084a0fb248525f9481ee1d4fa39e9cdf)(double )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_936409ac9b73503fbfdecacbfaae7877)(float )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_bdedcd4559d9568e9139493a9965f95d)(long double )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_bc015e92465a5f63965d220c56b8618c)(::std::basic_ostream< char, struct ::std::char_traits< char > >::__streambuf_type *)= &::std::basic_ostream< char, struct ::std::char_traits< char > >::operator<<;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_4a834bf786675346b0f64eea6c43956f)(::std::basic_ostream< char, struct ::std::char_traits< char > >::char_type )= &::std::basic_ostream< char, struct ::std::char_traits< char > >::put;
::std::basic_ostream< char, struct ::std::char_traits< char > >::__ostream_type & (::std::basic_ostream< char, ::std::char_traits< char > >::*method_pointer_0ee6e29611e15ea388b8558ecda686cf)()= &::std::basic_ostream< char, struct ::std::char_traits< char > >::flush;

namespace autowig {
}

void wrapper_e1391944268253558f04b6f996bb5a8b(pybind11::module& module)
{

    struct function_group
    {
        static class ::std::basic_ostream< char, struct ::std::char_traits< char > > & function_477c2906fbbc5a5aaa7ce5da390439c4(class ::std::basic_ostream< char, struct ::std::char_traits< char > > & parameter_0, enum ::statiskit::outcome_type const & parameter_1)
        { return operator<<(parameter_0, parameter_1); }
    };
    pybind11::class_<class ::std::basic_ostream< char, struct ::std::char_traits< char > >, autowig::HolderType< class ::std::basic_ostream< char, struct ::std::char_traits< char > > >::Type, class ::std::basic_ios< char, struct ::std::char_traits< char > > > class_e1391944268253558f04b6f996bb5a8b(module, "_BasicOstream_e1391944268253558f04b6f996bb5a8b", "");
    class_e1391944268253558f04b6f996bb5a8b.def(pybind11::init< ::std::basic_ostream< char, struct ::std::char_traits< char > >::__streambuf_type * >());
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_811223937a145039bd3ba22522f05f34, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_9623e9d08cc4596b80deed3b2ab056a9, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_a9ead294136d560cb7a032dfe1b93328, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_6cf1e50b56e953a8b7b218284b1af8e9, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_47c9630b79d65a088c8c4e07428cc4d2, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_fd15bdaf9d8c50949e2a28a40246274f, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_98bdfe64296e5b3ca2c00ef4f0590911, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_55f880c410615b398a03d85b72e8296d, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_8418beee078d5bc882490ab7853cddd0, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_084a0fb248525f9481ee1d4fa39e9cdf, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_936409ac9b73503fbfdecacbfaae7877, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_bdedcd4559d9568e9139493a9965f95d, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", method_pointer_bc015e92465a5f63965d220c56b8618c, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("put", method_pointer_4a834bf786675346b0f64eea6c43956f, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("flush", method_pointer_0ee6e29611e15ea388b8558ecda686cf, pybind11::return_value_policy::reference_internal, "");
    class_e1391944268253558f04b6f996bb5a8b.def("__lshift__", function_group::function_477c2906fbbc5a5aaa7ce5da390439c4, pybind11::return_value_policy::reference, "");

}