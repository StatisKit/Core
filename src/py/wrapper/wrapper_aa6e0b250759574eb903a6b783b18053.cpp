#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile * get_pointer<class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile >(class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa6e0b250759574eb903a6b783b18053()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::LeftCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_13a2fa63820b597ab14a608d2f621651)() const = &::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >::get_upper_bound;
    boost::python::class_< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_aa6e0b250759574eb903a6b783b18053("_LeftCensoredEvent_aa6e0b250759574eb903a6b783b18053", "", boost::python::no_init);
    class_aa6e0b250759574eb903a6b783b18053.def(boost::python::init< double const & >(""));
    class_aa6e0b250759574eb903a6b783b18053.def(boost::python::init< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_aa6e0b250759574eb903a6b783b18053.def("get_upper_bound", method_pointer_13a2fa63820b597ab14a608d2f621651, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
    }

}