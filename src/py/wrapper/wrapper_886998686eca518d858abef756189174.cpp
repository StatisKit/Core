#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DiscreteUnivariateMixtureDistribution const volatile * get_pointer<struct ::statiskit::DiscreteUnivariateMixtureDistribution const volatile >(struct ::statiskit::DiscreteUnivariateMixtureDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_886998686eca518d858abef756189174()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::DiscreteUnivariateMixtureDistribution, autowig::Held< struct ::statiskit::DiscreteUnivariateMixtureDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > > class_886998686eca518d858abef756189174("DiscreteUnivariateMixtureDistribution", "", boost::python::no_init);
    class_886998686eca518d858abef756189174.def(boost::python::init< class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_886998686eca518d858abef756189174.def(boost::python::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const & >(""));

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateMixtureDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateMixtureDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type >();
    }

}