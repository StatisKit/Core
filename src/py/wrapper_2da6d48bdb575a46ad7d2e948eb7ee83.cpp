#include "_core.h"


namespace autowig
{
}


void wrapper_2da6d48bdb575a46ad7d2e948eb7ee83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SlopeHeuristicOLSSolver::*method_pointer_1646b2acf85e5f39b0e3647efbab3662)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SlopeHeuristicOLSSolver::operator();
    boost::python::class_< struct ::statiskit::SlopeHeuristicOLSSolver, autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::Type, boost::python::bases< struct ::statiskit::SlopeHeuristicSolver > > class_2da6d48bdb575a46ad7d2e948eb7ee83("SlopeHeuristicOLSSolver", "", boost::python::no_init);
    class_2da6d48bdb575a46ad7d2e948eb7ee83.def("__call__", method_pointer_1646b2acf85e5f39b0e3647efbab3662, "");

    if(autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::Type, autowig::Held< struct ::statiskit::SlopeHeuristicSolver >::Type >();
    }

}