#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BetaDistribution const volatile * get_pointer<class ::statiskit::BetaDistribution const volatile >(class ::statiskit::BetaDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_985dfffef8265a319e222a08d8f11f05()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::BetaDistribution::*method_pointer_d15e5113eb035524bf47b41f300122d2)() const = &::statiskit::BetaDistribution::get_alpha;
    void  (::statiskit::BetaDistribution::*method_pointer_923a19134c1c530f983a57aaddbd5ab8)(double const &) = &::statiskit::BetaDistribution::set_alpha;
    double const & (::statiskit::BetaDistribution::*method_pointer_e361b886a6565e31a7aadc0c2332a33b)() const = &::statiskit::BetaDistribution::get_beta;
    void  (::statiskit::BetaDistribution::*method_pointer_abc93b3b043d5a289e364503f102eaa4)(double const &) = &::statiskit::BetaDistribution::set_beta;
    boost::python::class_< class ::statiskit::BetaDistribution, autowig::Held< class ::statiskit::BetaDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_985dfffef8265a319e222a08d8f11f05("BetaDistribution", "This class represents a Gamma distribution.\n\nThe Gamma distribution is an univariate continuous distribution. The\nsupport is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n", boost::python::no_init);
    class_985dfffef8265a319e222a08d8f11f05.def(boost::python::init<  >(""));
    class_985dfffef8265a319e222a08d8f11f05.def(boost::python::init< double const &, double const & >(""));
    class_985dfffef8265a319e222a08d8f11f05.def(boost::python::init< class ::statiskit::BetaDistribution const & >(""));
    class_985dfffef8265a319e222a08d8f11f05.def("get_alpha", method_pointer_d15e5113eb035524bf47b41f300122d2, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the shape parameter :math:`\\alpha`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("set_alpha", method_pointer_923a19134c1c530f983a57aaddbd5ab8, "Set the value of the shape parameter :math:`\\alpha`.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("get_beta", method_pointer_e361b886a6565e31a7aadc0c2332a33b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the rate parameter :math:`\\beta`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("set_beta", method_pointer_abc93b3b043d5a289e364503f102eaa4, "Set the value of the rate parameter :math:`\\beta`.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::BetaDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BetaDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}