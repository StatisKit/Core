#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > const volatile * get_pointer<class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > const volatile >(class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_42c73f7b760d584f96ee42693c708651()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::CensoredEvent< ::statiskit::CategoricalEvent >::*method_pointer_0960ac74ede35b06be6fad102add8cba)() const = &::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent >::get_values;
    boost::python::class_< class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent >, autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > >::Type, boost::python::bases< struct ::statiskit::CategoricalEvent > > class_42c73f7b760d584f96ee42693c708651("_CensoredEvent_42c73f7b760d584f96ee42693c708651", "", boost::python::no_init);
    class_42c73f7b760d584f96ee42693c708651.def(boost::python::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_42c73f7b760d584f96ee42693c708651.def(boost::python::init< class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > const & >(""));
    class_42c73f7b760d584f96ee42693c708651.def("get_values", method_pointer_0960ac74ede35b06be6fad102add8cba, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::CategoricalEvent > >::Type, autowig::Held< struct ::statiskit::CategoricalEvent >::Type >();
    }

}