#include "_core.h"



namespace autowig
{
    class Wrap_dcb42c58c45353839bf4d081d804b14c : public ::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >
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
    template <> autowig::Wrap_dcb42c58c45353839bf4d081d804b14c const volatile * get_pointer<autowig::Wrap_dcb42c58c45353839bf4d081d804b14c const volatile >(autowig::Wrap_dcb42c58c45353839bf4d081d804b14c const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dcb42c58c45353839bf4d081d804b14c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_23bbb2ea83bb5e62a3af21e8a9994303)() const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_nb_states;
    struct ::statiskit::CategoricalMultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_e9c2029eacbe535891524cc513f9a7d1)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_b53a6340c14552d5865d67a55ffa953b)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_93cae38f6e695dedba0f0a5d1d3ffee2)() const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_6800c3ec1e5c5f249d955d569fcf0e5f)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_751325880b50538aad1c4cd8df410258)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_62c3d770ba2e54f28be03db03701fd0e)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_330bf5a374735b7ea0f7d833524f0a5b)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_04a46ebfe9ff5acea85c197697fb2e98)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_6d50dd7acd8d5577a073436325d17eab)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::uncertainty;
    boost::python::class_< autowig::Wrap_dcb42c58c45353839bf4d081d804b14c, autowig::Held< autowig::Wrap_dcb42c58c45353839bf4d081d804b14c >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateDistribution >, boost::noncopyable > class_dcb42c58c45353839bf4d081d804b14c("_MixtureDistribution_dcb42c58c45353839bf4d081d804b14c", "", boost::python::no_init);
    class_dcb42c58c45353839bf4d081d804b14c.def("get_nb_states", method_pointer_23bbb2ea83bb5e62a3af21e8a9994303, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("get_observation", method_pointer_e9c2029eacbe535891524cc513f9a7d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcb42c58c45353839bf4d081d804b14c.def("set_observation", method_pointer_b53a6340c14552d5865d67a55ffa953b, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("get_pi", method_pointer_93cae38f6e695dedba0f0a5d1d3ffee2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dcb42c58c45353839bf4d081d804b14c.def("set_pi", method_pointer_6800c3ec1e5c5f249d955d569fcf0e5f, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("posterior", method_pointer_751325880b50538aad1c4cd8df410258, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("assignment", method_pointer_62c3d770ba2e54f28be03db03701fd0e, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("assignment", method_pointer_330bf5a374735b7ea0f7d833524f0a5b, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("uncertainty", method_pointer_04a46ebfe9ff5acea85c197697fb2e98, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("uncertainty", method_pointer_6d50dd7acd8d5577a073436325d17eab, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_dcb42c58c45353839bf4d081d804b14c >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::Type >();
    }

}