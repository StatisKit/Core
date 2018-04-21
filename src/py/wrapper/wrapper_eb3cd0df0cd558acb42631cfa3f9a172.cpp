#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eb3cd0df0cd558acb42631cfa3f9a172()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f6675a262e6b55f6819ef4c5599c308b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_f6675a262e6b55f6819ef4c5599c308b");
    boost::python::object module_f6675a262e6b55f6819ef4c5599c308b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f6675a262e6b55f6819ef4c5599c308b.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_f6675a262e6b55f6819ef4c5599c308b") = module_f6675a262e6b55f6819ef4c5599c308b;
    boost::python::scope scope_f6675a262e6b55f6819ef4c5599c308b = module_f6675a262e6b55f6819ef4c5599c308b;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_8e90587550ba59fd9b55fac637085ce9)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_9b672d4df6905210a93e76476da93061)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_pi;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_588eec9bbde25b03a86b36bce9f06aec)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_8b481e7fd71351a7a17a03d2bfbf53dc)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_ce92b40f53c151df85206128e4ccf99b)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_08205fa989e857638a6088d3c7c36f3f)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;
    struct ::statiskit::DiscreteUnivariateMixtureDistribution const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_1ada7f6a10495cd48cdf989b099c7ba1)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_9da82349b5da573fb99ab92feaa1c4eb)(struct ::statiskit::DiscreteUnivariateMixtureDistribution const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_d762829d60c15b8a8ad32fe454342c4e)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_5f023c643a4557f9949f3684dcb40d72)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > class_eb3cd0df0cd558acb42631cfa3f9a172("Estimator", "", boost::python::no_init);
    class_eb3cd0df0cd558acb42631cfa3f9a172.def(boost::python::init<  >(""));
    class_eb3cd0df0cd558acb42631cfa3f9a172.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const & >(""));
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("get_pi", method_pointer_8e90587550ba59fd9b55fac637085ce9, "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("set_pi", method_pointer_9b672d4df6905210a93e76476da93061, "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("get_default_estimator", method_pointer_588eec9bbde25b03a86b36bce9f06aec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("set_default_estimator", method_pointer_8b481e7fd71351a7a17a03d2bfbf53dc, "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("get_estimator", method_pointer_ce92b40f53c151df85206128e4ccf99b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("set_estimator", method_pointer_08205fa989e857638a6088d3c7c36f3f, "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("get_initializator", method_pointer_1ada7f6a10495cd48cdf989b099c7ba1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("set_initializator", method_pointer_9da82349b5da573fb99ab92feaa1c4eb, "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("get_limit", method_pointer_d762829d60c15b8a8ad32fe454342c4e, "");
    class_eb3cd0df0cd558acb42631cfa3f9a172.def("set_limit", method_pointer_5f023c643a4557f9949f3684dcb40d72, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}