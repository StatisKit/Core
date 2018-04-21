#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_90894824332153a7a0c5c3bd4ff0eab8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > > class_90894824332153a7a0c5c3bd4ff0eab8("_LazyEstimation_90894824332153a7a0c5c3bd4ff0eab8", "", boost::python::no_init);
    class_90894824332153a7a0c5c3bd4ff0eab8.def(boost::python::init<  >(""));
    class_90894824332153a7a0c5c3bd4ff0eab8.def(boost::python::init< struct ::statiskit::ContinuousMultivariateConditionalDistribution const * >(""));
    class_90894824332153a7a0c5c3bd4ff0eab8.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Type >();
    }

}