#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SlopeHeuristicHuberSolver const volatile * get_pointer<class ::statiskit::SlopeHeuristicHuberSolver const volatile >(class ::statiskit::SlopeHeuristicHuberSolver const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dace22af29e35e1e8847a21e0083dbd0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::SlopeHeuristicHuberSolver::*method_pointer_4b87ddb1d0a553e89a54cc1bba96ed07)() const = &::statiskit::SlopeHeuristicHuberSolver::get_k;
    void  (::statiskit::SlopeHeuristicHuberSolver::*method_pointer_06199c1def0458c387775cd5080ca40a)(double const &) = &::statiskit::SlopeHeuristicHuberSolver::set_k;
    boost::python::class_< class ::statiskit::SlopeHeuristicHuberSolver, autowig::Held< class ::statiskit::SlopeHeuristicHuberSolver >::Type, boost::python::bases< class ::statiskit::SlopeHeuristicIWLSSolver > > class_dace22af29e35e1e8847a21e0083dbd0("SlopeHeuristicHuberSolver", "", boost::python::no_init);
    class_dace22af29e35e1e8847a21e0083dbd0.def(boost::python::init<  >(""));
    class_dace22af29e35e1e8847a21e0083dbd0.def(boost::python::init< class ::statiskit::SlopeHeuristicHuberSolver const & >(""));
    class_dace22af29e35e1e8847a21e0083dbd0.def("get_k", method_pointer_4b87ddb1d0a553e89a54cc1bba96ed07, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dace22af29e35e1e8847a21e0083dbd0.def("set_k", method_pointer_06199c1def0458c387775cd5080ca40a, "");

    if(autowig::Held< class ::statiskit::SlopeHeuristicHuberSolver >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicHuberSolver >::Type, autowig::Held< class ::statiskit::SlopeHeuristicIWLSSolver >::Type >();
    }

}