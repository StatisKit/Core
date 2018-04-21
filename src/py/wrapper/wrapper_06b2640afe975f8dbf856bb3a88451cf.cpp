#include "_core.h"



namespace autowig
{
    class Wrap_06b2640afe975f8dbf856bb3a88451cf : public ::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
                        

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
    template <> autowig::Wrap_06b2640afe975f8dbf856bb3a88451cf const volatile * get_pointer<autowig::Wrap_06b2640afe975f8dbf856bb3a88451cf const volatile >(autowig::Wrap_06b2640afe975f8dbf856bb3a88451cf const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_06b2640afe975f8dbf856bb3a88451cf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_8f3919223a1f55afb240c3500b95c95b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_8f3919223a1f55afb240c3500b95c95b");
    boost::python::object module_8f3919223a1f55afb240c3500b95c95b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8f3919223a1f55afb240c3500b95c95b.c_str()))));
    boost::python::scope().attr("__selection_8f3919223a1f55afb240c3500b95c95b") = module_8f3919223a1f55afb240c3500b95c95b;
    boost::python::scope scope_8f3919223a1f55afb240c3500b95c95b = module_8f3919223a1f55afb240c3500b95c95b;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_dadf8b529f475bada70e94fa2d10fbf0)() const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_28de231ff729594dac57dfda306b3b32)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_04cdbc7ec82057368ad722125ac29266)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_fe97198c58045d729542b4e01963ec13)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_4a30e310a40c52158292918774e58316)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_06b2640afe975f8dbf856bb3a88451cf, autowig::Held< autowig::Wrap_06b2640afe975f8dbf856bb3a88451cf >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_06b2640afe975f8dbf856bb3a88451cf("Estimator", "", boost::python::no_init);
    class_06b2640afe975f8dbf856bb3a88451cf.def("__len__", method_pointer_dadf8b529f475bada70e94fa2d10fbf0, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("get_estimator", method_pointer_28de231ff729594dac57dfda306b3b32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("set_estimator", method_pointer_04cdbc7ec82057368ad722125ac29266, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("add_estimator", method_pointer_fe97198c58045d729542b4e01963ec13, "");
    class_06b2640afe975f8dbf856bb3a88451cf.def("remove_estimator", method_pointer_4a30e310a40c52158292918774e58316, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_06b2640afe975f8dbf856bb3a88451cf >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}