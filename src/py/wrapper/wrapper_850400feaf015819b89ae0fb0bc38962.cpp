#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OrdinalSampleSpace const volatile * get_pointer<class ::statiskit::OrdinalSampleSpace const volatile >(class ::statiskit::OrdinalSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_850400feaf015819b89ae0fb0bc38962()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  (::statiskit::OrdinalSampleSpace::*method_pointer_521b4a3827bc56de8b09121e7ab54dde)() const = &::statiskit::OrdinalSampleSpace::get_ordered;
    void  (::statiskit::OrdinalSampleSpace::*method_pointer_1f7f4bbcf48756c8b4ab24c57b9e03b2)(class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &) = &::statiskit::OrdinalSampleSpace::set_ordered;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & (::statiskit::OrdinalSampleSpace::*method_pointer_bbbcd1f7befd501da33c8bc0a6ca7d94)() const = &::statiskit::OrdinalSampleSpace::get_rank;
    void  (::statiskit::OrdinalSampleSpace::*method_pointer_106705a757c553aa881c46d55a55ded5)(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const &) = &::statiskit::OrdinalSampleSpace::set_rank;
    void  (::statiskit::OrdinalSampleSpace::*method_pointer_343159b54c8a5f0da44d25b4d4786073)() = &::statiskit::OrdinalSampleSpace::randomize;
    class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > >  (::statiskit::OrdinalSampleSpace::*method_pointer_57b6fbac4790575084fe42696914a551)() const = &::statiskit::OrdinalSampleSpace::as_nominal;
    boost::python::class_< class ::statiskit::OrdinalSampleSpace, autowig::Held< class ::statiskit::OrdinalSampleSpace >::Type, boost::python::bases< struct ::statiskit::CategoricalSampleSpace > > class_850400feaf015819b89ae0fb0bc38962("OrdinalSampleSpace", "", boost::python::no_init);
    class_850400feaf015819b89ae0fb0bc38962.def(boost::python::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_850400feaf015819b89ae0fb0bc38962.def(boost::python::init< class ::statiskit::OrdinalSampleSpace const & >(""));
    class_850400feaf015819b89ae0fb0bc38962.def("get_ordered", method_pointer_521b4a3827bc56de8b09121e7ab54dde, "");
    class_850400feaf015819b89ae0fb0bc38962.def("set_ordered", method_pointer_1f7f4bbcf48756c8b4ab24c57b9e03b2, "");
    class_850400feaf015819b89ae0fb0bc38962.def("get_rank", method_pointer_bbbcd1f7befd501da33c8bc0a6ca7d94, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_850400feaf015819b89ae0fb0bc38962.def("set_rank", method_pointer_106705a757c553aa881c46d55a55ded5, "");
    class_850400feaf015819b89ae0fb0bc38962.def("randomize", method_pointer_343159b54c8a5f0da44d25b4d4786073, "");
    class_850400feaf015819b89ae0fb0bc38962.def("as_nominal", method_pointer_57b6fbac4790575084fe42696914a551, "");

    if(autowig::Held< class ::statiskit::OrdinalSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OrdinalSampleSpace >::Type, autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type >();
    }

}