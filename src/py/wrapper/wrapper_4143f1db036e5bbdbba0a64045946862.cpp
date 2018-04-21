#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator const volatile * get_pointer<struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator const volatile >(struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4143f1db036e5bbdbba0a64045946862()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d413c9194272547596f08284edb5e2e8 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_multinomial_distribution_estimation");
    boost::python::object module_d413c9194272547596f08284edb5e2e8(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d413c9194272547596f08284edb5e2e8.c_str()))));
    boost::python::scope().attr("_negative_multinomial_distribution_estimation") = module_d413c9194272547596f08284edb5e2e8;
    boost::python::scope scope_d413c9194272547596f08284edb5e2e8 = module_d413c9194272547596f08284edb5e2e8;
    boost::python::class_< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator, autowig::Held< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > > class_4143f1db036e5bbdbba0a64045946862("WZ99Estimator", "", boost::python::no_init);
    class_4143f1db036e5bbdbba0a64045946862.def(boost::python::init<  >(""));
    class_4143f1db036e5bbdbba0a64045946862.def(boost::python::init< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeMultinomialDistributionEstimation::WZ99Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
    }

}