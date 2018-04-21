#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4b1365f753d05b8db1db0b529f5110f9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_4b1365f753d05b8db1db0b529f5110f9("_LazyEstimation_4b1365f753d05b8db1db0b529f5110f9", "", boost::python::no_init);
    class_4b1365f753d05b8db1db0b529f5110f9.def(boost::python::init<  >(""));
    class_4b1365f753d05b8db1db0b529f5110f9.def(boost::python::init< struct ::statiskit::DiscreteUnivariateConditionalDistribution const * >(""));
    class_4b1365f753d05b8db1db0b529f5110f9.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type >();
    }

}