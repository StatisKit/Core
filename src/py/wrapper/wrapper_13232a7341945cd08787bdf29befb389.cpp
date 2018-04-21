#include "_core.h"



namespace autowig
{
    class Wrap_13232a7341945cd08787bdf29befb389 : public ::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")(param_0);
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
    template <> autowig::Wrap_13232a7341945cd08787bdf29befb389 const volatile * get_pointer<autowig::Wrap_13232a7341945cd08787bdf29befb389 const volatile >(autowig::Wrap_13232a7341945cd08787bdf29befb389 const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_13232a7341945cd08787bdf29befb389()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_f29a9062a3a352369fcb0522a15b8cf3)() const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::get_nb_states;
    struct ::statiskit::SingularDistribution const * (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_6fec79f58d915ece83cbb6574ebbe8d1)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_68960ed00cc65811a690382a0d67ba31)(::statiskit::Index const &, struct ::statiskit::SingularDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_7963c44546715eb0ab2c51bc5d9508e2)() const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_5b390b67e10f5171aad53ac4b34b9aad)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_422b9d66f2f95daa938ac7924ebeac4d)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_8b660503f42355aface44a6b269d2198)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_2402a3a010375f17bc28753344cae909)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_7371ce416e5556a6b595feb14bf9b48b)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_49ba69a598e250d89edd74201e72a6f0)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::uncertainty;
    boost::python::class_< autowig::Wrap_13232a7341945cd08787bdf29befb389, autowig::Held< autowig::Wrap_13232a7341945cd08787bdf29befb389 >::Type, boost::python::bases< struct ::statiskit::SingularDistribution >, boost::noncopyable > class_13232a7341945cd08787bdf29befb389("_MixtureDistribution_13232a7341945cd08787bdf29befb389", "", boost::python::no_init);
    class_13232a7341945cd08787bdf29befb389.def("get_nb_states", method_pointer_f29a9062a3a352369fcb0522a15b8cf3, "");
    class_13232a7341945cd08787bdf29befb389.def("get_observation", method_pointer_6fec79f58d915ece83cbb6574ebbe8d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13232a7341945cd08787bdf29befb389.def("set_observation", method_pointer_68960ed00cc65811a690382a0d67ba31, "");
    class_13232a7341945cd08787bdf29befb389.def("get_pi", method_pointer_7963c44546715eb0ab2c51bc5d9508e2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13232a7341945cd08787bdf29befb389.def("set_pi", method_pointer_5b390b67e10f5171aad53ac4b34b9aad, "");
    class_13232a7341945cd08787bdf29befb389.def("posterior", method_pointer_422b9d66f2f95daa938ac7924ebeac4d, "");
    class_13232a7341945cd08787bdf29befb389.def("assignment", method_pointer_8b660503f42355aface44a6b269d2198, "");
    class_13232a7341945cd08787bdf29befb389.def("assignment", method_pointer_2402a3a010375f17bc28753344cae909, "");
    class_13232a7341945cd08787bdf29befb389.def("uncertainty", method_pointer_7371ce416e5556a6b595feb14bf9b48b, "");
    class_13232a7341945cd08787bdf29befb389.def("uncertainty", method_pointer_49ba69a598e250d89edd74201e72a6f0, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_13232a7341945cd08787bdf29befb389 >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >::Type, autowig::Held< struct ::statiskit::SingularDistribution >::Type >();
    }

}