#include "_core.h"



namespace autowig
{
    class Wrap_8a467c708d9c5620937b1f63cde332b1 : public ::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_8a467c708d9c5620937b1f63cde332b1 const volatile * get_pointer<autowig::Wrap_8a467c708d9c5620937b1f63cde332b1 const volatile >(autowig::Wrap_8a467c708d9c5620937b1f63cde332b1 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8a467c708d9c5620937b1f63cde332b1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6d92f9f1e7ca5180bf403b23e9073d86 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_6d92f9f1e7ca5180bf403b23e9073d86");
    boost::python::object module_6d92f9f1e7ca5180bf403b23e9073d86(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6d92f9f1e7ca5180bf403b23e9073d86.c_str()))));
    boost::python::scope().attr("__selection_6d92f9f1e7ca5180bf403b23e9073d86") = module_6d92f9f1e7ca5180bf403b23e9073d86;
    boost::python::scope scope_6d92f9f1e7ca5180bf403b23e9073d86 = module_6d92f9f1e7ca5180bf403b23e9073d86;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_73fd5e6da2d4530f8f111e67a7c33ce3)() const = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_208343c9d16956f590cc79b5cd6d8ea4)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_a15a9e8967f253a4953743d81164250d)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_fcafee85447e50158a0e087e45635955)(struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_e1756c5ca72c5f958a12e2a83458b927)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_8a467c708d9c5620937b1f63cde332b1, autowig::Held< autowig::Wrap_8a467c708d9c5620937b1f63cde332b1 >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_8a467c708d9c5620937b1f63cde332b1("Estimator", "", boost::python::no_init);
    class_8a467c708d9c5620937b1f63cde332b1.def("__len__", method_pointer_73fd5e6da2d4530f8f111e67a7c33ce3, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("get_estimator", method_pointer_208343c9d16956f590cc79b5cd6d8ea4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8a467c708d9c5620937b1f63cde332b1.def("set_estimator", method_pointer_a15a9e8967f253a4953743d81164250d, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("add_estimator", method_pointer_fcafee85447e50158a0e087e45635955, "");
    class_8a467c708d9c5620937b1f63cde332b1.def("remove_estimator", method_pointer_e1756c5ca72c5f958a12e2a83458b927, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_8a467c708d9c5620937b1f63cde332b1 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}