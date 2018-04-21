#include "_core.h"



namespace autowig
{
    class Wrap_61234f1033f25f108ec6c1bb0d3ddf38 : public ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
                        
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
    template <> autowig::Wrap_61234f1033f25f108ec6c1bb0d3ddf38 const volatile * get_pointer<autowig::Wrap_61234f1033f25f108ec6c1bb0d3ddf38 const volatile >(autowig::Wrap_61234f1033f25f108ec6c1bb0d3ddf38 const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_61234f1033f25f108ec6c1bb0d3ddf38()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_61234f1033f25f108ec6c1bb0d3ddf38, autowig::Held< autowig::Wrap_61234f1033f25f108ec6c1bb0d3ddf38 >::Type, boost::python::bases< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >, boost::noncopyable > class_61234f1033f25f108ec6c1bb0d3ddf38("_UnivariateMixtureDistribution_61234f1033f25f108ec6c1bb0d3ddf38", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_61234f1033f25f108ec6c1bb0d3ddf38 >::Type, autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}