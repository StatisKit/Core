#include "_core.h"



namespace autowig
{
    class Wrap_5a3d233a5dc55aaba123c4eb5cd6e502 : public ::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_5a3d233a5dc55aaba123c4eb5cd6e502 const volatile * get_pointer<autowig::Wrap_5a3d233a5dc55aaba123c4eb5cd6e502 const volatile >(autowig::Wrap_5a3d233a5dc55aaba123c4eb5cd6e502 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5a3d233a5dc55aaba123c4eb5cd6e502()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5b1444f7a44054459e5adff18c81bbfb = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_5b1444f7a44054459e5adff18c81bbfb");
    boost::python::object module_5b1444f7a44054459e5adff18c81bbfb(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5b1444f7a44054459e5adff18c81bbfb.c_str()))));
    boost::python::scope().attr("__selection_5b1444f7a44054459e5adff18c81bbfb") = module_5b1444f7a44054459e5adff18c81bbfb;
    boost::python::scope scope_5b1444f7a44054459e5adff18c81bbfb = module_5b1444f7a44054459e5adff18c81bbfb;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_8a70218c19c85c61a675c59c5e170794)() const = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_057b6efe62bf5455adb4babbd3c6d7b1)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_c18ded6290b358be8850f8d8daae8a6e)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_2ec80de535e75c4e8725ce514b4cdf92)(struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_4e44b3e085ff51c1b0633f02b4bd9988)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_5a3d233a5dc55aaba123c4eb5cd6e502, autowig::Held< autowig::Wrap_5a3d233a5dc55aaba123c4eb5cd6e502 >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_5a3d233a5dc55aaba123c4eb5cd6e502("Estimator", "", boost::python::no_init);
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("__len__", method_pointer_8a70218c19c85c61a675c59c5e170794, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("get_estimator", method_pointer_057b6efe62bf5455adb4babbd3c6d7b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("set_estimator", method_pointer_c18ded6290b358be8850f8d8daae8a6e, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("add_estimator", method_pointer_2ec80de535e75c4e8725ce514b4cdf92, "");
    class_5a3d233a5dc55aaba123c4eb5cd6e502.def("remove_estimator", method_pointer_4e44b3e085ff51c1b0633f02b4bd9988, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5a3d233a5dc55aaba123c4eb5cd6e502 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type >();
    }

}