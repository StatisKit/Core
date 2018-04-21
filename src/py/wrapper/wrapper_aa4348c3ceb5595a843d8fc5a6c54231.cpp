#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BinomialDistribution const volatile * get_pointer<class ::statiskit::BinomialDistribution const volatile >(class ::statiskit::BinomialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa4348c3ceb5595a843d8fc5a6c54231()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int const & (::statiskit::BinomialDistribution::*method_pointer_d865938545d55a8f9f4ec23104741b3a)() const = &::statiskit::BinomialDistribution::get_kappa;
    void  (::statiskit::BinomialDistribution::*method_pointer_806366b1b3c55c8282b6dd9239642e87)(unsigned int const &) = &::statiskit::BinomialDistribution::set_kappa;
    double const & (::statiskit::BinomialDistribution::*method_pointer_be979b302ff45400a08043acfba35114)() const = &::statiskit::BinomialDistribution::get_pi;
    void  (::statiskit::BinomialDistribution::*method_pointer_bed41dcac25e5c188874712e790e99fe)(double const &) = &::statiskit::BinomialDistribution::set_pi;
    boost::python::class_< class ::statiskit::BinomialDistribution, autowig::Held< class ::statiskit::BinomialDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > > class_aa4348c3ceb5595a843d8fc5a6c54231("BinomialDistribution", "This class BinomialDistribution represents a `binomial\ndistribution <https://en.wikipedia.org/wiki/binomial_distribution>`__\n\nThe binomial distribution is an univariate discrete distribution of the\nnumber of successes in $\n:raw-latex:`\\kappa `:raw-latex:`\\in `:raw-latex:`\\mathbb{N}`^\\* $\nindependent `Bernouilli\ntrials <https://en.wikipedia.org/wiki/Bernoulli_trial>`__ with a\nspecified probability :math:`\\pi \\in [0,1]` of success. The support of\nthe binomial distribution is the set all intergers betwwen :math:`0` and\n$ :raw-latex:`\\kappa `$. In the particular case of $\n:raw-latex:`\\kappa `= 1$ the binomial distribution is the `Bernouilli\ndistribution <https://en.wikipedia.org/wiki/Bernoulli_distribution>`__.\n\n", boost::python::no_init);
    class_aa4348c3ceb5595a843d8fc5a6c54231.def(boost::python::init<  >(""));
    class_aa4348c3ceb5595a843d8fc5a6c54231.def(boost::python::init< unsigned int const &, double const & >(""));
    class_aa4348c3ceb5595a843d8fc5a6c54231.def(boost::python::init< class ::statiskit::BinomialDistribution const & >(""));
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("get_kappa", method_pointer_d865938545d55a8f9f4ec23104741b3a, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("set_kappa", method_pointer_806366b1b3c55c8282b6dd9239642e87, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("get_pi", method_pointer_be979b302ff45400a08043acfba35114, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of pi\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("set_pi", method_pointer_bed41dcac25e5c188874712e790e99fe, "Set the value of pi\n\n:Parameter:\n    `pi` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::BinomialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BinomialDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}