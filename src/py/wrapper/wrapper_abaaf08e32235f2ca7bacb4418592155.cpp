#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BetaBinomialDistribution const volatile * get_pointer<class ::statiskit::BetaBinomialDistribution const volatile >(class ::statiskit::BetaBinomialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_abaaf08e32235f2ca7bacb4418592155()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int const & (::statiskit::BetaBinomialDistribution::*method_pointer_2dc2d228de9d559b867572b52f81608c)() const = &::statiskit::BetaBinomialDistribution::get_kappa;
    void  (::statiskit::BetaBinomialDistribution::*method_pointer_88c6525044ad531ca99718d1f4505a17)(unsigned int const &) = &::statiskit::BetaBinomialDistribution::set_kappa;
    boost::python::class_< class ::statiskit::BetaBinomialDistribution, autowig::Held< class ::statiskit::BetaBinomialDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > > > class_abaaf08e32235f2ca7bacb4418592155("BetaBinomialDistribution", "", boost::python::no_init);
    class_abaaf08e32235f2ca7bacb4418592155.def(boost::python::init<  >(""));
    class_abaaf08e32235f2ca7bacb4418592155.def(boost::python::init< unsigned int const &, double const &, double const & >(""));
    class_abaaf08e32235f2ca7bacb4418592155.def(boost::python::init< class ::statiskit::BetaBinomialDistribution const & >(""));
    class_abaaf08e32235f2ca7bacb4418592155.def("get_kappa", method_pointer_2dc2d228de9d559b867572b52f81608c, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_abaaf08e32235f2ca7bacb4418592155.def("set_kappa", method_pointer_88c6525044ad531ca99718d1f4505a17, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::BetaBinomialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BetaBinomialDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
    }

}