#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_839b61ecb09d54819eb38cf69dde50bb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > > class_839b61ecb09d54819eb38cf69dde50bb("_QuantitativeUnivariateFrequencyDistribution_839b61ecb09d54819eb38cf69dde50bb", "", boost::python::no_init);
    class_839b61ecb09d54819eb38cf69dde50bb.def(boost::python::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >(""));
    class_839b61ecb09d54819eb38cf69dde50bb.def(boost::python::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_839b61ecb09d54819eb38cf69dde50bb.def(boost::python::init< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const & >(""));

    if(autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type >();
    }

}