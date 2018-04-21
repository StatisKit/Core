#include "_core.h"



namespace autowig
{
    class Wrap_964cf359ff005773acf9fc2bf7c5743b : public ::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_964cf359ff005773acf9fc2bf7c5743b const volatile * get_pointer<autowig::Wrap_964cf359ff005773acf9fc2bf7c5743b const volatile >(autowig::Wrap_964cf359ff005773acf9fc2bf7c5743b const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_964cf359ff005773acf9fc2bf7c5743b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e1e7647ed4235775b6d085dd28a83675 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_e1e7647ed4235775b6d085dd28a83675");
    boost::python::object module_e1e7647ed4235775b6d085dd28a83675(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e1e7647ed4235775b6d085dd28a83675.c_str()))));
    boost::python::scope().attr("__selection_e1e7647ed4235775b6d085dd28a83675") = module_e1e7647ed4235775b6d085dd28a83675;
    boost::python::scope scope_e1e7647ed4235775b6d085dd28a83675 = module_e1e7647ed4235775b6d085dd28a83675;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_ac2822c95c21522d8b8765da0facf1f6)() const = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::size;
    struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_f0e84d56824152fcbca92bf618404904)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_5eb59769d7a857799bed2ea2528f1144)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_ac0a56cc16ba513a87f266a002e8ef40)(struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_5d62b69050735063bfab83f64099b288)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_964cf359ff005773acf9fc2bf7c5743b, autowig::Held< autowig::Wrap_964cf359ff005773acf9fc2bf7c5743b >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_964cf359ff005773acf9fc2bf7c5743b("Estimator", "", boost::python::no_init);
    class_964cf359ff005773acf9fc2bf7c5743b.def("__len__", method_pointer_ac2822c95c21522d8b8765da0facf1f6, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("get_estimator", method_pointer_f0e84d56824152fcbca92bf618404904, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("set_estimator", method_pointer_5eb59769d7a857799bed2ea2528f1144, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("add_estimator", method_pointer_ac0a56cc16ba513a87f266a002e8ef40, "");
    class_964cf359ff005773acf9fc2bf7c5743b.def("remove_estimator", method_pointer_5d62b69050735063bfab83f64099b288, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_964cf359ff005773acf9fc2bf7c5743b >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}