#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7d52b247865d503986da71f28e0da3e9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_7d52b247865d503986da71f28e0da3e9("_LazyEstimation_7d52b247865d503986da71f28e0da3e9", "", boost::python::no_init);
    class_7d52b247865d503986da71f28e0da3e9.def(boost::python::init<  >(""));
    class_7d52b247865d503986da71f28e0da3e9.def(boost::python::init< class ::statiskit::SplittingDistribution const * >(""));
    class_7d52b247865d503986da71f28e0da3e9.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type >();
    }

}