#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::SlopeHeuristicMaximalSelector const volatile * get_pointer<struct ::statiskit::SlopeHeuristicMaximalSelector const volatile >(struct ::statiskit::SlopeHeuristicMaximalSelector const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d82ac4c07b685057ae35b9a0216111d2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::SlopeHeuristicMaximalSelector, autowig::Held< struct ::statiskit::SlopeHeuristicMaximalSelector >::Type, boost::python::bases< struct ::statiskit::SlopeHeuristicSelector > > class_d82ac4c07b685057ae35b9a0216111d2("SlopeHeuristicMaximalSelector", "", boost::python::no_init);
    class_d82ac4c07b685057ae35b9a0216111d2.def(boost::python::init<  >(""));
    class_d82ac4c07b685057ae35b9a0216111d2.def(boost::python::init< struct ::statiskit::SlopeHeuristicMaximalSelector const & >(""));

    if(autowig::Held< struct ::statiskit::SlopeHeuristicMaximalSelector >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::SlopeHeuristicMaximalSelector >::Type, autowig::Held< struct ::statiskit::SlopeHeuristicSelector >::Type >();
    }

}