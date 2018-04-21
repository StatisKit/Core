#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b85047a790a65c398d0495802b9a0f04()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_df69c16128ca5c609f45a63866a1af2f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__shifted_distribution_estimation_df69c16128ca5c609f45a63866a1af2f");
    boost::python::object module_df69c16128ca5c609f45a63866a1af2f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_df69c16128ca5c609f45a63866a1af2f.c_str()))));
    boost::python::scope().attr("__shifted_distribution_estimation_df69c16128ca5c609f45a63866a1af2f") = module_df69c16128ca5c609f45a63866a1af2f;
    boost::python::scope scope_df69c16128ca5c609f45a63866a1af2f = module_df69c16128ca5c609f45a63866a1af2f;
    int  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_dcc0ba9246d151cc9165d2874159b32a)() const = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_shift;
    void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_b142f8882bf254159ce8c7249359a677)(int const &) = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_shift;
    ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::estimator_type const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_fe88d16bc27256d59ecbd4d1b3779e7f)() const = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_57565bd7950f54f08d1cd4e75369565e)(::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::estimator_type const &) = &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;
    boost::python::class_< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > > class_b85047a790a65c398d0495802b9a0f04("Estimator", "", boost::python::no_init);
    class_b85047a790a65c398d0495802b9a0f04.def(boost::python::init<  >(""));
    class_b85047a790a65c398d0495802b9a0f04.def(boost::python::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const & >(""));
    class_b85047a790a65c398d0495802b9a0f04.def("get_shift", method_pointer_dcc0ba9246d151cc9165d2874159b32a, "");
    class_b85047a790a65c398d0495802b9a0f04.def("set_shift", method_pointer_b142f8882bf254159ce8c7249359a677, "");
    class_b85047a790a65c398d0495802b9a0f04.def("get_estimator", method_pointer_fe88d16bc27256d59ecbd4d1b3779e7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b85047a790a65c398d0495802b9a0f04.def("set_estimator", method_pointer_57565bd7950f54f08d1cd4e75369565e, "");

    if(autowig::Held< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type >();
    }

}