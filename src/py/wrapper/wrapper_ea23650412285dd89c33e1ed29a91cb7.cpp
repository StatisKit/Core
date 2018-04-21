#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ea23650412285dd89c33e1ed29a91cb7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > > class_ea23650412285dd89c33e1ed29a91cb7("_LazyEstimation_ea23650412285dd89c33e1ed29a91cb7", "", boost::python::no_init);
    class_ea23650412285dd89c33e1ed29a91cb7.def(boost::python::init<  >(""));
    class_ea23650412285dd89c33e1ed29a91cb7.def(boost::python::init< struct ::statiskit::ContinuousUnivariateConditionalDistribution const * >(""));
    class_ea23650412285dd89c33e1ed29a91cb7.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type >();
    }

}