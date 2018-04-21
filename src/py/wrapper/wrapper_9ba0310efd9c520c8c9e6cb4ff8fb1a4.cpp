#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile >(class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9ba0310efd9c520c8c9e6cb4ff8fb1a4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateDistribution const * (::statiskit::SlopeHeuristicSelection< ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_8204f20a4c0f58e1adcc7dacf271e202)(::statiskit::Index const &) const = &::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_proposal;
    struct ::statiskit::UnivariateData const * (::statiskit::SlopeHeuristicSelection< ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_2ccd9b83f3265937aabf1b8641fbbba0)() const = &::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::SlopeHeuristic, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_9ba0310efd9c520c8c9e6cb4ff8fb1a4("_SlopeHeuristicSelection_9ba0310efd9c520c8c9e6cb4ff8fb1a4", "", boost::python::no_init);
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def(boost::python::init< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def("get_proposal", method_pointer_8204f20a4c0f58e1adcc7dacf271e202, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def("get_data", method_pointer_2ccd9b83f3265937aabf1b8641fbbba0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::SlopeHeuristic >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
    }

}