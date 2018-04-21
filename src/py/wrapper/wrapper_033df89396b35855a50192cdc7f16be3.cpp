#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::PoissonDistribution const volatile * get_pointer<class ::statiskit::PoissonDistribution const volatile >(class ::statiskit::PoissonDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_033df89396b35855a50192cdc7f16be3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::PoissonDistribution::*method_pointer_e1c5d61243a2516d8cca503eee6d4b6d)() const = &::statiskit::PoissonDistribution::get_theta;
    void  (::statiskit::PoissonDistribution::*method_pointer_f1f3fd67865756958164089e5a85911b)(double const &) = &::statiskit::PoissonDistribution::set_theta;
    boost::python::class_< class ::statiskit::PoissonDistribution, autowig::Held< class ::statiskit::PoissonDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > > class_033df89396b35855a50192cdc7f16be3("PoissonDistribution", "This class PoissonDistribution represents a `Poisson\ndistribution <https://en.wikipedia.org/wiki/Poisson_distribution>`__\n\nThe Poisson distribution is an univariate discrete distribution that\nexpresses the probability of a given number of events occurring in a\nfixed interval of time and/or space if these events occur with a known\naverage rate\n$:raw-latex:`\\theta  `:raw-latex:`\\in `:raw-latex:`\\mathbb{R}`\\_+^\\* $\nand independently of the time since the last event. The support of the\nPoisson distribution is the set of non-negative integer $\n:raw-latex:`\\mathbb{N}` $.\n\n", boost::python::no_init);
    class_033df89396b35855a50192cdc7f16be3.def(boost::python::init<  >(""));
    class_033df89396b35855a50192cdc7f16be3.def(boost::python::init< double const & >(""));
    class_033df89396b35855a50192cdc7f16be3.def(boost::python::init< class ::statiskit::PoissonDistribution const & >(""));
    class_033df89396b35855a50192cdc7f16be3.def("get_theta", method_pointer_e1c5d61243a2516d8cca503eee6d4b6d, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of theta.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("set_theta", method_pointer_f1f3fd67865756958164089e5a85911b, "Set the value of theta.\n\n:Parameter:\n    `theta` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::PoissonDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::PoissonDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}