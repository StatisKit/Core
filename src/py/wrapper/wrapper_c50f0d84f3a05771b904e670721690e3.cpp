#include "_core.h"



namespace autowig
{
    class Wrap_c50f0d84f3a05771b904e670721690e3 : public ::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >
    {
        public:
            
            virtual class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  get_values() const
            { return this->get_override("get_values")(); }
                        
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual double  pdf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual double  ldf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("ldf")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c50f0d84f3a05771b904e670721690e3 const volatile * get_pointer<autowig::Wrap_c50f0d84f3a05771b904e670721690e3 const volatile >(autowig::Wrap_c50f0d84f3a05771b904e670721690e3 const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c50f0d84f3a05771b904e670721690e3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_c5f40a8dc3a45f7a9f2e4992d09482d2)() const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_nb_states;
    struct ::statiskit::CategoricalUnivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_e6e443b766365e1aa30ac4a64437c103)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_8ea34091aa9b5e9dba34828d5630578c)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_4f40a04cbc17565da2cfd218b85422ff)() const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_860c46e189d75b39809c65736e9ee51b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_0f257c4ead19553d80953d264b42d0a2)(struct ::statiskit::UnivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_a1548fa77f255e12a4edf7ac3a5b09e7)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_b320496fd12c5add92498a633f348d75)(struct ::statiskit::UnivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_b28920b77e07576fb2bc69eeea997f89)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_836435df113e5999ba450ce8a6457d98)(struct ::statiskit::UnivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::uncertainty;
    boost::python::class_< autowig::Wrap_c50f0d84f3a05771b904e670721690e3, autowig::Held< autowig::Wrap_c50f0d84f3a05771b904e670721690e3 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistribution >, boost::noncopyable > class_c50f0d84f3a05771b904e670721690e3("_MixtureDistribution_c50f0d84f3a05771b904e670721690e3", "", boost::python::no_init);
    class_c50f0d84f3a05771b904e670721690e3.def("get_nb_states", method_pointer_c5f40a8dc3a45f7a9f2e4992d09482d2, "");
    class_c50f0d84f3a05771b904e670721690e3.def("get_observation", method_pointer_e6e443b766365e1aa30ac4a64437c103, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c50f0d84f3a05771b904e670721690e3.def("set_observation", method_pointer_8ea34091aa9b5e9dba34828d5630578c, "");
    class_c50f0d84f3a05771b904e670721690e3.def("get_pi", method_pointer_4f40a04cbc17565da2cfd218b85422ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c50f0d84f3a05771b904e670721690e3.def("set_pi", method_pointer_860c46e189d75b39809c65736e9ee51b, "");
    class_c50f0d84f3a05771b904e670721690e3.def("posterior", method_pointer_0f257c4ead19553d80953d264b42d0a2, "");
    class_c50f0d84f3a05771b904e670721690e3.def("assignment", method_pointer_a1548fa77f255e12a4edf7ac3a5b09e7, "");
    class_c50f0d84f3a05771b904e670721690e3.def("assignment", method_pointer_b320496fd12c5add92498a633f348d75, "");
    class_c50f0d84f3a05771b904e670721690e3.def("uncertainty", method_pointer_b28920b77e07576fb2bc69eeea997f89, "");
    class_c50f0d84f3a05771b904e670721690e3.def("uncertainty", method_pointer_836435df113e5999ba450ce8a6457d98, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c50f0d84f3a05771b904e670721690e3 >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::Type >();
    }

}