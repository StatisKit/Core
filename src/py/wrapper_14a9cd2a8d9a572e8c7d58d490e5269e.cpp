#include "_core.h"


namespace autowig
{
}


void wrapper_14a9cd2a8d9a572e8c7d58d490e5269e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    bool  (::statiskit::CategoricalSampleSpace::*method_pointer_bc7a777830665a5e86e410c50a9fd373)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::CategoricalSampleSpace::is_compatible;
    enum ::statiskit::outcome_type  (::statiskit::CategoricalSampleSpace::*method_pointer_8d0ebb7ac2a9544280755c9cf75dbb4e)() const = &::statiskit::CategoricalSampleSpace::get_outcome;
    ::std::size_t  (::statiskit::CategoricalSampleSpace::*method_pointer_cc993d85d2cc5dba89eed6588dbf7c05)() const = &::statiskit::CategoricalSampleSpace::get_cardinality;
    class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::CategoricalSampleSpace::*method_pointer_91f4f2cfe55c5fde8710e7cc014be747)() const = &::statiskit::CategoricalSampleSpace::get_values;
    enum ::statiskit::encoding_type  (::statiskit::CategoricalSampleSpace::*method_pointer_b6e426ab99cb5b86ade311bc3aceb9d3)() const = &::statiskit::CategoricalSampleSpace::get_encoding;
    void  (::statiskit::CategoricalSampleSpace::*method_pointer_5ccffeb21f59579f833d8cfccb48fce9)(enum ::statiskit::encoding_type const &) = &::statiskit::CategoricalSampleSpace::set_encoding;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  (::statiskit::CategoricalSampleSpace::*method_pointer_8066b9427c14500d8e4b87e8f42da7e4)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::CategoricalSampleSpace::encode;
    boost::python::class_< struct ::statiskit::CategoricalSampleSpace, autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type, boost::python::bases< struct ::statiskit::UnivariateSampleSpace >, boost::noncopyable > class_14a9cd2a8d9a572e8c7d58d490e5269e("CategoricalSampleSpace", "", boost::python::no_init);
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("is_compatible", method_pointer_bc7a777830665a5e86e410c50a9fd373, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_outcome", method_pointer_8d0ebb7ac2a9544280755c9cf75dbb4e, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_cardinality", method_pointer_cc993d85d2cc5dba89eed6588dbf7c05, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_values", method_pointer_91f4f2cfe55c5fde8710e7cc014be747, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_encoding", method_pointer_b6e426ab99cb5b86ade311bc3aceb9d3, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("set_encoding", method_pointer_5ccffeb21f59579f833d8cfccb48fce9, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("encode", method_pointer_8066b9427c14500d8e4b87e8f42da7e4, "");

    if(autowig::Held< struct ::statiskit::CategoricalSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
    }

}