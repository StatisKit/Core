#include "_core.h"


namespace autowig
{
}


void wrapper_96486d682f0851438822ccbdd2c8c3eb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_0ec596bf98a6521c9bf30c96dc0ff201 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__univariate_frequency_distribution_estimation_0ec596bf98a6521c9bf30c96dc0ff201");
    boost::python::object module_0ec596bf98a6521c9bf30c96dc0ff201(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0ec596bf98a6521c9bf30c96dc0ff201.c_str()))));
    boost::python::scope().attr("__univariate_frequency_distribution_estimation_0ec596bf98a6521c9bf30c96dc0ff201") = module_0ec596bf98a6521c9bf30c96dc0ff201;
    boost::python::scope scope_0ec596bf98a6521c9bf30c96dc0ff201 = module_0ec596bf98a6521c9bf30c96dc0ff201;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistributionEstimation >  (::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_3c11345a9a2258bfb9a3ed66c09066e8)(class ::std::shared_ptr< struct ::statiskit::UnivariateData > const &, bool const &) const = &::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::operator();
    boost::python::class_< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_96486d682f0851438822ccbdd2c8c3eb("Estimator", "", boost::python::no_init);
    class_96486d682f0851438822ccbdd2c8c3eb.def("__call__", method_pointer_3c11345a9a2258bfb9a3ed66c09066e8, "");

    if(autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}