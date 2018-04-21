#include "_core.h"



namespace autowig
{
    class Wrap_6d1d52249a4c562691e57f68df4bcc06 : public ::statiskit::MultivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::MultivariateConditionalDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
                        
            virtual struct ::statiskit::MultivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_6d1d52249a4c562691e57f68df4bcc06 const volatile * get_pointer<autowig::Wrap_6d1d52249a4c562691e57f68df4bcc06 const volatile >(autowig::Wrap_6d1d52249a4c562691e57f68df4bcc06 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateConditionalDistribution const volatile * get_pointer<struct ::statiskit::MultivariateConditionalDistribution const volatile >(struct ::statiskit::MultivariateConditionalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6d1d52249a4c562691e57f68df4bcc06()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MultivariateConditionalDistribution::*method_pointer_5c154b63f1c35786827ec4701044e25a)() const = &::statiskit::MultivariateConditionalDistribution::get_nb_components;
    struct ::statiskit::MultivariateDistribution const * (::statiskit::MultivariateConditionalDistribution::*method_pointer_3285f0544f0e5aada41213932efa56a7)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::MultivariateConditionalDistribution::operator();
    double  (::statiskit::MultivariateConditionalDistribution::*method_pointer_7e3a06a6af745947b31f4facd34b7010)(class ::statiskit::MultivariateConditionalData const &) const = &::statiskit::MultivariateConditionalDistribution::loglikelihood;
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::MultivariateConditionalDistribution::*method_pointer_7efcb466ce8a5d1094143e91829eeb72)() const = &::statiskit::MultivariateConditionalDistribution::get_explanatory_space;
    unsigned int  (::statiskit::MultivariateConditionalDistribution::*method_pointer_645f02f88f8b570697bc8d8b93b48d3b)() const = &::statiskit::MultivariateConditionalDistribution::get_nb_parameters;
    class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  (::statiskit::MultivariateConditionalDistribution::*method_pointer_5602cdbf2c275bce8b45653e1d25ff61)() const = &::statiskit::MultivariateConditionalDistribution::copy;
    boost::python::class_< autowig::Wrap_6d1d52249a4c562691e57f68df4bcc06, autowig::Held< autowig::Wrap_6d1d52249a4c562691e57f68df4bcc06 >::Type, boost::noncopyable > class_6d1d52249a4c562691e57f68df4bcc06("MultivariateConditionalDistribution", "", boost::python::no_init);
    class_6d1d52249a4c562691e57f68df4bcc06.def("get_nb_components", boost::python::pure_virtual(method_pointer_5c154b63f1c35786827ec4701044e25a), "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("__call__", boost::python::pure_virtual(method_pointer_3285f0544f0e5aada41213932efa56a7), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("loglikelihood", method_pointer_7e3a06a6af745947b31f4facd34b7010, "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("get_explanatory_space", boost::python::pure_virtual(method_pointer_7efcb466ce8a5d1094143e91829eeb72), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("get_nb_parameters", boost::python::pure_virtual(method_pointer_645f02f88f8b570697bc8d8b93b48d3b), "");
    class_6d1d52249a4c562691e57f68df4bcc06.def("copy", boost::python::pure_virtual(method_pointer_5602cdbf2c275bce8b45653e1d25ff61), "");
    if(autowig::Held< struct ::statiskit::MultivariateConditionalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6d1d52249a4c562691e57f68df4bcc06 >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateConditionalDistribution >::Type >();
    }    

}