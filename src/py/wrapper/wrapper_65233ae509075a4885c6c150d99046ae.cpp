#include "_core.h"



namespace autowig
{
    class Wrap_65233ae509075a4885c6c150d99046ae : public ::statiskit::Selection< ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual double  scoring(struct ::statiskit::SingularDistribution const * param_0, struct ::statiskit::MultivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_65233ae509075a4885c6c150d99046ae const volatile * get_pointer<autowig::Wrap_65233ae509075a4885c6c150d99046ae const volatile >(autowig::Wrap_65233ae509075a4885c6c150d99046ae const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_65233ae509075a4885c6c150d99046ae()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_503849a008915707a02e604de7f58273 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_503849a008915707a02e604de7f58273");
    boost::python::object module_503849a008915707a02e604de7f58273(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_503849a008915707a02e604de7f58273.c_str()))));
    boost::python::scope().attr("__selection_503849a008915707a02e604de7f58273") = module_503849a008915707a02e604de7f58273;
    boost::python::scope scope_503849a008915707a02e604de7f58273 = module_503849a008915707a02e604de7f58273;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_a0c9a82c65995967a70e9b22f105ae17)() const = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::size;
    struct ::statiskit::SingularDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_0d2bc6a52ba1565ea265832d78542f65)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_a12f9b73b5085a6181e99fee1afce5a1)(::statiskit::Index const &, struct ::statiskit::SingularDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_215deeba5eef51bdbc3e7da8f73608ea)(struct ::statiskit::SingularDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator::*method_pointer_c732d7a5b1c052edaf245bf716818973)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_65233ae509075a4885c6c150d99046ae, autowig::Held< autowig::Wrap_65233ae509075a4885c6c150d99046ae >::Type, boost::python::bases< struct ::statiskit::SingularDistributionEstimation::Estimator >, boost::noncopyable > class_65233ae509075a4885c6c150d99046ae("Estimator", "", boost::python::no_init);
    class_65233ae509075a4885c6c150d99046ae.def("__len__", method_pointer_a0c9a82c65995967a70e9b22f105ae17, "");
    class_65233ae509075a4885c6c150d99046ae.def("get_estimator", method_pointer_0d2bc6a52ba1565ea265832d78542f65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_65233ae509075a4885c6c150d99046ae.def("set_estimator", method_pointer_a12f9b73b5085a6181e99fee1afce5a1, "");
    class_65233ae509075a4885c6c150d99046ae.def("add_estimator", method_pointer_215deeba5eef51bdbc3e7da8f73608ea, "");
    class_65233ae509075a4885c6c150d99046ae.def("remove_estimator", method_pointer_c732d7a5b1c052edaf245bf716818973, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_65233ae509075a4885c6c150d99046ae >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation::Estimator >::Type >();
    }

}