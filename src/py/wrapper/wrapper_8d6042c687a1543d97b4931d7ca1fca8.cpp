#include "_core.h"



namespace autowig
{
    class Wrap_8d6042c687a1543d97b4931d7ca1fca8 : public ::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >
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
    template <> autowig::Wrap_8d6042c687a1543d97b4931d7ca1fca8 const volatile * get_pointer<autowig::Wrap_8d6042c687a1543d97b4931d7ca1fca8 const volatile >(autowig::Wrap_8d6042c687a1543d97b4931d7ca1fca8 const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8d6042c687a1543d97b4931d7ca1fca8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_a84f48080c9e51648e06a3d2a7efeaed)() const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_nb_states;
    struct ::statiskit::DiscreteMultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_466bff1d08ef51beacbfda3368e92ee8)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_d15c4654ed8057b88112aca660e855c0)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_2b49ca2193805fee9ca87248802050e0)() const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_07e0018ec5b751b7bba04dbd50815753)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_2cd6c078416e568799bab23dfb509e2f)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_b228d8d88e9b5bb4b32da69c87abc7dc)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_f9d07f1dafa95a2582d11d0afb166d3a)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_5ec1f291269a5a61a3a8ad54a8af8fad)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_ad794feca936536a9d56d44c7b798eb2)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::uncertainty;
    boost::python::class_< autowig::Wrap_8d6042c687a1543d97b4931d7ca1fca8, autowig::Held< autowig::Wrap_8d6042c687a1543d97b4931d7ca1fca8 >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistribution >, boost::noncopyable > class_8d6042c687a1543d97b4931d7ca1fca8("_MixtureDistribution_8d6042c687a1543d97b4931d7ca1fca8", "", boost::python::no_init);
    class_8d6042c687a1543d97b4931d7ca1fca8.def("get_nb_states", method_pointer_a84f48080c9e51648e06a3d2a7efeaed, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("get_observation", method_pointer_466bff1d08ef51beacbfda3368e92ee8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("set_observation", method_pointer_d15c4654ed8057b88112aca660e855c0, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("get_pi", method_pointer_2b49ca2193805fee9ca87248802050e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("set_pi", method_pointer_07e0018ec5b751b7bba04dbd50815753, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("posterior", method_pointer_2cd6c078416e568799bab23dfb509e2f, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("assignment", method_pointer_b228d8d88e9b5bb4b32da69c87abc7dc, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("assignment", method_pointer_f9d07f1dafa95a2582d11d0afb166d3a, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("uncertainty", method_pointer_5ec1f291269a5a61a3a8ad54a8af8fad, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("uncertainty", method_pointer_ad794feca936536a9d56d44c7b798eb2, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_8d6042c687a1543d97b4931d7ca1fca8 >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type >();
    }

}