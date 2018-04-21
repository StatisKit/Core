#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile >(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5750371755a95c10b9259748c7b5e21b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > > > > class_5750371755a95c10b9259748c7b5e21b("_MultivariateMixtureDistribution_5750371755a95c10b9259748c7b5e21b", "", boost::python::no_init);
    class_5750371755a95c10b9259748c7b5e21b.def(boost::python::init< class ::std::vector< struct ::statiskit::DiscreteMultivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_5750371755a95c10b9259748c7b5e21b.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const & >(""));

    if(autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > > >::Type >();
    }

}