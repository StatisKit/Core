#include "_core.h"



namespace autowig
{
    class Wrap_61733bdc2db95f128686b3292ae9259a : public ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        
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
    template <> autowig::Wrap_61733bdc2db95f128686b3292ae9259a const volatile * get_pointer<autowig::Wrap_61733bdc2db95f128686b3292ae9259a const volatile >(autowig::Wrap_61733bdc2db95f128686b3292ae9259a const volatile *c) { return c; }
    template <> struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_61733bdc2db95f128686b3292ae9259a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::QuantitativeUnivariateMixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_13b291014f9656599dba7f710c381612)(double const &) const = &::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::cdf;
    double  (::statiskit::QuantitativeUnivariateMixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_fe2975161b6758f3bc67e5c9cf1c912d)() const = &::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_mean;
    double  (::statiskit::QuantitativeUnivariateMixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_f235f53d7b8f5b4fbad21d4284b2f2d8)() const = &::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_variance;
    boost::python::class_< autowig::Wrap_61733bdc2db95f128686b3292ae9259a, autowig::Held< autowig::Wrap_61733bdc2db95f128686b3292ae9259a >::Type, boost::python::bases< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >, boost::noncopyable > class_61733bdc2db95f128686b3292ae9259a("_QuantitativeUnivariateMixtureDistribution_61733bdc2db95f128686b3292ae9259a", "", boost::python::no_init);
    class_61733bdc2db95f128686b3292ae9259a.def("cdf", method_pointer_13b291014f9656599dba7f710c381612, "");
    class_61733bdc2db95f128686b3292ae9259a.def("get_mean", method_pointer_fe2975161b6758f3bc67e5c9cf1c912d, "");
    class_61733bdc2db95f128686b3292ae9259a.def("get_variance", method_pointer_f235f53d7b8f5b4fbad21d4284b2f2d8, "");

    if(autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_61733bdc2db95f128686b3292ae9259a >::Type, autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}