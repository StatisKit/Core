#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_86ceaf8153c052c9b470c7e534cdb934()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, boost::python::bases< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > > class_86ceaf8153c052c9b470c7e534cdb934("_PolymorphicCopy_86ceaf8153c052c9b470c7e534cdb934", "", boost::python::no_init);
    class_86ceaf8153c052c9b470c7e534cdb934.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::Type >();
    }

}