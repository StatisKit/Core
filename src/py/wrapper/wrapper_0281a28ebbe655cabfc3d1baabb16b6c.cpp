#include "_core.h"



namespace autowig
{
    class Wrap_0281a28ebbe655cabfc3d1baabb16b6c : public ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
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
    template <> autowig::Wrap_0281a28ebbe655cabfc3d1baabb16b6c const volatile * get_pointer<autowig::Wrap_0281a28ebbe655cabfc3d1baabb16b6c const volatile >(autowig::Wrap_0281a28ebbe655cabfc3d1baabb16b6c const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0281a28ebbe655cabfc3d1baabb16b6c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_0281a28ebbe655cabfc3d1baabb16b6c, autowig::Held< autowig::Wrap_0281a28ebbe655cabfc3d1baabb16b6c >::Type, boost::python::bases< struct ::statiskit::SingularDistribution >, boost::noncopyable > class_0281a28ebbe655cabfc3d1baabb16b6c("_PolymorphicCopy_0281a28ebbe655cabfc3d1baabb16b6c", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_0281a28ebbe655cabfc3d1baabb16b6c >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type, autowig::Held< struct ::statiskit::SingularDistribution >::Type >();
    }

}