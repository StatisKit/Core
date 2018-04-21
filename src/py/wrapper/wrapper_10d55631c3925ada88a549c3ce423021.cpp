#include "_core.h"



namespace autowig
{
    class Wrap_10d55631c3925ada88a549c3ce423021 : public ::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual double  scoring(struct ::statiskit::MultivariateConditionalDistribution const * param_0, class ::statiskit::MultivariateConditionalData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_10d55631c3925ada88a549c3ce423021 const volatile * get_pointer<autowig::Wrap_10d55631c3925ada88a549c3ce423021 const volatile >(autowig::Wrap_10d55631c3925ada88a549c3ce423021 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_10d55631c3925ada88a549c3ce423021()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b797921d7173586f85a1f0978dfdd59d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_b797921d7173586f85a1f0978dfdd59d");
    boost::python::object module_b797921d7173586f85a1f0978dfdd59d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b797921d7173586f85a1f0978dfdd59d.c_str()))));
    boost::python::scope().attr("__selection_b797921d7173586f85a1f0978dfdd59d") = module_b797921d7173586f85a1f0978dfdd59d;
    boost::python::scope scope_b797921d7173586f85a1f0978dfdd59d = module_b797921d7173586f85a1f0978dfdd59d;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_211825a5ce8b5203805ae26a1de855fe)() const = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::size;
    struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_77a7da95d40f554e94e8f3c97ea9d999)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_a4c078acb1225745a2fd7d5cf3b60310)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e8847d0419dd5a9292bd0be2086203f7)(struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_bbec5b8237e256e9be611226efaa856d)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_10d55631c3925ada88a549c3ce423021, autowig::Held< autowig::Wrap_10d55631c3925ada88a549c3ce423021 >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_10d55631c3925ada88a549c3ce423021("Estimator", "", boost::python::no_init);
    class_10d55631c3925ada88a549c3ce423021.def("__len__", method_pointer_211825a5ce8b5203805ae26a1de855fe, "");
    class_10d55631c3925ada88a549c3ce423021.def("get_estimator", method_pointer_77a7da95d40f554e94e8f3c97ea9d999, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_10d55631c3925ada88a549c3ce423021.def("set_estimator", method_pointer_a4c078acb1225745a2fd7d5cf3b60310, "");
    class_10d55631c3925ada88a549c3ce423021.def("add_estimator", method_pointer_e8847d0419dd5a9292bd0be2086203f7, "");
    class_10d55631c3925ada88a549c3ce423021.def("remove_estimator", method_pointer_bbec5b8237e256e9be611226efaa856d, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_10d55631c3925ada88a549c3ce423021 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}