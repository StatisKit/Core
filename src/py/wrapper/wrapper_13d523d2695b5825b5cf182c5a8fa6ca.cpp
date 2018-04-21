#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_13d523d2695b5825b5cf182c5a8fa6ca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_637dbedd3c8a59949a0df6e3a9989f87 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_637dbedd3c8a59949a0df6e3a9989f87");
    boost::python::object module_637dbedd3c8a59949a0df6e3a9989f87(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_637dbedd3c8a59949a0df6e3a9989f87.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_637dbedd3c8a59949a0df6e3a9989f87") = module_637dbedd3c8a59949a0df6e3a9989f87;
    boost::python::scope scope_637dbedd3c8a59949a0df6e3a9989f87 = module_637dbedd3c8a59949a0df6e3a9989f87;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_b1bd298235f15f1aaebcd64671bb0d09)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_879d8f409049513ba3bc8d77280386ee)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::set_pi;
    struct ::statiskit::SingularDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_bb00a637d01a52458f09df27df6ea65f)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_7c75b8500f365659ace0796b1e4f68f2)(struct ::statiskit::SingularDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::SingularDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_928f5c482c2d5d089a00f0558f1f1201)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_1f8064733cea5b7ca1ad121a0ce24f22)(::statiskit::Index const &, struct ::statiskit::SingularDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::set_estimator;
    struct ::statiskit::MixtureSingularDistribution const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_d0d5a689c6d55af6942cadb104f81600)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_110722245cc45e79832534f3af259270)(struct ::statiskit::MixtureSingularDistribution const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_bb8afebd7f445831aeddda1913a0c43f)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_1fb2d6eeef8450deb579158d3cd7d314)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > > class_13d523d2695b5825b5cf182c5a8fa6ca("Estimator", "", boost::python::no_init);
    class_13d523d2695b5825b5cf182c5a8fa6ca.def(boost::python::init<  >(""));
    class_13d523d2695b5825b5cf182c5a8fa6ca.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const & >(""));
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("get_pi", method_pointer_b1bd298235f15f1aaebcd64671bb0d09, "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("set_pi", method_pointer_879d8f409049513ba3bc8d77280386ee, "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("get_default_estimator", method_pointer_bb00a637d01a52458f09df27df6ea65f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("set_default_estimator", method_pointer_7c75b8500f365659ace0796b1e4f68f2, "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("get_estimator", method_pointer_928f5c482c2d5d089a00f0558f1f1201, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("set_estimator", method_pointer_1f8064733cea5b7ca1ad121a0ce24f22, "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("get_initializator", method_pointer_d0d5a689c6d55af6942cadb104f81600, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("set_initializator", method_pointer_110722245cc45e79832534f3af259270, "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("get_limit", method_pointer_bb8afebd7f445831aeddda1913a0c43f, "");
    class_13d523d2695b5825b5cf182c5a8fa6ca.def("set_limit", method_pointer_1fb2d6eeef8450deb579158d3cd7d314, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
    }

}