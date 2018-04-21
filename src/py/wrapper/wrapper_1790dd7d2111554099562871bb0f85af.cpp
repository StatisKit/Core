#include "_core.h"



namespace autowig
{
    class Wrap_1790dd7d2111554099562871bb0f85af : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > >
    {
        public:
            
            virtual struct ::statiskit::UnivariateSampleSpace const * get_sample_space() const
            { return this->get_override("get_sample_space")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  generator() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > > ::element_type* result = this->get_override("generator")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_1790dd7d2111554099562871bb0f85af const volatile * get_pointer<autowig::Wrap_1790dd7d2111554099562871bb0f85af const volatile >(autowig::Wrap_1790dd7d2111554099562871bb0f85af const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1790dd7d2111554099562871bb0f85af()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_1790dd7d2111554099562871bb0f85af, autowig::Held< autowig::Wrap_1790dd7d2111554099562871bb0f85af >::Type, boost::python::bases< struct ::statiskit::UnivariateData >, boost::noncopyable > class_1790dd7d2111554099562871bb0f85af("_PolymorphicCopy_1790dd7d2111554099562871bb0f85af", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1790dd7d2111554099562871bb0f85af >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData > >::Type, autowig::Held< struct ::statiskit::UnivariateData >::Type >();
    }

}