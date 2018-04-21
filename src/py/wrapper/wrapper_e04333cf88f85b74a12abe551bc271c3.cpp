#include "_core.h"



namespace autowig
{
    class Wrap_e04333cf88f85b74a12abe551bc271c3 : public ::statiskit::Selection< ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_e04333cf88f85b74a12abe551bc271c3 const volatile * get_pointer<autowig::Wrap_e04333cf88f85b74a12abe551bc271c3 const volatile >(autowig::Wrap_e04333cf88f85b74a12abe551bc271c3 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e04333cf88f85b74a12abe551bc271c3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2d551f106ba85f3cb3acfbda4c8e17c7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_2d551f106ba85f3cb3acfbda4c8e17c7");
    boost::python::object module_2d551f106ba85f3cb3acfbda4c8e17c7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_2d551f106ba85f3cb3acfbda4c8e17c7.c_str()))));
    boost::python::scope().attr("__selection_2d551f106ba85f3cb3acfbda4c8e17c7") = module_2d551f106ba85f3cb3acfbda4c8e17c7;
    boost::python::scope scope_2d551f106ba85f3cb3acfbda4c8e17c7 = module_2d551f106ba85f3cb3acfbda4c8e17c7;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_3d106d53e52b5f76b1661aaf45332fdc)() const = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::MultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_c5573a36cd255e53ab0672174b4c832d)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_8efc2bfaeba458bb82dbf642db09164c)(::statiskit::Index const &, struct ::statiskit::MultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_c634120ddeca53f8ba4c707c3b2db56e)(struct ::statiskit::MultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_7b06d63408b65cdbbddf887e73437104)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_e04333cf88f85b74a12abe551bc271c3, autowig::Held< autowig::Wrap_e04333cf88f85b74a12abe551bc271c3 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_e04333cf88f85b74a12abe551bc271c3("Estimator", "", boost::python::no_init);
    class_e04333cf88f85b74a12abe551bc271c3.def("__len__", method_pointer_3d106d53e52b5f76b1661aaf45332fdc, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("get_estimator", method_pointer_c5573a36cd255e53ab0672174b4c832d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e04333cf88f85b74a12abe551bc271c3.def("set_estimator", method_pointer_8efc2bfaeba458bb82dbf642db09164c, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("add_estimator", method_pointer_c634120ddeca53f8ba4c707c3b2db56e, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("remove_estimator", method_pointer_7b06d63408b65cdbbddf887e73437104, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e04333cf88f85b74a12abe551bc271c3 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
    }

}