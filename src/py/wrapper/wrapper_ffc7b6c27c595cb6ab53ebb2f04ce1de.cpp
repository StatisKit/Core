#include "_core.h"



namespace autowig
{
    class Wrap_ffc7b6c27c595cb6ab53ebb2f04ce1de : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >
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
    template <> autowig::Wrap_ffc7b6c27c595cb6ab53ebb2f04ce1de const volatile * get_pointer<autowig::Wrap_ffc7b6c27c595cb6ab53ebb2f04ce1de const volatile >(autowig::Wrap_ffc7b6c27c595cb6ab53ebb2f04ce1de const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ffc7b6c27c595cb6ab53ebb2f04ce1de()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_ffc7b6c27c595cb6ab53ebb2f04ce1de, autowig::Held< autowig::Wrap_ffc7b6c27c595cb6ab53ebb2f04ce1de >::Type, boost::python::bases< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >, boost::noncopyable > class_ffc7b6c27c595cb6ab53ebb2f04ce1de("_PolymorphicCopy_ffc7b6c27c595cb6ab53ebb2f04ce1de", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ffc7b6c27c595cb6ab53ebb2f04ce1de >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type, autowig::Held< class ::statiskit::BetaCompoundDiscreteUnivariateDistribution >::Type >();
    }

}