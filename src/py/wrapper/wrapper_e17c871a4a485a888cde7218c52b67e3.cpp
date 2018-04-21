#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator const volatile * get_pointer<struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator const volatile >(struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e17c871a4a485a888cde7218c52b67e3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d57080a5d88f5beaa3f8f3ee09b1da8c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._logarithmic_distribution_ml_estimation");
    boost::python::object module_d57080a5d88f5beaa3f8f3ee09b1da8c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d57080a5d88f5beaa3f8f3ee09b1da8c.c_str()))));
    boost::python::scope().attr("_logarithmic_distribution_ml_estimation") = module_d57080a5d88f5beaa3f8f3ee09b1da8c;
    boost::python::scope scope_d57080a5d88f5beaa3f8f3ee09b1da8c = module_d57080a5d88f5beaa3f8f3ee09b1da8c;
    boost::python::class_< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > class_e17c871a4a485a888cde7218c52b67e3("Estimator", "", boost::python::no_init);
    class_e17c871a4a485a888cde7218c52b67e3.def(boost::python::init<  >(""));
    class_e17c871a4a485a888cde7218c52b67e3.def(boost::python::init< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}