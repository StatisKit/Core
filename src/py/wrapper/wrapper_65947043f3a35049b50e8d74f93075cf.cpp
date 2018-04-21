#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UnivariateVarianceEstimation::Estimator const volatile * get_pointer<class ::statiskit::UnivariateVarianceEstimation::Estimator const volatile >(class ::statiskit::UnivariateVarianceEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_65947043f3a35049b50e8d74f93075cf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a8fb4974396a5f4ca5779c02d0f58b37 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_variance_estimation");
    boost::python::object module_a8fb4974396a5f4ca5779c02d0f58b37(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a8fb4974396a5f4ca5779c02d0f58b37.c_str()))));
    boost::python::scope().attr("_univariate_variance_estimation") = module_a8fb4974396a5f4ca5779c02d0f58b37;
    boost::python::scope scope_a8fb4974396a5f4ca5779c02d0f58b37 = module_a8fb4974396a5f4ca5779c02d0f58b37;
    bool const & (::statiskit::UnivariateVarianceEstimation::Estimator::*method_pointer_715a363da3045da29bdfcd248071fee8)() const = &::statiskit::UnivariateVarianceEstimation::Estimator::get_bias;
    void  (::statiskit::UnivariateVarianceEstimation::Estimator::*method_pointer_0bed646d95065c579223336edd8e576b)(bool const &) = &::statiskit::UnivariateVarianceEstimation::Estimator::set_bias;
    boost::python::class_< class ::statiskit::UnivariateVarianceEstimation::Estimator, autowig::Held< class ::statiskit::UnivariateVarianceEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > class_65947043f3a35049b50e8d74f93075cf("Estimator", "", boost::python::no_init);
    class_65947043f3a35049b50e8d74f93075cf.def(boost::python::init<  >(""));
    class_65947043f3a35049b50e8d74f93075cf.def(boost::python::init< bool const & >(""));
    class_65947043f3a35049b50e8d74f93075cf.def(boost::python::init< class ::statiskit::UnivariateVarianceEstimation::Estimator const & >(""));
    class_65947043f3a35049b50e8d74f93075cf.def("get_bias", method_pointer_715a363da3045da29bdfcd248071fee8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_65947043f3a35049b50e8d74f93075cf.def("set_bias", method_pointer_0bed646d95065c579223336edd8e576b, "");

    if(autowig::Held< class ::statiskit::UnivariateVarianceEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateVarianceEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateDispersionEstimation::Estimator >::Type >();
    }

}