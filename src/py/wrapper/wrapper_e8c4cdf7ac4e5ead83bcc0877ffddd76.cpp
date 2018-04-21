#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e8c4cdf7ac4e5ead83bcc0877ffddd76()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_e8c4cdf7ac4e5ead83bcc0877ffddd76("_LazyEstimation_e8c4cdf7ac4e5ead83bcc0877ffddd76", "", boost::python::no_init);
    class_e8c4cdf7ac4e5ead83bcc0877ffddd76.def(boost::python::init<  >(""));
    class_e8c4cdf7ac4e5ead83bcc0877ffddd76.def(boost::python::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const * >(""));
    class_e8c4cdf7ac4e5ead83bcc0877ffddd76.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type >();
    }

}