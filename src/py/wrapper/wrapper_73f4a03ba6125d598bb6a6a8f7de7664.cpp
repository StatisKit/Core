#include "_core.h"



namespace autowig
{
    class Wrap_73f4a03ba6125d598bb6a6a8f7de7664 : public ::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_73f4a03ba6125d598bb6a6a8f7de7664 const volatile * get_pointer<autowig::Wrap_73f4a03ba6125d598bb6a6a8f7de7664 const volatile >(autowig::Wrap_73f4a03ba6125d598bb6a6a8f7de7664 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_73f4a03ba6125d598bb6a6a8f7de7664()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6040d8f35856585fa65c9beece0f520f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_6040d8f35856585fa65c9beece0f520f");
    boost::python::object module_6040d8f35856585fa65c9beece0f520f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6040d8f35856585fa65c9beece0f520f.c_str()))));
    boost::python::scope().attr("__selection_6040d8f35856585fa65c9beece0f520f") = module_6040d8f35856585fa65c9beece0f520f;
    boost::python::scope scope_6040d8f35856585fa65c9beece0f520f = module_6040d8f35856585fa65c9beece0f520f;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_c402748d2cab5e21a1f757e2c6d42c30)() const = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::size;
    struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_04cbf63a882c577cbaedece0977b3f06)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_1e1f9feb5de151d487d37d04f23903af)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_097be74e909e59baa2be813e4fcc1e91)(struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_93d565997abe5f4f88a7ea3a6c859f11)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_73f4a03ba6125d598bb6a6a8f7de7664, autowig::Held< autowig::Wrap_73f4a03ba6125d598bb6a6a8f7de7664 >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_73f4a03ba6125d598bb6a6a8f7de7664("Estimator", "", boost::python::no_init);
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("__len__", method_pointer_c402748d2cab5e21a1f757e2c6d42c30, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("get_estimator", method_pointer_04cbf63a882c577cbaedece0977b3f06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("set_estimator", method_pointer_1e1f9feb5de151d487d37d04f23903af, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("add_estimator", method_pointer_097be74e909e59baa2be813e4fcc1e91, "");
    class_73f4a03ba6125d598bb6a6a8f7de7664.def("remove_estimator", method_pointer_93d565997abe5f4f88a7ea3a6c859f11, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_73f4a03ba6125d598bb6a6a8f7de7664 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}