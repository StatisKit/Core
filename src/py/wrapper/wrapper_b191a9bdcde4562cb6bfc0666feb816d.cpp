#include "_core.h"



namespace autowig
{
    class Wrap_b191a9bdcde4562cb6bfc0666feb816d : public ::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_b191a9bdcde4562cb6bfc0666feb816d const volatile * get_pointer<autowig::Wrap_b191a9bdcde4562cb6bfc0666feb816d const volatile >(autowig::Wrap_b191a9bdcde4562cb6bfc0666feb816d const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b191a9bdcde4562cb6bfc0666feb816d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_44e7c25b7bde5df2a9f031c534765f11 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_44e7c25b7bde5df2a9f031c534765f11");
    boost::python::object module_44e7c25b7bde5df2a9f031c534765f11(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_44e7c25b7bde5df2a9f031c534765f11.c_str()))));
    boost::python::scope().attr("__selection_44e7c25b7bde5df2a9f031c534765f11") = module_44e7c25b7bde5df2a9f031c534765f11;
    boost::python::scope scope_44e7c25b7bde5df2a9f031c534765f11 = module_44e7c25b7bde5df2a9f031c534765f11;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_04ab084b79a455b693e64f489c453b2d)() const = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::size;
    struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_ddcbf68804c25e6eb53c74ef3ffb5c6f)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_06ea3744ff195b1e825286bf5ed0a859)(::statiskit::Index const &, struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_afbb8fda8a9058e7ae26aec284e566c9)(struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::*method_pointer_2666deeec9645437b6197d6e4c198f2f)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_b191a9bdcde4562cb6bfc0666feb816d, autowig::Held< autowig::Wrap_b191a9bdcde4562cb6bfc0666feb816d >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_b191a9bdcde4562cb6bfc0666feb816d("Estimator", "", boost::python::no_init);
    class_b191a9bdcde4562cb6bfc0666feb816d.def("__len__", method_pointer_04ab084b79a455b693e64f489c453b2d, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("get_estimator", method_pointer_ddcbf68804c25e6eb53c74ef3ffb5c6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("set_estimator", method_pointer_06ea3744ff195b1e825286bf5ed0a859, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("add_estimator", method_pointer_afbb8fda8a9058e7ae26aec284e566c9, "");
    class_b191a9bdcde4562cb6bfc0666feb816d.def("remove_estimator", method_pointer_2666deeec9645437b6197d6e4c198f2f, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b191a9bdcde4562cb6bfc0666feb816d >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}