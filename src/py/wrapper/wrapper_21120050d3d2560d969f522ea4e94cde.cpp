#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_21120050d3d2560d969f522ea4e94cde()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6dd78f5508545bf49150581341735774 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_6dd78f5508545bf49150581341735774");
    boost::python::object module_6dd78f5508545bf49150581341735774(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6dd78f5508545bf49150581341735774.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_6dd78f5508545bf49150581341735774") = module_6dd78f5508545bf49150581341735774;
    boost::python::scope scope_6dd78f5508545bf49150581341735774 = module_6dd78f5508545bf49150581341735774;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_c0cf114ca25f5efc848124d6d1793775)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_8daec1c691705c4a9c252193db4e9e9f)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_pi;
    struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_968ef2ed72cf5cbb80c62cca19f5e2c7)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_6f1a288d4595558ab63c08f3df92ebd9)(struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_b51675b98db55af89a062c5c23e4a5bb)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_e90f32a611d25065a3f884b6d91c9f56)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;
    struct ::statiskit::ContinuousUnivariateMixtureDistribution const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_8f38a9ab00945abaa734eafd43f00d8d)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_6d52b0cd19955b3cbd929d1a2c386dcc)(struct ::statiskit::ContinuousUnivariateMixtureDistribution const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_c82a0f33db335877a97e64b666422c47)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_c3a3081e56b2571f910b8d4a2f1884a7)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > > class_21120050d3d2560d969f522ea4e94cde("Estimator", "", boost::python::no_init);
    class_21120050d3d2560d969f522ea4e94cde.def(boost::python::init<  >(""));
    class_21120050d3d2560d969f522ea4e94cde.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const & >(""));
    class_21120050d3d2560d969f522ea4e94cde.def("get_pi", method_pointer_c0cf114ca25f5efc848124d6d1793775, "");
    class_21120050d3d2560d969f522ea4e94cde.def("set_pi", method_pointer_8daec1c691705c4a9c252193db4e9e9f, "");
    class_21120050d3d2560d969f522ea4e94cde.def("get_default_estimator", method_pointer_968ef2ed72cf5cbb80c62cca19f5e2c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_21120050d3d2560d969f522ea4e94cde.def("set_default_estimator", method_pointer_6f1a288d4595558ab63c08f3df92ebd9, "");
    class_21120050d3d2560d969f522ea4e94cde.def("get_estimator", method_pointer_b51675b98db55af89a062c5c23e4a5bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_21120050d3d2560d969f522ea4e94cde.def("set_estimator", method_pointer_e90f32a611d25065a3f884b6d91c9f56, "");
    class_21120050d3d2560d969f522ea4e94cde.def("get_initializator", method_pointer_8f38a9ab00945abaa734eafd43f00d8d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_21120050d3d2560d969f522ea4e94cde.def("set_initializator", method_pointer_6d52b0cd19955b3cbd929d1a2c386dcc, "");
    class_21120050d3d2560d969f522ea4e94cde.def("get_limit", method_pointer_c82a0f33db335877a97e64b666422c47, "");
    class_21120050d3d2560d969f522ea4e94cde.def("set_limit", method_pointer_c3a3081e56b2571f910b8d4a2f1884a7, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}