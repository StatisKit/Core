#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SlopeHeuristicBiSquareSolver const volatile * get_pointer<class ::statiskit::SlopeHeuristicBiSquareSolver const volatile >(class ::statiskit::SlopeHeuristicBiSquareSolver const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5fefecf0971c53a682b5075141e39dc0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::SlopeHeuristicBiSquareSolver::*method_pointer_9bddc4d28425559fa247588656301e76)() const = &::statiskit::SlopeHeuristicBiSquareSolver::get_k;
    void  (::statiskit::SlopeHeuristicBiSquareSolver::*method_pointer_1de2922e7e925d388fa01a069fb88c41)(double const &) = &::statiskit::SlopeHeuristicBiSquareSolver::set_k;
    boost::python::class_< class ::statiskit::SlopeHeuristicBiSquareSolver, autowig::Held< class ::statiskit::SlopeHeuristicBiSquareSolver >::Type, boost::python::bases< class ::statiskit::SlopeHeuristicIWLSSolver > > class_5fefecf0971c53a682b5075141e39dc0("SlopeHeuristicBiSquareSolver", "", boost::python::no_init);
    class_5fefecf0971c53a682b5075141e39dc0.def(boost::python::init<  >(""));
    class_5fefecf0971c53a682b5075141e39dc0.def(boost::python::init< class ::statiskit::SlopeHeuristicBiSquareSolver const & >(""));
    class_5fefecf0971c53a682b5075141e39dc0.def("get_k", method_pointer_9bddc4d28425559fa247588656301e76, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5fefecf0971c53a682b5075141e39dc0.def("set_k", method_pointer_1de2922e7e925d388fa01a069fb88c41, "");

    if(autowig::Held< class ::statiskit::SlopeHeuristicBiSquareSolver >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicBiSquareSolver >::Type, autowig::Held< class ::statiskit::SlopeHeuristicIWLSSolver >::Type >();
    }

}