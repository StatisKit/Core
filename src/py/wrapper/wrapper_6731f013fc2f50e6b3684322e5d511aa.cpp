#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile >(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6731f013fc2f50e6b3684322e5d511aa()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > > > class_6731f013fc2f50e6b3684322e5d511aa("_MultivariateMixtureDistribution_6731f013fc2f50e6b3684322e5d511aa", "", boost::python::no_init);
    class_6731f013fc2f50e6b3684322e5d511aa.def(boost::python::init< class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_6731f013fc2f50e6b3684322e5d511aa.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const & >(""));

    if(autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > >::Type >();
    }

}