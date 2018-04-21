#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator const volatile * get_pointer<class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator const volatile >(class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6690633b82205104834e2688e6549e65()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_64ae6eddce405116ba534ed722881799 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__weighted_data_64ae6eddce405116ba534ed722881799");
    boost::python::object module_64ae6eddce405116ba534ed722881799(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_64ae6eddce405116ba534ed722881799.c_str()))));
    boost::python::scope().attr("__weighted_data_64ae6eddce405116ba534ed722881799") = module_64ae6eddce405116ba534ed722881799;
    boost::python::scope scope_64ae6eddce405116ba534ed722881799 = module_64ae6eddce405116ba534ed722881799;
    void  (::statiskit::WeightedData< ::statiskit::UnivariateData >::Generator::*method_pointer_846983cd69f05156a63294108734944e)(double const &) = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator::weight;
    boost::python::class_< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator >::Type, boost::python::bases< struct ::statiskit::UnivariateData::Generator > > class_6690633b82205104834e2688e6549e65("Generator", "", boost::python::no_init);
    class_6690633b82205104834e2688e6549e65.def(boost::python::init< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > * >(""));
    class_6690633b82205104834e2688e6549e65.def("weight", method_pointer_846983cd69f05156a63294108734944e, "");

    if(autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator >::Type, autowig::Held< struct ::statiskit::UnivariateData::Generator >::Type >();
    }

}