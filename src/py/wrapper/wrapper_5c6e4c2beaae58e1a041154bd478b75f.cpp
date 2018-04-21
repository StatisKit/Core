#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile * get_pointer<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile >(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5c6e4c2beaae58e1a041154bd478b75f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > > > class_5c6e4c2beaae58e1a041154bd478b75f("_MultivariateMixtureDistribution_5c6e4c2beaae58e1a041154bd478b75f", "", boost::python::no_init);
    class_5c6e4c2beaae58e1a041154bd478b75f.def(boost::python::init< class ::std::vector< struct ::statiskit::MultivariateDistribution *, class ::std::allocator< struct ::statiskit::MultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_5c6e4c2beaae58e1a041154bd478b75f.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const & >(""));

    if(autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > >::Type >();
    }

}