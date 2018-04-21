#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::GeometricDistribution const volatile * get_pointer<class ::statiskit::GeometricDistribution const volatile >(class ::statiskit::GeometricDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_39eaaa358ce655d08615c947c949eb83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::GeometricDistribution::*method_pointer_d37fe93f16df5735affce3768ab15f63)() const = &::statiskit::GeometricDistribution::get_pi;
    void  (::statiskit::GeometricDistribution::*method_pointer_1175d83596a053eca629694bc51b2278)(double const &) = &::statiskit::GeometricDistribution::set_pi;
    boost::python::class_< class ::statiskit::GeometricDistribution, autowig::Held< class ::statiskit::GeometricDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > > class_39eaaa358ce655d08615c947c949eb83("GeometricDistribution", "", boost::python::no_init);
    class_39eaaa358ce655d08615c947c949eb83.def(boost::python::init<  >(""));
    class_39eaaa358ce655d08615c947c949eb83.def(boost::python::init< double const & >(""));
    class_39eaaa358ce655d08615c947c949eb83.def(boost::python::init< class ::statiskit::GeometricDistribution const & >(""));
    class_39eaaa358ce655d08615c947c949eb83.def("get_pi", method_pointer_d37fe93f16df5735affce3768ab15f63, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of pi\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_39eaaa358ce655d08615c947c949eb83.def("set_pi", method_pointer_1175d83596a053eca629694bc51b2278, "Set the value of pi\n\n:Parameter:\n    `pi` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::GeometricDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GeometricDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}