#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::SlopeHeuristicOLSSolver const volatile * get_pointer<struct ::statiskit::SlopeHeuristicOLSSolver const volatile >(struct ::statiskit::SlopeHeuristicOLSSolver const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2da6d48bdb575a46ad7d2e948eb7ee83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::SlopeHeuristicOLSSolver, autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::Type, boost::python::bases< class ::statiskit::SlopeHeuristicSolver > > class_2da6d48bdb575a46ad7d2e948eb7ee83("SlopeHeuristicOLSSolver", "", boost::python::no_init);
    class_2da6d48bdb575a46ad7d2e948eb7ee83.def(boost::python::init<  >(""));
    class_2da6d48bdb575a46ad7d2e948eb7ee83.def(boost::python::init< struct ::statiskit::SlopeHeuristicOLSSolver const & >(""));

    if(autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::Type, autowig::Held< class ::statiskit::SlopeHeuristicSolver >::Type >();
    }

}