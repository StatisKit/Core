#include "_core.h"



namespace autowig
{
    class Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 : public ::statiskit::DiscreteSampleSpace, public boost::python::wrapper< struct ::statiskit::DiscreteSampleSpace >
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
    template <> autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 const volatile * get_pointer<autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 const volatile >(autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteSampleSpace const volatile * get_pointer<struct ::statiskit::DiscreteSampleSpace const volatile >(struct ::statiskit::DiscreteSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6588548f29e15f0ea6e9ef29ce68dfd8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8, autowig::Held< autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 >::Type, boost::python::bases< struct ::statiskit::UnivariateSampleSpace >, boost::noncopyable > class_6588548f29e15f0ea6e9ef29ce68dfd8("DiscreteSampleSpace", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 >::Type, autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
    }

}