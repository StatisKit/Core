#include "_core.h"



namespace autowig
{
    class Wrap_abb8de3fed35566b9c88aebdaec5f1a0 : public ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
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
    template <> autowig::Wrap_abb8de3fed35566b9c88aebdaec5f1a0 const volatile * get_pointer<autowig::Wrap_abb8de3fed35566b9c88aebdaec5f1a0 const volatile >(autowig::Wrap_abb8de3fed35566b9c88aebdaec5f1a0 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_abb8de3fed35566b9c88aebdaec5f1a0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_abb8de3fed35566b9c88aebdaec5f1a0, autowig::Held< autowig::Wrap_abb8de3fed35566b9c88aebdaec5f1a0 >::Type, boost::python::bases< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >, boost::noncopyable > class_abb8de3fed35566b9c88aebdaec5f1a0("_PolymorphicCopy_abb8de3fed35566b9c88aebdaec5f1a0", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_abb8de3fed35566b9c88aebdaec5f1a0 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >::Type >();
    }

}