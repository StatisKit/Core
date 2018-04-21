#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile * get_pointer<class ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile >(class ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1581bb259a1355888c0e234a7f9960d9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dbc8a0461eeb579aa69a16cbe03a3913 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_distribution_mm_estimation");
    boost::python::object module_dbc8a0461eeb579aa69a16cbe03a3913(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dbc8a0461eeb579aa69a16cbe03a3913.c_str()))));
    boost::python::scope().attr("_binomial_distribution_mm_estimation") = module_dbc8a0461eeb579aa69a16cbe03a3913;
    boost::python::scope scope_dbc8a0461eeb579aa69a16cbe03a3913 = module_dbc8a0461eeb579aa69a16cbe03a3913;
    struct ::statiskit::UnivariateLocationEstimation::Estimator * (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_6d96ac53d1b95ead90800c8c317b84ac)() = &::statiskit::BinomialDistributionMMEstimation::Estimator::get_location;
    void  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_5d577514ebff586cb056a3bcecd2ab4e)(struct ::statiskit::UnivariateLocationEstimation::Estimator const &) = &::statiskit::BinomialDistributionMMEstimation::Estimator::set_location;
    struct ::statiskit::UnivariateDispersionEstimation::Estimator * (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_43ba873cf7495e93b13d36b1d62fd2d0)() = &::statiskit::BinomialDistributionMMEstimation::Estimator::get_dispersion;
    void  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_33cfeb40eb0552c4b8e77c99cc95009c)(struct ::statiskit::UnivariateDispersionEstimation::Estimator const &) = &::statiskit::BinomialDistributionMMEstimation::Estimator::set_dispersion;
    boost::python::class_< class ::statiskit::BinomialDistributionMMEstimation::Estimator, autowig::Held< class ::statiskit::BinomialDistributionMMEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_1581bb259a1355888c0e234a7f9960d9("Estimator", "", boost::python::no_init);
    class_1581bb259a1355888c0e234a7f9960d9.def(boost::python::init<  >(""));
    class_1581bb259a1355888c0e234a7f9960d9.def(boost::python::init< class ::statiskit::BinomialDistributionMMEstimation::Estimator const & >(""));
    class_1581bb259a1355888c0e234a7f9960d9.def("get_location", method_pointer_6d96ac53d1b95ead90800c8c317b84ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1581bb259a1355888c0e234a7f9960d9.def("set_location", method_pointer_5d577514ebff586cb056a3bcecd2ab4e, "");
    class_1581bb259a1355888c0e234a7f9960d9.def("get_dispersion", method_pointer_43ba873cf7495e93b13d36b1d62fd2d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1581bb259a1355888c0e234a7f9960d9.def("set_dispersion", method_pointer_33cfeb40eb0552c4b8e77c99cc95009c, "");

    if(autowig::Held< class ::statiskit::BinomialDistributionMMEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BinomialDistributionMMEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}