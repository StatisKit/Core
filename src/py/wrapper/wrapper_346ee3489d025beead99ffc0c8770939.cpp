#include "_core.h"



namespace autowig
{
    class Wrap_346ee3489d025beead99ffc0c8770939 : public ::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual double  scoring(struct ::statiskit::UnivariateConditionalDistribution const * param_0, class ::statiskit::UnivariateConditionalData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_346ee3489d025beead99ffc0c8770939 const volatile * get_pointer<autowig::Wrap_346ee3489d025beead99ffc0c8770939 const volatile >(autowig::Wrap_346ee3489d025beead99ffc0c8770939 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_346ee3489d025beead99ffc0c8770939()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f29b9e4bae2254ec8b6d9cf0133bf530 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_f29b9e4bae2254ec8b6d9cf0133bf530");
    boost::python::object module_f29b9e4bae2254ec8b6d9cf0133bf530(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f29b9e4bae2254ec8b6d9cf0133bf530.c_str()))));
    boost::python::scope().attr("__selection_f29b9e4bae2254ec8b6d9cf0133bf530") = module_f29b9e4bae2254ec8b6d9cf0133bf530;
    boost::python::scope scope_f29b9e4bae2254ec8b6d9cf0133bf530 = module_f29b9e4bae2254ec8b6d9cf0133bf530;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d2667e9b67005a438b7ac1df1fc16889)() const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::size;
    struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d4439334c78255789ad4fae657e51987)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_dbe69e5ee0bf5a41aacdda29626d1a4e)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_de2857cfb7f95083849d5ba76a6d37a2)(struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_2e71c69036445fb9b45284b1b7289763)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_346ee3489d025beead99ffc0c8770939, autowig::Held< autowig::Wrap_346ee3489d025beead99ffc0c8770939 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_346ee3489d025beead99ffc0c8770939("Estimator", "", boost::python::no_init);
    class_346ee3489d025beead99ffc0c8770939.def("__len__", method_pointer_d2667e9b67005a438b7ac1df1fc16889, "");
    class_346ee3489d025beead99ffc0c8770939.def("get_estimator", method_pointer_d4439334c78255789ad4fae657e51987, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_346ee3489d025beead99ffc0c8770939.def("set_estimator", method_pointer_dbe69e5ee0bf5a41aacdda29626d1a4e, "");
    class_346ee3489d025beead99ffc0c8770939.def("add_estimator", method_pointer_de2857cfb7f95083849d5ba76a6d37a2, "");
    class_346ee3489d025beead99ffc0c8770939.def("remove_estimator", method_pointer_2e71c69036445fb9b45284b1b7289763, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_346ee3489d025beead99ffc0c8770939 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}