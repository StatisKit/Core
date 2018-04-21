#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile >(class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dda6bb3fd9345086a3231d9341e47d49()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e5e03034302f5c6ca9d068a205353d2a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_binomial_distribution_ml_estimation");
    boost::python::object module_e5e03034302f5c6ca9d068a205353d2a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e5e03034302f5c6ca9d068a205353d2a.c_str()))));
    boost::python::scope().attr("_negative_binomial_distribution_ml_estimation") = module_e5e03034302f5c6ca9d068a205353d2a;
    boost::python::scope scope_e5e03034302f5c6ca9d068a205353d2a = module_e5e03034302f5c6ca9d068a205353d2a;
    bool  (::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::*method_pointer_a6fb931b41ac5f978452c410417353b9)() const = &::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::get_force;
    void  (::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::*method_pointer_ec4990a415a85002ae172a7815ca1ea3)(bool const &) = &::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::set_force;
    boost::python::class_< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator, autowig::Held< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > class_dda6bb3fd9345086a3231d9341e47d49("Estimator", "", boost::python::no_init);
    class_dda6bb3fd9345086a3231d9341e47d49.def(boost::python::init<  >(""));
    class_dda6bb3fd9345086a3231d9341e47d49.def(boost::python::init< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const & >(""));
    class_dda6bb3fd9345086a3231d9341e47d49.def("get_force", method_pointer_a6fb931b41ac5f978452c410417353b9, "");
    class_dda6bb3fd9345086a3231d9341e47d49.def("set_force", method_pointer_ec4990a415a85002ae172a7815ca1ea3, "");

    if(autowig::Held< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}