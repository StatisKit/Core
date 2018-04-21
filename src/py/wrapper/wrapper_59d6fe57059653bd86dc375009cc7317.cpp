#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IntegerSampleSpace const volatile * get_pointer<class ::statiskit::IntegerSampleSpace const volatile >(class ::statiskit::IntegerSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_59d6fe57059653bd86dc375009cc7317()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    int const & (::statiskit::IntegerSampleSpace::*method_pointer_1b29bc091ed15718a0e14eb444619634)() const = &::statiskit::IntegerSampleSpace::get_lower_bound;
    int const & (::statiskit::IntegerSampleSpace::*method_pointer_be2e248f8fea5c788ef6147a2ab2f528)() const = &::statiskit::IntegerSampleSpace::get_upper_bound;
    boost::python::class_< class ::statiskit::IntegerSampleSpace, autowig::Held< class ::statiskit::IntegerSampleSpace >::Type, boost::python::bases< struct ::statiskit::DiscreteSampleSpace > > class_59d6fe57059653bd86dc375009cc7317("IntegerSampleSpace", "", boost::python::no_init);
    class_59d6fe57059653bd86dc375009cc7317.def(boost::python::init< int const &, int const & >(""));
    class_59d6fe57059653bd86dc375009cc7317.def("get_lower_bound", method_pointer_1b29bc091ed15718a0e14eb444619634, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_59d6fe57059653bd86dc375009cc7317.def("get_upper_bound", method_pointer_be2e248f8fea5c788ef6147a2ab2f528, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::IntegerSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IntegerSampleSpace >::Type, autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type >();
    }

}