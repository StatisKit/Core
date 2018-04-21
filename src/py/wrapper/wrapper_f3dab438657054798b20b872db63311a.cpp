#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f3dab438657054798b20b872db63311a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a361e68cde6a5b379c5300d00bee657c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_a361e68cde6a5b379c5300d00bee657c");
    boost::python::object module_a361e68cde6a5b379c5300d00bee657c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a361e68cde6a5b379c5300d00bee657c.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_a361e68cde6a5b379c5300d00bee657c") = module_a361e68cde6a5b379c5300d00bee657c;
    boost::python::scope scope_a361e68cde6a5b379c5300d00bee657c = module_a361e68cde6a5b379c5300d00bee657c;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_fcc221ad0b225b9ba6b5140d83d85b40)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_261e1ab6113a55c3bdf324189362713d)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_pi;
    struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_467ad7b3ba435c158c6472cc09bcc13d)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_bd4665a580ed55b5b481c5daf10a5f55)(struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_8b6f9074d908561fa6954acd7216528d)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_91fe1f5e1a415df9b04dd56d938429ea)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_estimator;
    struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_52f44246c523501590bb1099d660e731)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_7daf3e46b86a5b14a6bbc6e4b42bb979)(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_cb661dcffa6e5daf85e53f11ab9175a1)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_3f39d5da208659e49e6675a474a6437c)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > > class_f3dab438657054798b20b872db63311a("Estimator", "", boost::python::no_init);
    class_f3dab438657054798b20b872db63311a.def(boost::python::init<  >(""));
    class_f3dab438657054798b20b872db63311a.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const & >(""));
    class_f3dab438657054798b20b872db63311a.def("get_pi", method_pointer_fcc221ad0b225b9ba6b5140d83d85b40, "");
    class_f3dab438657054798b20b872db63311a.def("set_pi", method_pointer_261e1ab6113a55c3bdf324189362713d, "");
    class_f3dab438657054798b20b872db63311a.def("get_default_estimator", method_pointer_467ad7b3ba435c158c6472cc09bcc13d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f3dab438657054798b20b872db63311a.def("set_default_estimator", method_pointer_bd4665a580ed55b5b481c5daf10a5f55, "");
    class_f3dab438657054798b20b872db63311a.def("get_estimator", method_pointer_8b6f9074d908561fa6954acd7216528d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f3dab438657054798b20b872db63311a.def("set_estimator", method_pointer_91fe1f5e1a415df9b04dd56d938429ea, "");
    class_f3dab438657054798b20b872db63311a.def("get_initializator", method_pointer_52f44246c523501590bb1099d660e731, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f3dab438657054798b20b872db63311a.def("set_initializator", method_pointer_7daf3e46b86a5b14a6bbc6e4b42bb979, "");
    class_f3dab438657054798b20b872db63311a.def("get_limit", method_pointer_cb661dcffa6e5daf85e53f11ab9175a1, "");
    class_f3dab438657054798b20b872db63311a.def("set_limit", method_pointer_3f39d5da208659e49e6675a474a6437c, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
    }

}