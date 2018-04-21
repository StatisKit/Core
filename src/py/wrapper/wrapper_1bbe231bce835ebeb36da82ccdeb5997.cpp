#include "_core.h"



namespace autowig
{
    class Wrap_1bbe231bce835ebeb36da82ccdeb5997 : public ::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_1bbe231bce835ebeb36da82ccdeb5997 const volatile * get_pointer<autowig::Wrap_1bbe231bce835ebeb36da82ccdeb5997 const volatile >(autowig::Wrap_1bbe231bce835ebeb36da82ccdeb5997 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1bbe231bce835ebeb36da82ccdeb5997()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_98899d54414f570aa57f6357fdc66074 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_98899d54414f570aa57f6357fdc66074");
    boost::python::object module_98899d54414f570aa57f6357fdc66074(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_98899d54414f570aa57f6357fdc66074.c_str()))));
    boost::python::scope().attr("__selection_98899d54414f570aa57f6357fdc66074") = module_98899d54414f570aa57f6357fdc66074;
    boost::python::scope scope_98899d54414f570aa57f6357fdc66074 = module_98899d54414f570aa57f6357fdc66074;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_b802ccc39dcd5c0e835211836ab7d59d)() const = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::size;
    struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e274930ea2dc5ab1bc443203a08ceddc)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_50b5354942d657baa64f803083675e1d)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d3aa394a479f5aec8684a5608ca72448)(struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_6dd5e7e30c8252828df26a594edfa560)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_1bbe231bce835ebeb36da82ccdeb5997, autowig::Held< autowig::Wrap_1bbe231bce835ebeb36da82ccdeb5997 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_1bbe231bce835ebeb36da82ccdeb5997("Estimator", "", boost::python::no_init);
    class_1bbe231bce835ebeb36da82ccdeb5997.def("__len__", method_pointer_b802ccc39dcd5c0e835211836ab7d59d, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("get_estimator", method_pointer_e274930ea2dc5ab1bc443203a08ceddc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("set_estimator", method_pointer_50b5354942d657baa64f803083675e1d, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("add_estimator", method_pointer_d3aa394a479f5aec8684a5608ca72448, "");
    class_1bbe231bce835ebeb36da82ccdeb5997.def("remove_estimator", method_pointer_6dd5e7e30c8252828df26a594edfa560, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1bbe231bce835ebeb36da82ccdeb5997 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}