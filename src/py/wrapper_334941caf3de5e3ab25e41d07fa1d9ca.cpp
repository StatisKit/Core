#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::VectorEvent const volatile * get_pointer<class ::statiskit::VectorEvent const volatile >(class ::statiskit::VectorEvent const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_334941caf3de5e3ab25e41d07fa1d9ca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::VectorEvent::*method_pointer_1c8c650caa5d5e0897419c4a4e31b006)() const = &::statiskit::VectorEvent::size;
    struct ::statiskit::UnivariateEvent const * (::statiskit::VectorEvent::*method_pointer_14e64e202f745427bbfdd5c4b7a65c87)(::statiskit::Index const &) const = &::statiskit::VectorEvent::get;
    void  (::statiskit::VectorEvent::*method_pointer_546c2692954654889471d670fa584d26)(::statiskit::Index const &, struct ::statiskit::UnivariateEvent const &) = &::statiskit::VectorEvent::set;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::VectorEvent::*method_pointer_a8d90b802969519b9eec86cd980d086f)() const = &::statiskit::VectorEvent::copy;
    boost::python::class_< class ::statiskit::VectorEvent, autowig::Held< class ::statiskit::VectorEvent >::Type, boost::python::bases< struct ::statiskit::MultivariateEvent > > class_334941caf3de5e3ab25e41d07fa1d9ca("VectorEvent", "", boost::python::no_init);
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(boost::python::init< ::statiskit::Index const & >(""));
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(boost::python::init< class ::statiskit::VectorEvent const & >(""));
    class_334941caf3de5e3ab25e41d07fa1d9ca.def("__len__", method_pointer_1c8c650caa5d5e0897419c4a4e31b006, "");
    class_334941caf3de5e3ab25e41d07fa1d9ca.def("get", method_pointer_14e64e202f745427bbfdd5c4b7a65c87, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_334941caf3de5e3ab25e41d07fa1d9ca.def("set", method_pointer_546c2692954654889471d670fa584d26, "");
    class_334941caf3de5e3ab25e41d07fa1d9ca.def("copy", method_pointer_a8d90b802969519b9eec86cd980d086f, "");

    if(autowig::Held< class ::statiskit::VectorEvent >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::VectorEvent >::Type, autowig::Held< struct ::statiskit::MultivariateEvent >::Type >();
    }

}