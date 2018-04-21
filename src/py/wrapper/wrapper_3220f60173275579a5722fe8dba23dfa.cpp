#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SlopeHeuristicSuperiorSelector const volatile * get_pointer<class ::statiskit::SlopeHeuristicSuperiorSelector const volatile >(class ::statiskit::SlopeHeuristicSuperiorSelector const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3220f60173275579a5722fe8dba23dfa()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::SlopeHeuristicSuperiorSelector::*method_pointer_e4d1e5ff572a52868a58cd42498837f8)() const = &::statiskit::SlopeHeuristicSuperiorSelector::get_threshold;
    void  (::statiskit::SlopeHeuristicSuperiorSelector::*method_pointer_5fb00356a0aa5e3db19c85359e6b403d)(double const &) = &::statiskit::SlopeHeuristicSuperiorSelector::set_threshold;
    boost::python::class_< class ::statiskit::SlopeHeuristicSuperiorSelector, autowig::Held< class ::statiskit::SlopeHeuristicSuperiorSelector >::Type, boost::python::bases< struct ::statiskit::SlopeHeuristicSelector > > class_3220f60173275579a5722fe8dba23dfa("SlopeHeuristicSuperiorSelector", "", boost::python::no_init);
    class_3220f60173275579a5722fe8dba23dfa.def(boost::python::init<  >(""));
    class_3220f60173275579a5722fe8dba23dfa.def(boost::python::init< class ::statiskit::SlopeHeuristicSuperiorSelector const & >(""));
    class_3220f60173275579a5722fe8dba23dfa.def("get_threshold", method_pointer_e4d1e5ff572a52868a58cd42498837f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3220f60173275579a5722fe8dba23dfa.def("set_threshold", method_pointer_5fb00356a0aa5e3db19c85359e6b403d, "");

    if(autowig::Held< class ::statiskit::SlopeHeuristicSuperiorSelector >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicSuperiorSelector >::Type, autowig::Held< struct ::statiskit::SlopeHeuristicSelector >::Type >();
    }

}