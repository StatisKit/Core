#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > const volatile * get_pointer<class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > const volatile >(class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2f72e6e6db9a5498beee75dbafdc6393()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::ElementaryEvent< ::statiskit::CategoricalEvent >::*method_pointer_52ca03cc26f85b83a9cf872b62cc9597)() const = &::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >::get_value;
    boost::python::class_< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > >::Type, boost::python::bases< struct ::statiskit::CategoricalEvent > > class_2f72e6e6db9a5498beee75dbafdc6393("_ElementaryEvent_2f72e6e6db9a5498beee75dbafdc6393", "", boost::python::no_init);
    class_2f72e6e6db9a5498beee75dbafdc6393.def(boost::python::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >(""));
    class_2f72e6e6db9a5498beee75dbafdc6393.def(boost::python::init< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > const & >(""));
    class_2f72e6e6db9a5498beee75dbafdc6393.def("get_value", method_pointer_52ca03cc26f85b83a9cf872b62cc9597, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > >::Type, autowig::Held< struct ::statiskit::CategoricalEvent >::Type >();
    }

}