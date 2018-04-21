#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bb17c2bea1da5d2a86714ca422d3c393()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > > class_bb17c2bea1da5d2a86714ca422d3c393("_LazyEstimation_bb17c2bea1da5d2a86714ca422d3c393", "", boost::python::no_init);
    class_bb17c2bea1da5d2a86714ca422d3c393.def(boost::python::init<  >(""));
    class_bb17c2bea1da5d2a86714ca422d3c393.def(boost::python::init< struct ::statiskit::CategoricalMultivariateConditionalDistribution const * >(""));
    class_bb17c2bea1da5d2a86714ca422d3c393.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Type >();
    }

}