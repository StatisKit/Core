#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::GeometricDistributionMLEstimation::Estimator const volatile * get_pointer<struct ::statiskit::GeometricDistributionMLEstimation::Estimator const volatile >(struct ::statiskit::GeometricDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cb4432e6b9d05dfaa3b6285bbadb3f60()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_104495a9f44f508fb8c76ab6d2269ec3 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._geometric_distribution_ml_estimation");
    boost::python::object module_104495a9f44f508fb8c76ab6d2269ec3(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_104495a9f44f508fb8c76ab6d2269ec3.c_str()))));
    boost::python::scope().attr("_geometric_distribution_ml_estimation") = module_104495a9f44f508fb8c76ab6d2269ec3;
    boost::python::scope scope_104495a9f44f508fb8c76ab6d2269ec3 = module_104495a9f44f508fb8c76ab6d2269ec3;
    boost::python::class_< struct ::statiskit::GeometricDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::GeometricDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_cb4432e6b9d05dfaa3b6285bbadb3f60("Estimator", "", boost::python::no_init);
    class_cb4432e6b9d05dfaa3b6285bbadb3f60.def(boost::python::init<  >(""));
    class_cb4432e6b9d05dfaa3b6285bbadb3f60.def(boost::python::init< struct ::statiskit::GeometricDistributionMLEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::GeometricDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::GeometricDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}