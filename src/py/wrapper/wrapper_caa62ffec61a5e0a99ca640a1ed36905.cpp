#include "_core.h"



namespace autowig
{
    class Wrap_caa62ffec61a5e0a99ca640a1ed36905 : public ::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >
    {
        public:
            

        protected:
            
            virtual double  scoring(struct ::statiskit::UnivariateDistribution const * param_0, struct ::statiskit::UnivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_caa62ffec61a5e0a99ca640a1ed36905 const volatile * get_pointer<autowig::Wrap_caa62ffec61a5e0a99ca640a1ed36905 const volatile >(autowig::Wrap_caa62ffec61a5e0a99ca640a1ed36905 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_caa62ffec61a5e0a99ca640a1ed36905()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_1c16077fc2b0519d806e8d900500edde = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_1c16077fc2b0519d806e8d900500edde");
    boost::python::object module_1c16077fc2b0519d806e8d900500edde(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1c16077fc2b0519d806e8d900500edde.c_str()))));
    boost::python::scope().attr("__selection_1c16077fc2b0519d806e8d900500edde") = module_1c16077fc2b0519d806e8d900500edde;
    boost::python::scope scope_1c16077fc2b0519d806e8d900500edde = module_1c16077fc2b0519d806e8d900500edde;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_d14f1b0afd7d5334aa815cfa7e9063df)() const = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_6da8c84855f35c9d8505a81e9cf4c823)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_d382d54fd49b5beaab547053ddbbcdf0)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_d0cae626d46652ddb13449eca18a09c0)(struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_ef5bd1ef7f46550c9cfd23821bda32c4)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_caa62ffec61a5e0a99ca640a1ed36905, autowig::Held< autowig::Wrap_caa62ffec61a5e0a99ca640a1ed36905 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_caa62ffec61a5e0a99ca640a1ed36905("Estimator", "", boost::python::no_init);
    class_caa62ffec61a5e0a99ca640a1ed36905.def("__len__", method_pointer_d14f1b0afd7d5334aa815cfa7e9063df, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("get_estimator", method_pointer_6da8c84855f35c9d8505a81e9cf4c823, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("set_estimator", method_pointer_d382d54fd49b5beaab547053ddbbcdf0, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("add_estimator", method_pointer_d0cae626d46652ddb13449eca18a09c0, "");
    class_caa62ffec61a5e0a99ca640a1ed36905.def("remove_estimator", method_pointer_ef5bd1ef7f46550c9cfd23821bda32c4, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_caa62ffec61a5e0a99ca640a1ed36905 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::Type >();
    }

}