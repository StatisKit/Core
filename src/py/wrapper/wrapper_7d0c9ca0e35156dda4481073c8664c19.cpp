#include "_core.h"



namespace autowig
{
    class Wrap_7d0c9ca0e35156dda4481073c8664c19 : public ::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
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
    template <> autowig::Wrap_7d0c9ca0e35156dda4481073c8664c19 const volatile * get_pointer<autowig::Wrap_7d0c9ca0e35156dda4481073c8664c19 const volatile >(autowig::Wrap_7d0c9ca0e35156dda4481073c8664c19 const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7d0c9ca0e35156dda4481073c8664c19()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_53a1ee3f2d3855c880f2c08bcae5c0ae)() const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_nb_states;
    struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_4a38963b449e5930b798825c4b60941a)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_246a8d3423cf5748b68f545f10de89b7)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_4a30aea4a63c5f25b68ece79845270e4)() const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_7d8c2a10d3c05b92ac6405acab6c0f44)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_2fb11bb0a2485540a23ef1fb88f9ee3a)(struct ::statiskit::UnivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_23361478d0755a63b1f88ffcadd164e4)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_53b7d3603a8754c6ad42211b2b9d9e7d)(struct ::statiskit::UnivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_a3ff30a188f45403b73a68db67aa2b5e)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_da2a6ab77d635d259b7452eed4ed7fd1)(struct ::statiskit::UnivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::uncertainty;
    boost::python::class_< autowig::Wrap_7d0c9ca0e35156dda4481073c8664c19, autowig::Held< autowig::Wrap_7d0c9ca0e35156dda4481073c8664c19 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistribution >, boost::noncopyable > class_7d0c9ca0e35156dda4481073c8664c19("_MixtureDistribution_7d0c9ca0e35156dda4481073c8664c19", "", boost::python::no_init);
    class_7d0c9ca0e35156dda4481073c8664c19.def("get_nb_states", method_pointer_53a1ee3f2d3855c880f2c08bcae5c0ae, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("get_observation", method_pointer_4a38963b449e5930b798825c4b60941a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("set_observation", method_pointer_246a8d3423cf5748b68f545f10de89b7, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("get_pi", method_pointer_4a30aea4a63c5f25b68ece79845270e4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("set_pi", method_pointer_7d8c2a10d3c05b92ac6405acab6c0f44, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("posterior", method_pointer_2fb11bb0a2485540a23ef1fb88f9ee3a, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("assignment", method_pointer_23361478d0755a63b1f88ffcadd164e4, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("assignment", method_pointer_53b7d3603a8754c6ad42211b2b9d9e7d, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("uncertainty", method_pointer_a3ff30a188f45403b73a68db67aa2b5e, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("uncertainty", method_pointer_da2a6ab77d635d259b7452eed4ed7fd1, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7d0c9ca0e35156dda4481073c8664c19 >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
    }

}