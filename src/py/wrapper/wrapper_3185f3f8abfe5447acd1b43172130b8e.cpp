#include "_core.h"



namespace autowig
{
    class Wrap_3185f3f8abfe5447acd1b43172130b8e : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  extract(::statiskit::Indices const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  extract(::statiskit::Index const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_3185f3f8abfe5447acd1b43172130b8e const volatile * get_pointer<autowig::Wrap_3185f3f8abfe5447acd1b43172130b8e const volatile >(autowig::Wrap_3185f3f8abfe5447acd1b43172130b8e const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3185f3f8abfe5447acd1b43172130b8e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_3185f3f8abfe5447acd1b43172130b8e, autowig::Held< autowig::Wrap_3185f3f8abfe5447acd1b43172130b8e >::Type, boost::python::bases< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >, boost::noncopyable > class_3185f3f8abfe5447acd1b43172130b8e("_PolymorphicCopy_3185f3f8abfe5447acd1b43172130b8e", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_3185f3f8abfe5447acd1b43172130b8e >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >::Type, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::Type >();
    }

}