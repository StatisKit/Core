#include "_core.h"


namespace autowig
{
}


void wrapper_a744c0e699b3529e8ea41b36264771ec()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f13beb88f0a956f5bc0cd7245bbd4b1c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._continuous_univariate_distribution_estimation");
    boost::python::object module_f13beb88f0a956f5bc0cd7245bbd4b1c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f13beb88f0a956f5bc0cd7245bbd4b1c.c_str()))));
    boost::python::scope().attr("_continuous_univariate_distribution_estimation") = module_f13beb88f0a956f5bc0cd7245bbd4b1c;
    boost::python::scope scope_f13beb88f0a956f5bc0cd7245bbd4b1c = module_f13beb88f0a956f5bc0cd7245bbd4b1c;
    boost::python::class_< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_a744c0e699b3529e8ea41b36264771ec("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type >();
    }

}