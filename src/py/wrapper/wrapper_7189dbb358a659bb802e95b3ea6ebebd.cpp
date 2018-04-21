#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7189dbb358a659bb802e95b3ea6ebebd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_7189dbb358a659bb802e95b3ea6ebebd("_LazyEstimation_7189dbb358a659bb802e95b3ea6ebebd", "", boost::python::no_init);
    class_7189dbb358a659bb802e95b3ea6ebebd.def(boost::python::init<  >(""));
    class_7189dbb358a659bb802e95b3ea6ebebd.def(boost::python::init< struct ::statiskit::DiscreteMultivariateDistribution const * >(""));
    class_7189dbb358a659bb802e95b3ea6ebebd.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type >();
    }

}