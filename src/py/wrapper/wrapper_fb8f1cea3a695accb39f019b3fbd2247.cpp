#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > const volatile * get_pointer<class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > const volatile >(class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fb8f1cea3a695accb39f019b3fbd2247()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    int const & (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_8376654e7157578aa3f686833ab27fac)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_lower_bound;
    int const & (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_5801af14002b5532ba366122c0678191)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_upper_bound;
    int  (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_d7218a6b4e365c178e8a5e168c11181b)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_range;
    int  (::statiskit::IntervalCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_a384afd04e015445bf0fb505549fa4ce)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >::get_center;
    boost::python::class_< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::Held< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, boost::python::bases< struct ::statiskit::DiscreteEvent > > class_fb8f1cea3a695accb39f019b3fbd2247("_IntervalCensoredEvent_fb8f1cea3a695accb39f019b3fbd2247", "", boost::python::no_init);
    class_fb8f1cea3a695accb39f019b3fbd2247.def(boost::python::init< int const &, int const & >(""));
    class_fb8f1cea3a695accb39f019b3fbd2247.def(boost::python::init< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > const & >(""));
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_lower_bound", method_pointer_8376654e7157578aa3f686833ab27fac, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_upper_bound", method_pointer_5801af14002b5532ba366122c0678191, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_range", method_pointer_d7218a6b4e365c178e8a5e168c11181b, "");
    class_fb8f1cea3a695accb39f019b3fbd2247.def("get_center", method_pointer_a384afd04e015445bf0fb505549fa4ce, "");

    if(autowig::Held< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, autowig::Held< struct ::statiskit::DiscreteEvent >::Type >();
    }

}