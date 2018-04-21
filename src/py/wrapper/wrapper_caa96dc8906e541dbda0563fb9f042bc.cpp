#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_caa96dc8906e541dbda0563fb9f042bc()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::SingularDistributionEstimation > > class_caa96dc8906e541dbda0563fb9f042bc("_LazyEstimation_caa96dc8906e541dbda0563fb9f042bc", "", boost::python::no_init);
    class_caa96dc8906e541dbda0563fb9f042bc.def(boost::python::init<  >(""));
    class_caa96dc8906e541dbda0563fb9f042bc.def(boost::python::init< class ::statiskit::DirichletMultinomialSingularDistribution const * >(""));
    class_caa96dc8906e541dbda0563fb9f042bc.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation >::Type >();
    }

}