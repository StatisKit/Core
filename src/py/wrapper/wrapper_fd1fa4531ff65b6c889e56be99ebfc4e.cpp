#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile >(struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fd1fa4531ff65b6c889e56be99ebfc4e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_67548b1b39c8521c8f630ca5b4d502c4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__univariate_frequency_distribution_estimation_67548b1b39c8521c8f630ca5b4d502c4");
    boost::python::object module_67548b1b39c8521c8f630ca5b4d502c4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_67548b1b39c8521c8f630ca5b4d502c4.c_str()))));
    boost::python::scope().attr("__univariate_frequency_distribution_estimation_67548b1b39c8521c8f630ca5b4d502c4") = module_67548b1b39c8521c8f630ca5b4d502c4;
    boost::python::scope scope_67548b1b39c8521c8f630ca5b4d502c4 = module_67548b1b39c8521c8f630ca5b4d502c4;
    boost::python::class_< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_fd1fa4531ff65b6c889e56be99ebfc4e("Estimator", "", boost::python::no_init);
    class_fd1fa4531ff65b6c889e56be99ebfc4e.def(boost::python::init<  >(""));
    class_fd1fa4531ff65b6c889e56be99ebfc4e.def(boost::python::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}