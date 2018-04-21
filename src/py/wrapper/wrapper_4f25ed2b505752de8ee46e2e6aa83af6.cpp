#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile * get_pointer<class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile >(class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4f25ed2b505752de8ee46e2e6aa83af6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::RightCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_9aeec676e8e858f98c653f9ad009e3bd)() const = &::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >::get_lower_bound;
    boost::python::class_< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_4f25ed2b505752de8ee46e2e6aa83af6("_RightCensoredEvent_4f25ed2b505752de8ee46e2e6aa83af6", "", boost::python::no_init);
    class_4f25ed2b505752de8ee46e2e6aa83af6.def(boost::python::init< double const & >(""));
    class_4f25ed2b505752de8ee46e2e6aa83af6.def(boost::python::init< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_4f25ed2b505752de8ee46e2e6aa83af6.def("get_lower_bound", method_pointer_9aeec676e8e858f98c653f9ad009e3bd, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
    }

}