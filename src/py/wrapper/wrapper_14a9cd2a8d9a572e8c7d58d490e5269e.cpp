#include "_core.h"



namespace autowig
{
    class Wrap_14a9cd2a8d9a572e8c7d58d490e5269e : public ::statiskit::CategoricalSampleSpace, public boost::python::wrapper< struct ::statiskit::CategoricalSampleSpace >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  encode(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("encode")(param_0); }
                        
            virtual void  set_encoding(enum ::statiskit::encoding_type const & param_0) 
            { this->get_override("set_encoding")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
                        
            virtual enum ::statiskit::ordering_type  get_ordering() const
            { return this->get_override("get_ordering")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_14a9cd2a8d9a572e8c7d58d490e5269e const volatile * get_pointer<autowig::Wrap_14a9cd2a8d9a572e8c7d58d490e5269e const volatile >(autowig::Wrap_14a9cd2a8d9a572e8c7d58d490e5269e const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalSampleSpace const volatile * get_pointer<struct ::statiskit::CategoricalSampleSpace const volatile >(struct ::statiskit::CategoricalSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_14a9cd2a8d9a572e8c7d58d490e5269e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::CategoricalSampleSpace::*method_pointer_cc993d85d2cc5dba89eed6588dbf7c05)() const = &::statiskit::CategoricalSampleSpace::get_cardinality;
    class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::CategoricalSampleSpace::*method_pointer_6463c3786a065cb28a0a0109dca4a6ca)() const = &::statiskit::CategoricalSampleSpace::get_values;
    enum ::statiskit::encoding_type  (::statiskit::CategoricalSampleSpace::*method_pointer_b6e426ab99cb5b86ade311bc3aceb9d3)() const = &::statiskit::CategoricalSampleSpace::get_encoding;
    void  (::statiskit::CategoricalSampleSpace::*method_pointer_5ccffeb21f59579f833d8cfccb48fce9)(enum ::statiskit::encoding_type const &) = &::statiskit::CategoricalSampleSpace::set_encoding;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  (::statiskit::CategoricalSampleSpace::*method_pointer_8066b9427c14500d8e4b87e8f42da7e4)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::CategoricalSampleSpace::encode;
    boost::python::class_< autowig::Wrap_14a9cd2a8d9a572e8c7d58d490e5269e, autowig::Held< autowig::Wrap_14a9cd2a8d9a572e8c7d58d490e5269e >::Type, boost::python::bases< struct ::statiskit::UnivariateSampleSpace >, boost::noncopyable > class_14a9cd2a8d9a572e8c7d58d490e5269e("CategoricalSampleSpace", "", boost::python::no_init);
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_cardinality", method_pointer_cc993d85d2cc5dba89eed6588dbf7c05, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_values", method_pointer_6463c3786a065cb28a0a0109dca4a6ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_encoding", method_pointer_b6e426ab99cb5b86ade311bc3aceb9d3, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("set_encoding", boost::python::pure_virtual(method_pointer_5ccffeb21f59579f833d8cfccb48fce9), "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("encode", boost::python::pure_virtual(method_pointer_8066b9427c14500d8e4b87e8f42da7e4), "");

    if(autowig::Held< struct ::statiskit::CategoricalSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_14a9cd2a8d9a572e8c7d58d490e5269e >::Type, autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
    }

}