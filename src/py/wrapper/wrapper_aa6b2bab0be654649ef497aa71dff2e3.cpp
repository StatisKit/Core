#include "_core.h"



namespace autowig
{
    class Wrap_aa6b2bab0be654649ef497aa71dff2e3 : public ::statiskit::ContinuousSampleSpace, public boost::python::wrapper< struct ::statiskit::ContinuousSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
                        
            virtual bool  is_compatible(struct ::statiskit::UnivariateEvent const * param_0) const
            { return this->get_override("is_compatible")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_aa6b2bab0be654649ef497aa71dff2e3 const volatile * get_pointer<autowig::Wrap_aa6b2bab0be654649ef497aa71dff2e3 const volatile >(autowig::Wrap_aa6b2bab0be654649ef497aa71dff2e3 const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousSampleSpace const volatile * get_pointer<struct ::statiskit::ContinuousSampleSpace const volatile >(struct ::statiskit::ContinuousSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa6b2bab0be654649ef497aa71dff2e3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_aa6b2bab0be654649ef497aa71dff2e3, autowig::Held< autowig::Wrap_aa6b2bab0be654649ef497aa71dff2e3 >::Type, boost::python::bases< struct ::statiskit::UnivariateSampleSpace >, boost::noncopyable > class_aa6b2bab0be654649ef497aa71dff2e3("ContinuousSampleSpace", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_aa6b2bab0be654649ef497aa71dff2e3 >::Type, autowig::Held< struct ::statiskit::ContinuousSampleSpace >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousSampleSpace >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousSampleSpace >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
    }

}