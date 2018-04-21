#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::ContinuousUnivariateMixtureDistribution const volatile * get_pointer<struct ::statiskit::ContinuousUnivariateMixtureDistribution const volatile >(struct ::statiskit::ContinuousUnivariateMixtureDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_939d85e97df35cb48d17558623c03cc2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::ContinuousUnivariateMixtureDistribution::*method_pointer_5a80b4f2d62d5f8eb5a5eab5c8e22df8)() const = &::statiskit::ContinuousUnivariateMixtureDistribution::get_epsilon;
    void  (::statiskit::ContinuousUnivariateMixtureDistribution::*method_pointer_7671a0e8c58458eeaf32f52d562575f5)(double const &) = &::statiskit::ContinuousUnivariateMixtureDistribution::set_epsilon;
    boost::python::class_< struct ::statiskit::ContinuousUnivariateMixtureDistribution, autowig::Held< struct ::statiskit::ContinuousUnivariateMixtureDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > > class_939d85e97df35cb48d17558623c03cc2("ContinuousUnivariateMixtureDistribution", "", boost::python::no_init);
    class_939d85e97df35cb48d17558623c03cc2.def(boost::python::init< class ::std::vector< struct ::statiskit::ContinuousUnivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousUnivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_939d85e97df35cb48d17558623c03cc2.def(boost::python::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const & >(""));
    class_939d85e97df35cb48d17558623c03cc2.def("get_epsilon", method_pointer_5a80b4f2d62d5f8eb5a5eab5c8e22df8, "");
    class_939d85e97df35cb48d17558623c03cc2.def("set_epsilon", method_pointer_7671a0e8c58458eeaf32f52d562575f5, "");

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateMixtureDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateMixtureDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::Type >();
    }

}