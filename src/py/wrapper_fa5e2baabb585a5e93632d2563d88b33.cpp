#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > const volatile * get_pointer<class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > const volatile >(class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fa5e2baabb585a5e93632d2563d88b33()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::CensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_620687baeea353aab3f25c116323b145)() const = &::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent >::get_event;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::CensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_4c0063c1f4535d73afc077edbf304fb4)() const = &::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent >::get_values;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::CensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_519231bb8c435e458046f46015fda36f)() const = &::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent >::copy;
    boost::python::class_< class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_fa5e2baabb585a5e93632d2563d88b33("_CensoredEvent_fa5e2baabb585a5e93632d2563d88b33", "", boost::python::no_init);
    class_fa5e2baabb585a5e93632d2563d88b33.def(boost::python::init< class ::std::vector< double, class ::std::allocator< double > > const & >(""));
    class_fa5e2baabb585a5e93632d2563d88b33.def(boost::python::init< class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_fa5e2baabb585a5e93632d2563d88b33.def("get_event", method_pointer_620687baeea353aab3f25c116323b145, "");
    class_fa5e2baabb585a5e93632d2563d88b33.def("get_values", method_pointer_4c0063c1f4535d73afc077edbf304fb4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fa5e2baabb585a5e93632d2563d88b33.def("copy", method_pointer_519231bb8c435e458046f46015fda36f, "");

    if(autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
    }

}