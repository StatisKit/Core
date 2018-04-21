#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1f50e5c48a545cf9a618ddbf871d3a9c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_1f50e5c48a545cf9a618ddbf871d3a9c("_LazyEstimation_1f50e5c48a545cf9a618ddbf871d3a9c", "", boost::python::no_init);
    class_1f50e5c48a545cf9a618ddbf871d3a9c.def(boost::python::init<  >(""));
    class_1f50e5c48a545cf9a618ddbf871d3a9c.def(boost::python::init< struct ::statiskit::CategoricalMultivariateDistribution const * >(""));
    class_1f50e5c48a545cf9a618ddbf871d3a9c.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type >();
    }

}