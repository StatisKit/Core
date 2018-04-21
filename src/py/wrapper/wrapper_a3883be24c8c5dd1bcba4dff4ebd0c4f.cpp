#include "_core.h"



namespace autowig
{
    class Wrap_a3883be24c8c5dd1bcba4dff4ebd0c4f : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
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
    template <> autowig::Wrap_a3883be24c8c5dd1bcba4dff4ebd0c4f const volatile * get_pointer<autowig::Wrap_a3883be24c8c5dd1bcba4dff4ebd0c4f const volatile >(autowig::Wrap_a3883be24c8c5dd1bcba4dff4ebd0c4f const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a3883be24c8c5dd1bcba4dff4ebd0c4f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_a3883be24c8c5dd1bcba4dff4ebd0c4f, autowig::Held< autowig::Wrap_a3883be24c8c5dd1bcba4dff4ebd0c4f >::Type, boost::python::bases< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >, boost::noncopyable > class_a3883be24c8c5dd1bcba4dff4ebd0c4f("_PolymorphicCopy_a3883be24c8c5dd1bcba4dff4ebd0c4f", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a3883be24c8c5dd1bcba4dff4ebd0c4f >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type >();
    }

}