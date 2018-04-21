#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const volatile * get_pointer<class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const volatile >(class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4f08e906137d58128853d1fc5d729fae()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_31af2f3c7b5c54f5a56e10ac7064289b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._irregular_univariate_histogram_distribution_slope_heuristic_selection");
    boost::python::object module_31af2f3c7b5c54f5a56e10ac7064289b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_31af2f3c7b5c54f5a56e10ac7064289b.c_str()))));
    boost::python::scope().attr("_irregular_univariate_histogram_distribution_slope_heuristic_selection") = module_31af2f3c7b5c54f5a56e10ac7064289b;
    boost::python::scope scope_31af2f3c7b5c54f5a56e10ac7064289b = module_31af2f3c7b5c54f5a56e10ac7064289b;
    unsigned int const & (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_56fd39a8f6ed53729ecdf0bdc9056334)() const = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_maxbins;
    void  (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_ab8822cd4ed254e096080344d300b6f5)(unsigned int const &) = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_maxbins;
    double const & (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_800f246c8e0d5a1590849e387716468a)() const = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_constant;
    void  (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_921e32d4784b551ba85952b033e54e95)(double const &) = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_constant;
    boost::python::class_< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, autowig::Held< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_4f08e906137d58128853d1fc5d729fae("Estimator", "", boost::python::no_init);
    class_4f08e906137d58128853d1fc5d729fae.def(boost::python::init<  >(""));
    class_4f08e906137d58128853d1fc5d729fae.def(boost::python::init< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const & >(""));
    class_4f08e906137d58128853d1fc5d729fae.def("get_maxbins", method_pointer_56fd39a8f6ed53729ecdf0bdc9056334, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4f08e906137d58128853d1fc5d729fae.def("set_maxbins", method_pointer_ab8822cd4ed254e096080344d300b6f5, "");
    class_4f08e906137d58128853d1fc5d729fae.def("get_constant", method_pointer_800f246c8e0d5a1590849e387716468a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4f08e906137d58128853d1fc5d729fae.def("set_constant", method_pointer_921e32d4784b551ba85952b033e54e95, "");

    if(autowig::Held< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}