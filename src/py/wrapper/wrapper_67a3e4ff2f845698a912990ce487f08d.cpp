#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NominalSampleSpace const volatile * get_pointer<class ::statiskit::NominalSampleSpace const volatile >(class ::statiskit::NominalSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_67a3e4ff2f845698a912990ce487f08d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::NominalSampleSpace::*method_pointer_53223f023b705139b46d39997bbeab06)() const = &::statiskit::NominalSampleSpace::get_reference;
    void  (::statiskit::NominalSampleSpace::*method_pointer_2761b455bdcf5c9c8115e95deb4e4b67)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) = &::statiskit::NominalSampleSpace::set_reference;
    void  (::statiskit::NominalSampleSpace::*method_pointer_d6f32ffc8afe5942ba9a5548e407dbed)() = &::statiskit::NominalSampleSpace::randomize;
    class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > >  (::statiskit::NominalSampleSpace::*method_pointer_8b5f2a24fde05e919454b55efe9b9da8)() const = &::statiskit::NominalSampleSpace::as_ordinal;
    boost::python::class_< class ::statiskit::NominalSampleSpace, autowig::Held< class ::statiskit::NominalSampleSpace >::Type, boost::python::bases< struct ::statiskit::CategoricalSampleSpace > > class_67a3e4ff2f845698a912990ce487f08d("NominalSampleSpace", "", boost::python::no_init);
    class_67a3e4ff2f845698a912990ce487f08d.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_67a3e4ff2f845698a912990ce487f08d.def(boost::python::init< class ::statiskit::NominalSampleSpace const & >(""));
    class_67a3e4ff2f845698a912990ce487f08d.def("get_reference", method_pointer_53223f023b705139b46d39997bbeab06, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_67a3e4ff2f845698a912990ce487f08d.def("set_reference", method_pointer_2761b455bdcf5c9c8115e95deb4e4b67, "");
    class_67a3e4ff2f845698a912990ce487f08d.def("randomize", method_pointer_d6f32ffc8afe5942ba9a5548e407dbed, "");
    class_67a3e4ff2f845698a912990ce487f08d.def("as_ordinal", method_pointer_8b5f2a24fde05e919454b55efe9b9da8, "");

    if(autowig::Held< class ::statiskit::NominalSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NominalSampleSpace >::Type, autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type >();
    }

}