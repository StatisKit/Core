#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5d11528f24755a879438133d5708e545()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c3981878d7ab5e6f87183b575418286b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_c3981878d7ab5e6f87183b575418286b");
    boost::python::object module_c3981878d7ab5e6f87183b575418286b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c3981878d7ab5e6f87183b575418286b.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_c3981878d7ab5e6f87183b575418286b") = module_c3981878d7ab5e6f87183b575418286b;
    boost::python::scope scope_c3981878d7ab5e6f87183b575418286b = module_c3981878d7ab5e6f87183b575418286b;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_7c695267884e5ac5b3fd0b5f3a3003d9)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_7d64041b9f77529080eb343676d726ae)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_pi;
    struct ::statiskit::MultivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_1dd26c7ab62e5134949241d9d57a5399)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_d64bb47602a350f4abb5d24b7fc66771)(struct ::statiskit::MultivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::MultivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_fd041d6ff7b050cbae13f50a5def440e)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_fcd8b6ff608656f58112043d99228386)(::statiskit::Index const &, struct ::statiskit::MultivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_estimator;
    struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_af89fce79dcd59c3a537cf3d1be956a1)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_c5c8e0ca20e4521a972b3da4e150813e)(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_84d6003896d157788b4e7c311dabc47e)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_43b4be65cfdc5c82a1a507a7d20827bc)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > > class_5d11528f24755a879438133d5708e545("Estimator", "", boost::python::no_init);
    class_5d11528f24755a879438133d5708e545.def(boost::python::init<  >(""));
    class_5d11528f24755a879438133d5708e545.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const & >(""));
    class_5d11528f24755a879438133d5708e545.def("get_pi", method_pointer_7c695267884e5ac5b3fd0b5f3a3003d9, "");
    class_5d11528f24755a879438133d5708e545.def("set_pi", method_pointer_7d64041b9f77529080eb343676d726ae, "");
    class_5d11528f24755a879438133d5708e545.def("get_default_estimator", method_pointer_1dd26c7ab62e5134949241d9d57a5399, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5d11528f24755a879438133d5708e545.def("set_default_estimator", method_pointer_d64bb47602a350f4abb5d24b7fc66771, "");
    class_5d11528f24755a879438133d5708e545.def("get_estimator", method_pointer_fd041d6ff7b050cbae13f50a5def440e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5d11528f24755a879438133d5708e545.def("set_estimator", method_pointer_fcd8b6ff608656f58112043d99228386, "");
    class_5d11528f24755a879438133d5708e545.def("get_initializator", method_pointer_af89fce79dcd59c3a537cf3d1be956a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5d11528f24755a879438133d5708e545.def("set_initializator", method_pointer_c5c8e0ca20e4521a972b3da4e150813e, "");
    class_5d11528f24755a879438133d5708e545.def("get_limit", method_pointer_84d6003896d157788b4e7c311dabc47e, "");
    class_5d11528f24755a879438133d5708e545.def("set_limit", method_pointer_43b4be65cfdc5c82a1a507a7d20827bc, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type >();
    }

}