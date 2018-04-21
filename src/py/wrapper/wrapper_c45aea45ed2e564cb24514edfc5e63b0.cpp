#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c45aea45ed2e564cb24514edfc5e63b0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, boost::python::bases< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > class_c45aea45ed2e564cb24514edfc5e63b0("_PolymorphicCopy_c45aea45ed2e564cb24514edfc5e63b0", "", boost::python::no_init);
    class_c45aea45ed2e564cb24514edfc5e63b0.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}