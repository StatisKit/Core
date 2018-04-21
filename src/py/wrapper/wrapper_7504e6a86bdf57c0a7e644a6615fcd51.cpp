#include "_core.h"



namespace autowig
{
    class Wrap_7504e6a86bdf57c0a7e644a6615fcd51 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_7504e6a86bdf57c0a7e644a6615fcd51 const volatile * get_pointer<autowig::Wrap_7504e6a86bdf57c0a7e644a6615fcd51 const volatile >(autowig::Wrap_7504e6a86bdf57c0a7e644a6615fcd51 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7504e6a86bdf57c0a7e644a6615fcd51()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_7504e6a86bdf57c0a7e644a6615fcd51, autowig::Held< autowig::Wrap_7504e6a86bdf57c0a7e644a6615fcd51 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistribution >, boost::noncopyable > class_7504e6a86bdf57c0a7e644a6615fcd51("_PolymorphicCopy_7504e6a86bdf57c0a7e644a6615fcd51", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7504e6a86bdf57c0a7e644a6615fcd51 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
    }

}