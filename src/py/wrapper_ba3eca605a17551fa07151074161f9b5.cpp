#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::shared_ptr< struct ::statiskit::SlopeHeuristicSolver > const volatile * get_pointer<class ::std::shared_ptr< struct ::statiskit::SlopeHeuristicSolver > const volatile >(class ::std::shared_ptr< struct ::statiskit::SlopeHeuristicSolver > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_ba3eca605a17551fa07151074161f9b5()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
}