#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ExponentialSchedule const volatile * get_pointer<class ::statiskit::ExponentialSchedule const volatile >(class ::statiskit::ExponentialSchedule const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_41ea68bb4a9850aa9861003b9fcab334()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::ExponentialSchedule::*method_pointer_e148ea22fdff52539414c0352426c429)() const = &::statiskit::ExponentialSchedule::get_theta;
    void  (::statiskit::ExponentialSchedule::*method_pointer_1ff8bb70c7cc5ca494ebb09a8c70a691)(double const &) = &::statiskit::ExponentialSchedule::set_theta;
    boost::python::class_< class ::statiskit::ExponentialSchedule, autowig::Held< class ::statiskit::ExponentialSchedule >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > > > class_41ea68bb4a9850aa9861003b9fcab334("ExponentialSchedule", "", boost::python::no_init);
    class_41ea68bb4a9850aa9861003b9fcab334.def(boost::python::init< double const & >(""));
    class_41ea68bb4a9850aa9861003b9fcab334.def(boost::python::init< class ::statiskit::ExponentialSchedule const & >(""));
    class_41ea68bb4a9850aa9861003b9fcab334.def("get_theta", method_pointer_e148ea22fdff52539414c0352426c429, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_41ea68bb4a9850aa9861003b9fcab334.def("set_theta", method_pointer_1ff8bb70c7cc5ca494ebb09a8c70a691, "");

    if(autowig::Held< class ::statiskit::ExponentialSchedule >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ExponentialSchedule >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > >::Type >();
    }

}