#include "_core.h"



namespace autowig
{
    class Wrap_7164ab149b5259c39291b9f2886585fb : public ::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_7164ab149b5259c39291b9f2886585fb const volatile * get_pointer<autowig::Wrap_7164ab149b5259c39291b9f2886585fb const volatile >(autowig::Wrap_7164ab149b5259c39291b9f2886585fb const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7164ab149b5259c39291b9f2886585fb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d9f7731b9dbc5740add8fc7749d9283d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_d9f7731b9dbc5740add8fc7749d9283d");
    boost::python::object module_d9f7731b9dbc5740add8fc7749d9283d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d9f7731b9dbc5740add8fc7749d9283d.c_str()))));
    boost::python::scope().attr("__selection_d9f7731b9dbc5740add8fc7749d9283d") = module_d9f7731b9dbc5740add8fc7749d9283d;
    boost::python::scope scope_d9f7731b9dbc5740add8fc7749d9283d = module_d9f7731b9dbc5740add8fc7749d9283d;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_b20ef68b9ad15ac589bf25df13306741)() const = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_22a814da05e956fb8383e8bd93034732)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_c9375e0ad0a15c85aa3c64667af8a3c6)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_6fb62e6ac5c353b0a8b041b7f18f5179)(struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_834ba6db864f50bb9e6ecf139c578c70)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_7164ab149b5259c39291b9f2886585fb, autowig::Held< autowig::Wrap_7164ab149b5259c39291b9f2886585fb >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_7164ab149b5259c39291b9f2886585fb("Estimator", "", boost::python::no_init);
    class_7164ab149b5259c39291b9f2886585fb.def("__len__", method_pointer_b20ef68b9ad15ac589bf25df13306741, "");
    class_7164ab149b5259c39291b9f2886585fb.def("get_estimator", method_pointer_22a814da05e956fb8383e8bd93034732, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7164ab149b5259c39291b9f2886585fb.def("set_estimator", method_pointer_c9375e0ad0a15c85aa3c64667af8a3c6, "");
    class_7164ab149b5259c39291b9f2886585fb.def("add_estimator", method_pointer_6fb62e6ac5c353b0a8b041b7f18f5179, "");
    class_7164ab149b5259c39291b9f2886585fb.def("remove_estimator", method_pointer_834ba6db864f50bb9e6ecf139c578c70, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7164ab149b5259c39291b9f2886585fb >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
    }

}