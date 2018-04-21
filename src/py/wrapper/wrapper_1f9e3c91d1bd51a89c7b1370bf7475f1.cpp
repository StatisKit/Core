#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator const volatile >(struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1f9e3c91d1bd51a89c7b1370bf7475f1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5562b8b01aa050b886b919c9b81686f5 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._dirichlet_multinomial_singular_distribution_estimation");
    boost::python::object module_5562b8b01aa050b886b919c9b81686f5(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5562b8b01aa050b886b919c9b81686f5.c_str()))));
    boost::python::scope().attr("_dirichlet_multinomial_singular_distribution_estimation") = module_5562b8b01aa050b886b919c9b81686f5;
    boost::python::scope scope_5562b8b01aa050b886b919c9b81686f5 = module_5562b8b01aa050b886b919c9b81686f5;
    boost::python::class_< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > > > class_1f9e3c91d1bd51a89c7b1370bf7475f1("Estimator", "", boost::python::no_init);
    class_1f9e3c91d1bd51a89c7b1370bf7475f1.def(boost::python::init<  >(""));
    class_1f9e3c91d1bd51a89c7b1370bf7475f1.def(boost::python::init< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type >();
    }

}