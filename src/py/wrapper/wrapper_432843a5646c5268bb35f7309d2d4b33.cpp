#include "_core.h"



namespace autowig
{
    class Wrap_432843a5646c5268bb35f7309d2d4b33 : public ::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual double  scoring(struct ::statiskit::MultivariateDistribution const * param_0, struct ::statiskit::MultivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_432843a5646c5268bb35f7309d2d4b33 const volatile * get_pointer<autowig::Wrap_432843a5646c5268bb35f7309d2d4b33 const volatile >(autowig::Wrap_432843a5646c5268bb35f7309d2d4b33 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_432843a5646c5268bb35f7309d2d4b33()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e28923ae1ac356e5845929232f8e09ac = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_e28923ae1ac356e5845929232f8e09ac");
    boost::python::object module_e28923ae1ac356e5845929232f8e09ac(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e28923ae1ac356e5845929232f8e09ac.c_str()))));
    boost::python::scope().attr("__selection_e28923ae1ac356e5845929232f8e09ac") = module_e28923ae1ac356e5845929232f8e09ac;
    boost::python::scope scope_e28923ae1ac356e5845929232f8e09ac = module_e28923ae1ac356e5845929232f8e09ac;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_807c80fd452557d9b51fc9ba6fe0fb51)() const = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_3331f973eb6f54cfbc3a92ac3b1ce848)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_844a99ccd8035b3e821357f54f18b079)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_2ed566579fdf57c184b491616d1dff20)(struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_c5fa489625b75bf18853395363cbdd64)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_432843a5646c5268bb35f7309d2d4b33, autowig::Held< autowig::Wrap_432843a5646c5268bb35f7309d2d4b33 >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_432843a5646c5268bb35f7309d2d4b33("Estimator", "", boost::python::no_init);
    class_432843a5646c5268bb35f7309d2d4b33.def("__len__", method_pointer_807c80fd452557d9b51fc9ba6fe0fb51, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("get_estimator", method_pointer_3331f973eb6f54cfbc3a92ac3b1ce848, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_432843a5646c5268bb35f7309d2d4b33.def("set_estimator", method_pointer_844a99ccd8035b3e821357f54f18b079, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("add_estimator", method_pointer_2ed566579fdf57c184b491616d1dff20, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("remove_estimator", method_pointer_c5fa489625b75bf18853395363cbdd64, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_432843a5646c5268bb35f7309d2d4b33 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
    }

}