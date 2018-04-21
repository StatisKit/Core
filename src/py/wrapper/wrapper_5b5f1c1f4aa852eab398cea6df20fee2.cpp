#include "_core.h"



namespace autowig
{
    class Wrap_5b5f1c1f4aa852eab398cea6df20fee2 : public ::statiskit::WeightedData< ::statiskit::MultivariateData >, public boost::python::wrapper< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
                        
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
    template <> autowig::Wrap_5b5f1c1f4aa852eab398cea6df20fee2 const volatile * get_pointer<autowig::Wrap_5b5f1c1f4aa852eab398cea6df20fee2 const volatile >(autowig::Wrap_5b5f1c1f4aa852eab398cea6df20fee2 const volatile *c) { return c; }
    template <> class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > const volatile * get_pointer<class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > const volatile >(class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5b5f1c1f4aa852eab398cea6df20fee2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_24860636c996556c8cece089c4290285)() const = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_data;
    ::statiskit::Index  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_2ce657ba87ce5daf9e0bc47c5dc1432e)() const = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_nb_weights;
    double  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_7da327a8236953bdbdbe7d839fab134b)(::statiskit::Index const &) const = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_weight;
    void  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_cbfdf5edbda858af9e4598c8ab86074d)(::statiskit::Index const &, double const &) = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::set_weight;
    boost::python::class_< autowig::Wrap_5b5f1c1f4aa852eab398cea6df20fee2, autowig::Held< autowig::Wrap_5b5f1c1f4aa852eab398cea6df20fee2 >::Type, boost::python::bases< struct ::statiskit::MultivariateData >, boost::noncopyable > class_5b5f1c1f4aa852eab398cea6df20fee2("_WeightedData_5b5f1c1f4aa852eab398cea6df20fee2", "", boost::python::no_init);
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_data", method_pointer_24860636c996556c8cece089c4290285, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_nb_weights", method_pointer_2ce657ba87ce5daf9e0bc47c5dc1432e, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_weight", method_pointer_7da327a8236953bdbdbe7d839fab134b, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("set_weight", method_pointer_cbfdf5edbda858af9e4598c8ab86074d, "");

    if(autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5b5f1c1f4aa852eab398cea6df20fee2 >::Type, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::Type, autowig::Held< struct ::statiskit::MultivariateData >::Type >();
    }

}