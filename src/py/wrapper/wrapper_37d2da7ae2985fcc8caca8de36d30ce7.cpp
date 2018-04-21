#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CauchyDistribution const volatile * get_pointer<class ::statiskit::CauchyDistribution const volatile >(class ::statiskit::CauchyDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_37d2da7ae2985fcc8caca8de36d30ce7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::CauchyDistribution::*method_pointer_2c5a042cd22d5c6aa327cda326887f5d)() const = &::statiskit::CauchyDistribution::get_mu;
    void  (::statiskit::CauchyDistribution::*method_pointer_0b8482697b5d50769ad737ee5e62922f)(double const &) = &::statiskit::CauchyDistribution::set_mu;
    double const & (::statiskit::CauchyDistribution::*method_pointer_47c9040450155a07b6d26a0e64dbd084)() const = &::statiskit::CauchyDistribution::get_sigma;
    void  (::statiskit::CauchyDistribution::*method_pointer_cf1c7eea5f465f529121b6ee03e7d6d3)(double const &) = &::statiskit::CauchyDistribution::set_sigma;
    boost::python::class_< class ::statiskit::CauchyDistribution, autowig::Held< class ::statiskit::CauchyDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::CauchyDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_37d2da7ae2985fcc8caca8de36d30ce7("CauchyDistribution", "This class CauchyDistribution represents a `Cauchy\ndistribution <https://en.wikipedia.org/wiki/Cauchy_distribution>`__.\n\nThe Cauchy distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(boost::python::init<  >(""));
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(boost::python::init< double const &, double const & >(""));
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(boost::python::init< class ::statiskit::CauchyDistribution const & >(""));
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_mu", method_pointer_2c5a042cd22d5c6aa327cda326887f5d, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("set_mu", method_pointer_0b8482697b5d50769ad737ee5e62922f, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_sigma", method_pointer_47c9040450155a07b6d26a0e64dbd084, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("set_sigma", method_pointer_cf1c7eea5f465f529121b6ee03e7d6d3, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::CauchyDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CauchyDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::CauchyDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}