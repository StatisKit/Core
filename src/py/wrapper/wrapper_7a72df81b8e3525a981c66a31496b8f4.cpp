#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7a72df81b8e3525a981c66a31496b8f4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5e00a634363a53b79e62b0712b0cbe57 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_5e00a634363a53b79e62b0712b0cbe57");
    boost::python::object module_5e00a634363a53b79e62b0712b0cbe57(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5e00a634363a53b79e62b0712b0cbe57.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_5e00a634363a53b79e62b0712b0cbe57") = module_5e00a634363a53b79e62b0712b0cbe57;
    boost::python::scope scope_5e00a634363a53b79e62b0712b0cbe57 = module_5e00a634363a53b79e62b0712b0cbe57;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_611291dafb3051bbaa7cd984f387adf3)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_e1de62eaf40658b590608adf03557e01)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_pi;
    struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_b269070c1d205c64b5e0853cf19ec3cf)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_e7e1827c761b5570975b1b52f3bd536b)(struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_ea4d01fdeeda534db75dddaf81b17170)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_c5223b56abc6508e9fa54a64c734f1ab)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_estimator;
    struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_2c371f625fa7556c8c9f3db12ffac853)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_681e97f54b7c548b932e8bdf0d3c8cf9)(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_a60f61482e1a5f728a02d241230443be)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_604964a9c834575dabaaf7e259691fa6)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > > class_7a72df81b8e3525a981c66a31496b8f4("Estimator", "", boost::python::no_init);
    class_7a72df81b8e3525a981c66a31496b8f4.def(boost::python::init<  >(""));
    class_7a72df81b8e3525a981c66a31496b8f4.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const & >(""));
    class_7a72df81b8e3525a981c66a31496b8f4.def("get_pi", method_pointer_611291dafb3051bbaa7cd984f387adf3, "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("set_pi", method_pointer_e1de62eaf40658b590608adf03557e01, "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("get_default_estimator", method_pointer_b269070c1d205c64b5e0853cf19ec3cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("set_default_estimator", method_pointer_e7e1827c761b5570975b1b52f3bd536b, "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("get_estimator", method_pointer_ea4d01fdeeda534db75dddaf81b17170, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("set_estimator", method_pointer_c5223b56abc6508e9fa54a64c734f1ab, "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("get_initializator", method_pointer_2c371f625fa7556c8c9f3db12ffac853, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("set_initializator", method_pointer_681e97f54b7c548b932e8bdf0d3c8cf9, "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("get_limit", method_pointer_a60f61482e1a5f728a02d241230443be, "");
    class_7a72df81b8e3525a981c66a31496b8f4.def("set_limit", method_pointer_604964a9c834575dabaaf7e259691fa6, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
    }

}