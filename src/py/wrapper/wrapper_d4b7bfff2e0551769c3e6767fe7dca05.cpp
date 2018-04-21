#include "_core.h"



namespace autowig
{
    class Wrap_d4b7bfff2e0551769c3e6767fe7dca05 : public ::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d4b7bfff2e0551769c3e6767fe7dca05 const volatile * get_pointer<autowig::Wrap_d4b7bfff2e0551769c3e6767fe7dca05 const volatile >(autowig::Wrap_d4b7bfff2e0551769c3e6767fe7dca05 const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d4b7bfff2e0551769c3e6767fe7dca05()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_84e54ba703be5d09a3850865ebae7947)() const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_nb_states;
    struct ::statiskit::ContinuousMultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_c7ad8579c93f5af99593991c02ff8595)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_be0a79cf74985b8a9b7c9f627f3c9346)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_bec42718135951b4b5e808b13d653ac6)() const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_0da7897e2cdb59df8f758fc06f88b579)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_6ec110ed65c95bbdafcd7a8eac50f286)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_2ef3daee602455f4bb59edc9cb1e8116)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_2ec2555e6a3552b0a12beaf4bfb45e07)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_d1a69ac6a265507ea72b7a64367795f1)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_af1dba75f7ed587d9c452594631b7033)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::uncertainty;
    boost::python::class_< autowig::Wrap_d4b7bfff2e0551769c3e6767fe7dca05, autowig::Held< autowig::Wrap_d4b7bfff2e0551769c3e6767fe7dca05 >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistribution >, boost::noncopyable > class_d4b7bfff2e0551769c3e6767fe7dca05("_MixtureDistribution_d4b7bfff2e0551769c3e6767fe7dca05", "", boost::python::no_init);
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("get_nb_states", method_pointer_84e54ba703be5d09a3850865ebae7947, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("get_observation", method_pointer_c7ad8579c93f5af99593991c02ff8595, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("set_observation", method_pointer_be0a79cf74985b8a9b7c9f627f3c9346, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("get_pi", method_pointer_bec42718135951b4b5e808b13d653ac6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("set_pi", method_pointer_0da7897e2cdb59df8f758fc06f88b579, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("posterior", method_pointer_6ec110ed65c95bbdafcd7a8eac50f286, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("assignment", method_pointer_2ef3daee602455f4bb59edc9cb1e8116, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("assignment", method_pointer_2ec2555e6a3552b0a12beaf4bfb45e07, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("uncertainty", method_pointer_d1a69ac6a265507ea72b7a64367795f1, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("uncertainty", method_pointer_af1dba75f7ed587d9c452594631b7033, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d4b7bfff2e0551769c3e6767fe7dca05 >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type >();
    }

}