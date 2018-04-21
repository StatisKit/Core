#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_423ed9cbac44541cb53a4cf80e6e15d5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::SingularDistributionEstimation > > class_423ed9cbac44541cb53a4cf80e6e15d5("_LazyEstimation_423ed9cbac44541cb53a4cf80e6e15d5", "", boost::python::no_init);
    class_423ed9cbac44541cb53a4cf80e6e15d5.def(boost::python::init<  >(""));
    class_423ed9cbac44541cb53a4cf80e6e15d5.def(boost::python::init< class ::statiskit::MultinomialSingularDistribution const * >(""));
    class_423ed9cbac44541cb53a4cf80e6e15d5.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation >::Type >();
    }

}