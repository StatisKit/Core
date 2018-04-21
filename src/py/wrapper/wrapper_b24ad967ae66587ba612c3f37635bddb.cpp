#include "_core.h"



namespace autowig
{
    class Wrap_b24ad967ae66587ba612c3f37635bddb : public ::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >
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
    template <> autowig::Wrap_b24ad967ae66587ba612c3f37635bddb const volatile * get_pointer<autowig::Wrap_b24ad967ae66587ba612c3f37635bddb const volatile >(autowig::Wrap_b24ad967ae66587ba612c3f37635bddb const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b24ad967ae66587ba612c3f37635bddb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_c6edfe67859d5de998406b4a1499e3b1)() const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::get_nb_states;
    struct ::statiskit::MultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_6350a9a93ff952c1b820b26ed63c04fc)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_aa55c43f01ef52f5ba9860c09e507b24)(::statiskit::Index const &, struct ::statiskit::MultivariateDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_5fee0b04790a50059bf2188ba003d545)() const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_6d05ca4966d45471bdddd95a3e918b58)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_2616482a64eb565298d5fdb46bb49adc)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_724063f531c95b1ba918babb9d1aa3bb)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_4024d714f8fb52dd94078c2bfa86c79f)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_785f1ace27045787a383d04d4f9f1768)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_ca4d594d4b315670963fd0d25021da4e)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::uncertainty;
    boost::python::class_< autowig::Wrap_b24ad967ae66587ba612c3f37635bddb, autowig::Held< autowig::Wrap_b24ad967ae66587ba612c3f37635bddb >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_b24ad967ae66587ba612c3f37635bddb("_MixtureDistribution_b24ad967ae66587ba612c3f37635bddb", "", boost::python::no_init);
    class_b24ad967ae66587ba612c3f37635bddb.def("get_nb_states", method_pointer_c6edfe67859d5de998406b4a1499e3b1, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("get_observation", method_pointer_6350a9a93ff952c1b820b26ed63c04fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b24ad967ae66587ba612c3f37635bddb.def("set_observation", method_pointer_aa55c43f01ef52f5ba9860c09e507b24, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("get_pi", method_pointer_5fee0b04790a50059bf2188ba003d545, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b24ad967ae66587ba612c3f37635bddb.def("set_pi", method_pointer_6d05ca4966d45471bdddd95a3e918b58, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("posterior", method_pointer_2616482a64eb565298d5fdb46bb49adc, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("assignment", method_pointer_724063f531c95b1ba918babb9d1aa3bb, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("assignment", method_pointer_4024d714f8fb52dd94078c2bfa86c79f, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("uncertainty", method_pointer_785f1ace27045787a383d04d4f9f1768, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("uncertainty", method_pointer_ca4d594d4b315670963fd0d25021da4e, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b24ad967ae66587ba612c3f37635bddb >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
    }

}