#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_040909a1c2b158b198be21fa1ab2b474()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::SingularDistributionEstimation > > class_040909a1c2b158b198be21fa1ab2b474("_LazyEstimation_040909a1c2b158b198be21fa1ab2b474", "", boost::python::no_init);
    class_040909a1c2b158b198be21fa1ab2b474.def(boost::python::init<  >(""));
    class_040909a1c2b158b198be21fa1ab2b474.def(boost::python::init< struct ::statiskit::MixtureSingularDistribution const * >(""));
    class_040909a1c2b158b198be21fa1ab2b474.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation >::Type >();
    }

}