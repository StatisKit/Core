#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > const volatile * get_pointer<class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > const volatile >(class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9981958281625422b3b46cea8ec85a6d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::ElementaryEvent< ::statiskit::ContinuousEvent >::*method_pointer_cf3d3c8e459955608a6e0dbb6112752a)() const = &::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >::get_value;
    boost::python::class_< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_9981958281625422b3b46cea8ec85a6d("_ElementaryEvent_9981958281625422b3b46cea8ec85a6d", "", boost::python::no_init);
    class_9981958281625422b3b46cea8ec85a6d.def(boost::python::init< double const & >(""));
    class_9981958281625422b3b46cea8ec85a6d.def(boost::python::init< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_9981958281625422b3b46cea8ec85a6d.def("get_value", method_pointer_cf3d3c8e459955608a6e0dbb6112752a, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
    }

}