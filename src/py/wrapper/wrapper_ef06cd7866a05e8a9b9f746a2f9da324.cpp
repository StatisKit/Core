#include "_core.h"



namespace autowig
{
    class Wrap_ef06cd7866a05e8a9b9f746a2f9da324 : public ::statiskit::BetaCompoundDiscreteUnivariateDistribution, public boost::python::wrapper< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >
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
    template <> autowig::Wrap_ef06cd7866a05e8a9b9f746a2f9da324 const volatile * get_pointer<autowig::Wrap_ef06cd7866a05e8a9b9f746a2f9da324 const volatile >(autowig::Wrap_ef06cd7866a05e8a9b9f746a2f9da324 const volatile *c) { return c; }
    template <> class ::statiskit::BetaCompoundDiscreteUnivariateDistribution const volatile * get_pointer<class ::statiskit::BetaCompoundDiscreteUnivariateDistribution const volatile >(class ::statiskit::BetaCompoundDiscreteUnivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ef06cd7866a05e8a9b9f746a2f9da324()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_aa65e59810c1571d8fbed02f3b5f63e8)() const = &::statiskit::BetaCompoundDiscreteUnivariateDistribution::get_alpha;
    void  (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_6c9c4a4147e55bfbbf1c2244d715d0f0)(double const &) = &::statiskit::BetaCompoundDiscreteUnivariateDistribution::set_alpha;
    double const & (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_4d3f934733425bf2a2ad74c54ad78ca1)() const = &::statiskit::BetaCompoundDiscreteUnivariateDistribution::get_gamma;
    void  (::statiskit::BetaCompoundDiscreteUnivariateDistribution::*method_pointer_2575ec00accd5909a8e72c6c46d12645)(double const &) = &::statiskit::BetaCompoundDiscreteUnivariateDistribution::set_gamma;
    boost::python::class_< autowig::Wrap_ef06cd7866a05e8a9b9f746a2f9da324, autowig::Held< autowig::Wrap_ef06cd7866a05e8a9b9f746a2f9da324 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistribution >, boost::noncopyable > class_ef06cd7866a05e8a9b9f746a2f9da324("BetaCompoundDiscreteUnivariateDistribution", "", boost::python::no_init);
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("get_alpha", method_pointer_aa65e59810c1571d8fbed02f3b5f63e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("set_alpha", method_pointer_6c9c4a4147e55bfbbf1c2244d715d0f0, "");
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("get_gamma", method_pointer_4d3f934733425bf2a2ad74c54ad78ca1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef06cd7866a05e8a9b9f746a2f9da324.def("set_gamma", method_pointer_2575ec00accd5909a8e72c6c46d12645, "");

    if(autowig::Held< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ef06cd7866a05e8a9b9f746a2f9da324 >::Type, autowig::Held< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
    }

}