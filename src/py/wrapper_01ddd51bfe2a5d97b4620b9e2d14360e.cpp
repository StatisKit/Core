#include "_core.h"


namespace autowig
{
}


void wrapper_01ddd51bfe2a5d97b4620b9e2d14360e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::LeftCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_04c4fd8a886e5c88af1e475580fe4020)() const = &::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >::get_event;
    int const & (::statiskit::LeftCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_7f2086559bba5548b25f5bb9bf3e9368)() const = &::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >::get_upper_bound;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::LeftCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_5478fa66e6695fd89ea81796831ca821)() const = &::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >::copy;
    boost::python::class_< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, boost::python::bases< struct ::statiskit::DiscreteEvent > > class_01ddd51bfe2a5d97b4620b9e2d14360e("_LeftCensoredEvent_01ddd51bfe2a5d97b4620b9e2d14360e", "", boost::python::no_init);
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def(boost::python::init< int const & >(""));
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def(boost::python::init< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent > const & >(""));
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def("get_event", method_pointer_04c4fd8a886e5c88af1e475580fe4020, "");
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def("get_upper_bound", method_pointer_7f2086559bba5548b25f5bb9bf3e9368, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_01ddd51bfe2a5d97b4620b9e2d14360e.def("copy", method_pointer_5478fa66e6695fd89ea81796831ca821, "");

    if(autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, autowig::Held< struct ::statiskit::DiscreteEvent >::Type >();
    }

}