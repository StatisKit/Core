#include "_core.h"



namespace autowig
{
    class Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4 : public ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
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
    template <> autowig::Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4 const volatile * get_pointer<autowig::Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4 const volatile >(autowig::Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4 const volatile *c) { return c; }
    template <> struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9961bd1cc47c50ed9fd0cd4ed55feeb4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::QuantitativeUnivariateMixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_e3a3227c8b17560ea250e74ba2447dfc)(int const &) const = &::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::cdf;
    double  (::statiskit::QuantitativeUnivariateMixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_b7de9903a18f5021ac4a5f63c60a0db4)() const = &::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_mean;
    double  (::statiskit::QuantitativeUnivariateMixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_c4dc031fcd6b5b508c63fc475642c309)() const = &::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_variance;
    boost::python::class_< autowig::Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4, autowig::Held< autowig::Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4 >::Type, boost::python::bases< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, boost::noncopyable > class_9961bd1cc47c50ed9fd0cd4ed55feeb4("_QuantitativeUnivariateMixtureDistribution_9961bd1cc47c50ed9fd0cd4ed55feeb4", "", boost::python::no_init);
    class_9961bd1cc47c50ed9fd0cd4ed55feeb4.def("cdf", method_pointer_e3a3227c8b17560ea250e74ba2447dfc, "");
    class_9961bd1cc47c50ed9fd0cd4ed55feeb4.def("get_mean", method_pointer_b7de9903a18f5021ac4a5f63c60a0db4, "");
    class_9961bd1cc47c50ed9fd0cd4ed55feeb4.def("get_variance", method_pointer_c4dc031fcd6b5b508c63fc475642c309, "");

    if(autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4 >::Type, autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}