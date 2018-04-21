#include "_core.h"



namespace autowig
{
    class Wrap_64ae6eddce405116ba534ed722881799 : public ::statiskit::WeightedData< ::statiskit::UnivariateData >, public boost::python::wrapper< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("copy")();
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
    template <> autowig::Wrap_64ae6eddce405116ba534ed722881799 const volatile * get_pointer<autowig::Wrap_64ae6eddce405116ba534ed722881799 const volatile >(autowig::Wrap_64ae6eddce405116ba534ed722881799 const volatile *c) { return c; }
    template <> class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > const volatile * get_pointer<class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > const volatile >(class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_64ae6eddce405116ba534ed722881799()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateData const * (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_92c5532a3e0f5f3da7c680e762f4907d)() const = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_data;
    ::statiskit::Index  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_fffe7b48b166550baaca4c08c07a0847)() const = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_nb_weights;
    double  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_d0e260fcdc205b2eba4822c5ec5880d0)(::statiskit::Index const &) const = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_weight;
    void  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_2d5ccb9b59a85039917dbc4ac3b10b92)(::statiskit::Index const &, double const &) = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::set_weight;
    boost::python::class_< autowig::Wrap_64ae6eddce405116ba534ed722881799, autowig::Held< autowig::Wrap_64ae6eddce405116ba534ed722881799 >::Type, boost::python::bases< struct ::statiskit::UnivariateData >, boost::noncopyable > class_64ae6eddce405116ba534ed722881799("_WeightedData_64ae6eddce405116ba534ed722881799", "", boost::python::no_init);
    class_64ae6eddce405116ba534ed722881799.def("get_data", method_pointer_92c5532a3e0f5f3da7c680e762f4907d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_64ae6eddce405116ba534ed722881799.def("get_nb_weights", method_pointer_fffe7b48b166550baaca4c08c07a0847, "");
    class_64ae6eddce405116ba534ed722881799.def("get_weight", method_pointer_d0e260fcdc205b2eba4822c5ec5880d0, "");
    class_64ae6eddce405116ba534ed722881799.def("set_weight", method_pointer_2d5ccb9b59a85039917dbc4ac3b10b92, "");

    if(autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_64ae6eddce405116ba534ed722881799 >::Type, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::Type, autowig::Held< struct ::statiskit::UnivariateData >::Type >();
    }

}