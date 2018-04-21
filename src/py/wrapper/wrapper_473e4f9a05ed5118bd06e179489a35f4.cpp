#include "_core.h"



namespace autowig
{
    class Wrap_473e4f9a05ed5118bd06e179489a35f4 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_473e4f9a05ed5118bd06e179489a35f4 const volatile * get_pointer<autowig::Wrap_473e4f9a05ed5118bd06e179489a35f4 const volatile >(autowig::Wrap_473e4f9a05ed5118bd06e179489a35f4 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_473e4f9a05ed5118bd06e179489a35f4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_473e4f9a05ed5118bd06e179489a35f4, autowig::Held< autowig::Wrap_473e4f9a05ed5118bd06e179489a35f4 >::Type, boost::python::bases< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >, boost::noncopyable > class_473e4f9a05ed5118bd06e179489a35f4("_PolymorphicCopy_473e4f9a05ed5118bd06e179489a35f4", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_473e4f9a05ed5118bd06e179489a35f4 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type, autowig::Held< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >::Type >();
    }

}