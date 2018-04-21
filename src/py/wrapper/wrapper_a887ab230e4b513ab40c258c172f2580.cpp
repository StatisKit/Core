#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile >(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a887ab230e4b513ab40c258c172f2580()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > > class_a887ab230e4b513ab40c258c172f2580("_MultivariateMixtureDistribution_a887ab230e4b513ab40c258c172f2580", "", boost::python::no_init);
    class_a887ab230e4b513ab40c258c172f2580.def(boost::python::init< class ::std::vector< struct ::statiskit::CategoricalMultivariateDistribution *, class ::std::allocator< struct ::statiskit::CategoricalMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_a887ab230e4b513ab40c258c172f2580.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const & >(""));

    if(autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >::Type >();
    }

}