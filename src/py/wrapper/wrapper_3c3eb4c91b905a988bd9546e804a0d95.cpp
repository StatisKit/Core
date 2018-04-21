#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BinomialDistributionMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::BinomialDistributionMLEstimation::Estimator const volatile >(class ::statiskit::BinomialDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3c3eb4c91b905a988bd9546e804a0d95()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a640206684935d01aa5be922b3bbdf00 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_distribution_ml_estimation");
    boost::python::object module_a640206684935d01aa5be922b3bbdf00(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a640206684935d01aa5be922b3bbdf00.c_str()))));
    boost::python::scope().attr("_binomial_distribution_ml_estimation") = module_a640206684935d01aa5be922b3bbdf00;
    boost::python::scope scope_a640206684935d01aa5be922b3bbdf00 = module_a640206684935d01aa5be922b3bbdf00;
    bool  (::statiskit::BinomialDistributionMLEstimation::Estimator::*method_pointer_b9c9fe80edb7575c9c4761d2675e9723)() const = &::statiskit::BinomialDistributionMLEstimation::Estimator::get_force;
    void  (::statiskit::BinomialDistributionMLEstimation::Estimator::*method_pointer_23f661468c525bc296871ebdc4bd363c)(bool const &) = &::statiskit::BinomialDistributionMLEstimation::Estimator::set_force;
    boost::python::class_< class ::statiskit::BinomialDistributionMLEstimation::Estimator, autowig::Held< class ::statiskit::BinomialDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > class_3c3eb4c91b905a988bd9546e804a0d95("Estimator", "", boost::python::no_init);
    class_3c3eb4c91b905a988bd9546e804a0d95.def(boost::python::init<  >(""));
    class_3c3eb4c91b905a988bd9546e804a0d95.def(boost::python::init< class ::statiskit::BinomialDistributionMLEstimation::Estimator const & >(""));
    class_3c3eb4c91b905a988bd9546e804a0d95.def("get_force", method_pointer_b9c9fe80edb7575c9c4761d2675e9723, "");
    class_3c3eb4c91b905a988bd9546e804a0d95.def("set_force", method_pointer_23f661468c525bc296871ebdc4bd363c, "");

    if(autowig::Held< class ::statiskit::BinomialDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BinomialDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}