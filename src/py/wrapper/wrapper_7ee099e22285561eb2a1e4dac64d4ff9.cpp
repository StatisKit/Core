#include "_core.h"



namespace autowig
{
    class Wrap_7ee099e22285561eb2a1e4dac64d4ff9 : public ::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_7ee099e22285561eb2a1e4dac64d4ff9 const volatile * get_pointer<autowig::Wrap_7ee099e22285561eb2a1e4dac64d4ff9 const volatile >(autowig::Wrap_7ee099e22285561eb2a1e4dac64d4ff9 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7ee099e22285561eb2a1e4dac64d4ff9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_cd94566e790a5588be95cba4cfaaec57 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_cd94566e790a5588be95cba4cfaaec57");
    boost::python::object module_cd94566e790a5588be95cba4cfaaec57(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cd94566e790a5588be95cba4cfaaec57.c_str()))));
    boost::python::scope().attr("__selection_cd94566e790a5588be95cba4cfaaec57") = module_cd94566e790a5588be95cba4cfaaec57;
    boost::python::scope scope_cd94566e790a5588be95cba4cfaaec57 = module_cd94566e790a5588be95cba4cfaaec57;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_1120b1a3d74551f599e45fac9225479d)() const = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::size;
    struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_597dbbe845ae5fc9ad116e944049585e)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_797fcbeb32a75967b3acd8939287f27a)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_140b0ba608935d5b9904110ae815942c)(struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_9556611bcc2f52ad9b6ae596b8b387d7)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_7ee099e22285561eb2a1e4dac64d4ff9, autowig::Held< autowig::Wrap_7ee099e22285561eb2a1e4dac64d4ff9 >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_7ee099e22285561eb2a1e4dac64d4ff9("Estimator", "", boost::python::no_init);
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("__len__", method_pointer_1120b1a3d74551f599e45fac9225479d, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("get_estimator", method_pointer_597dbbe845ae5fc9ad116e944049585e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("set_estimator", method_pointer_797fcbeb32a75967b3acd8939287f27a, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("add_estimator", method_pointer_140b0ba608935d5b9904110ae815942c, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("remove_estimator", method_pointer_9556611bcc2f52ad9b6ae596b8b387d7, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7ee099e22285561eb2a1e4dac64d4ff9 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}