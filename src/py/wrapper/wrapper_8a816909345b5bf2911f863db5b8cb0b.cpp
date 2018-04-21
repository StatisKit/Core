#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator const volatile * get_pointer<class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator const volatile >(class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8a816909345b5bf2911f863db5b8cb0b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5b5f1c1f4aa852eab398cea6df20fee2 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__weighted_data_5b5f1c1f4aa852eab398cea6df20fee2");
    boost::python::object module_5b5f1c1f4aa852eab398cea6df20fee2(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5b5f1c1f4aa852eab398cea6df20fee2.c_str()))));
    boost::python::scope().attr("__weighted_data_5b5f1c1f4aa852eab398cea6df20fee2") = module_5b5f1c1f4aa852eab398cea6df20fee2;
    boost::python::scope scope_5b5f1c1f4aa852eab398cea6df20fee2 = module_5b5f1c1f4aa852eab398cea6df20fee2;
    void  (::statiskit::WeightedData< ::statiskit::MultivariateData >::Generator::*method_pointer_29ca89a65c145b51b49d5ff023beda12)(double const &) = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator::weight;
    boost::python::class_< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator >::Type, boost::python::bases< struct ::statiskit::MultivariateData::Generator > > class_8a816909345b5bf2911f863db5b8cb0b("Generator", "", boost::python::no_init);
    class_8a816909345b5bf2911f863db5b8cb0b.def(boost::python::init< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > * >(""));
    class_8a816909345b5bf2911f863db5b8cb0b.def("weight", method_pointer_29ca89a65c145b51b49d5ff023beda12, "");

    if(autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator >::Type, autowig::Held< struct ::statiskit::MultivariateData::Generator >::Type >();
    }

}