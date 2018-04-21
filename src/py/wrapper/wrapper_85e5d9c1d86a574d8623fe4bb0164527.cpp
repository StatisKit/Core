#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > const volatile * get_pointer<class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > const volatile >(class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_85e5d9c1d86a574d8623fe4bb0164527()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    int const & (::statiskit::ElementaryEvent< ::statiskit::DiscreteEvent >::*method_pointer_2a3a0db3adea56158741771284715f12)() const = &::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent >::get_value;
    boost::python::class_< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent >, autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > >::Type, boost::python::bases< struct ::statiskit::DiscreteEvent > > class_85e5d9c1d86a574d8623fe4bb0164527("_ElementaryEvent_85e5d9c1d86a574d8623fe4bb0164527", "", boost::python::no_init);
    class_85e5d9c1d86a574d8623fe4bb0164527.def(boost::python::init< int const & >(""));
    class_85e5d9c1d86a574d8623fe4bb0164527.def(boost::python::init< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > const & >(""));
    class_85e5d9c1d86a574d8623fe4bb0164527.def("get_value", method_pointer_2a3a0db3adea56158741771284715f12, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::DiscreteEvent > >::Type, autowig::Held< struct ::statiskit::DiscreteEvent >::Type >();
    }

}