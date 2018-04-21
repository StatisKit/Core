#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LogisticDistribution const volatile * get_pointer<class ::statiskit::LogisticDistribution const volatile >(class ::statiskit::LogisticDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0b663e6159f1527ca997ac0244c65093()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::LogisticDistribution::*method_pointer_600ee11b1af2569a88987f006d175d4b)() const = &::statiskit::LogisticDistribution::get_mu;
    void  (::statiskit::LogisticDistribution::*method_pointer_ebfff8d8aa3654a480f62ae6bf839e57)(double const &) = &::statiskit::LogisticDistribution::set_mu;
    double const & (::statiskit::LogisticDistribution::*method_pointer_cb0f730fa036596eb0e82bdce3eb429b)() const = &::statiskit::LogisticDistribution::get_sigma;
    void  (::statiskit::LogisticDistribution::*method_pointer_fa5be89660ae540fb63fde390a1aee7b)(double const &) = &::statiskit::LogisticDistribution::set_sigma;
    boost::python::class_< class ::statiskit::LogisticDistribution, autowig::Held< class ::statiskit::LogisticDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::LogisticDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_0b663e6159f1527ca997ac0244c65093("LogisticDistribution", "This class LogisticDistribution represents a `logistic\ndistribution <https://en.wikipedia.org/wiki/Logistic_distribution>`__.\n\nThe logistic distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_0b663e6159f1527ca997ac0244c65093.def(boost::python::init<  >(""));
    class_0b663e6159f1527ca997ac0244c65093.def(boost::python::init< double const &, double const & >(""));
    class_0b663e6159f1527ca997ac0244c65093.def(boost::python::init< class ::statiskit::LogisticDistribution const & >(""));
    class_0b663e6159f1527ca997ac0244c65093.def("get_mu", method_pointer_600ee11b1af2569a88987f006d175d4b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("set_mu", method_pointer_ebfff8d8aa3654a480f62ae6bf839e57, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("get_sigma", method_pointer_cb0f730fa036596eb0e82bdce3eb429b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("set_sigma", method_pointer_fa5be89660ae540fb63fde390a1aee7b, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::LogisticDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LogisticDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::LogisticDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}