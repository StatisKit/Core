#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator const volatile >(struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2eae4ac2dbf259029ee0e81da54c2c15()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b487f4fc27725338b969ff43c4c8f4e4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multinomial_singular_distribution_estimation");
    boost::python::object module_b487f4fc27725338b969ff43c4c8f4e4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b487f4fc27725338b969ff43c4c8f4e4.c_str()))));
    boost::python::scope().attr("_multinomial_singular_distribution_estimation") = module_b487f4fc27725338b969ff43c4c8f4e4;
    boost::python::scope scope_b487f4fc27725338b969ff43c4c8f4e4 = module_b487f4fc27725338b969ff43c4c8f4e4;
    boost::python::class_< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > > > class_2eae4ac2dbf259029ee0e81da54c2c15("Estimator", "", boost::python::no_init);
    class_2eae4ac2dbf259029ee0e81da54c2c15.def(boost::python::init<  >(""));
    class_2eae4ac2dbf259029ee0e81da54c2c15.def(boost::python::init< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type >();
    }

}