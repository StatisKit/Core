#include "_core.h"


namespace autowig
{
}


void wrapper_dbc8a0461eeb579aa69a16cbe03a3913()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::BinomialDistributionMMEstimation, autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_dbc8a0461eeb579aa69a16cbe03a3913("BinomialDistributionMMEstimation", "", boost::python::no_init);
    class_dbc8a0461eeb579aa69a16cbe03a3913.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const &, class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & >(""));

    if(autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}