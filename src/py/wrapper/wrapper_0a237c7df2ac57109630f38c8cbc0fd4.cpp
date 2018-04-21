#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0a237c7df2ac57109630f38c8cbc0fd4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c4fa66fd13165a0abce0c43742e69748 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__shifted_distribution_estimation_c4fa66fd13165a0abce0c43742e69748");
    boost::python::object module_c4fa66fd13165a0abce0c43742e69748(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c4fa66fd13165a0abce0c43742e69748.c_str()))));
    boost::python::scope().attr("__shifted_distribution_estimation_c4fa66fd13165a0abce0c43742e69748") = module_c4fa66fd13165a0abce0c43742e69748;
    boost::python::scope scope_c4fa66fd13165a0abce0c43742e69748 = module_c4fa66fd13165a0abce0c43742e69748;
    double  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_0d19b3f1a3eb5614a55fcd98c87c6faf)() const = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_shift;
    void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_6e09cc1fd0405e7695b296daad35091d)(double const &) = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_shift;
    ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::estimator_type const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_ad1b63904c1a5888a496173925aade21)() const = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_46b7be6effd8588195dd2ed7b673dfe3)(::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::estimator_type const &) = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;
    boost::python::class_< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > > class_0a237c7df2ac57109630f38c8cbc0fd4("Estimator", "", boost::python::no_init);
    class_0a237c7df2ac57109630f38c8cbc0fd4.def(boost::python::init<  >(""));
    class_0a237c7df2ac57109630f38c8cbc0fd4.def(boost::python::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const & >(""));
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("get_shift", method_pointer_0d19b3f1a3eb5614a55fcd98c87c6faf, "");
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("set_shift", method_pointer_6e09cc1fd0405e7695b296daad35091d, "");
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("get_estimator", method_pointer_ad1b63904c1a5888a496173925aade21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("set_estimator", method_pointer_46b7be6effd8588195dd2ed7b673dfe3, "");

    if(autowig::Held< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type >();
    }

}