#include "_core.h"



namespace autowig
{
    class Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f : public ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f const volatile * get_pointer<autowig::Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f const volatile >(autowig::Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_055ebc8a6eb3586cb94dfd0b3df1eb0f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f, autowig::Held< autowig::Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f >::Type, boost::python::bases< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, boost::noncopyable > class_055ebc8a6eb3586cb94dfd0b3df1eb0f("_UnivariateMixtureDistribution_055ebc8a6eb3586cb94dfd0b3df1eb0f", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f >::Type, autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}