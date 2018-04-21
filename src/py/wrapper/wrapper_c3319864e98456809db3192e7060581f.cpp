#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BetaNegativeBinomialDistribution const volatile * get_pointer<class ::statiskit::BetaNegativeBinomialDistribution const volatile >(class ::statiskit::BetaNegativeBinomialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c3319864e98456809db3192e7060581f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_1d854e534d905ee1a2541a071c0631cb)() const = &::statiskit::BetaNegativeBinomialDistribution::get_kappa;
    void  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_a25d6ee690015f8e99692c3b7a5bc36a)(double const &) = &::statiskit::BetaNegativeBinomialDistribution::set_kappa;
    boost::python::class_< class ::statiskit::BetaNegativeBinomialDistribution, autowig::Held< class ::statiskit::BetaNegativeBinomialDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > > > class_c3319864e98456809db3192e7060581f("BetaNegativeBinomialDistribution", "", boost::python::no_init);
    class_c3319864e98456809db3192e7060581f.def(boost::python::init<  >(""));
    class_c3319864e98456809db3192e7060581f.def(boost::python::init< double const &, double const &, double const & >(""));
    class_c3319864e98456809db3192e7060581f.def(boost::python::init< class ::statiskit::BetaNegativeBinomialDistribution const & >(""));
    class_c3319864e98456809db3192e7060581f.def("get_kappa", method_pointer_1d854e534d905ee1a2541a071c0631cb, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_c3319864e98456809db3192e7060581f.def("set_kappa", method_pointer_a25d6ee690015f8e99692c3b7a5bc36a, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::BetaNegativeBinomialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BetaNegativeBinomialDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
    }

}