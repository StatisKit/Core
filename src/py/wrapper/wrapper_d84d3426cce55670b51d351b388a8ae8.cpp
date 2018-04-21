#include "_core.h"



namespace autowig
{
    class Wrap_d84d3426cce55670b51d351b388a8ae8 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  extract(::statiskit::Indices const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  extract(::statiskit::Index const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > (result);
            }
                        
            virtual struct ::statiskit::MultivariateSampleSpace const * get_sample_space() const
            { return this->get_override("get_sample_space")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  generator() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > > ::element_type* result = this->get_override("generator")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d84d3426cce55670b51d351b388a8ae8 const volatile * get_pointer<autowig::Wrap_d84d3426cce55670b51d351b388a8ae8 const volatile >(autowig::Wrap_d84d3426cce55670b51d351b388a8ae8 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d84d3426cce55670b51d351b388a8ae8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_d84d3426cce55670b51d351b388a8ae8, autowig::Held< autowig::Wrap_d84d3426cce55670b51d351b388a8ae8 >::Type, boost::python::bases< struct ::statiskit::MultivariateData >, boost::noncopyable > class_d84d3426cce55670b51d351b388a8ae8("_PolymorphicCopy_d84d3426cce55670b51d351b388a8ae8", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d84d3426cce55670b51d351b388a8ae8 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > >::Type, autowig::Held< struct ::statiskit::MultivariateData >::Type >();
    }

}