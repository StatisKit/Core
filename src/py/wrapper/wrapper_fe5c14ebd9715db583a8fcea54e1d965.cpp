#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::WeightedMultivariateData const volatile * get_pointer<class ::statiskit::WeightedMultivariateData const volatile >(class ::statiskit::WeightedMultivariateData const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fe5c14ebd9715db583a8fcea54e1d965()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::WeightedMultivariateData, autowig::Held< class ::statiskit::WeightedMultivariateData >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > > > class_fe5c14ebd9715db583a8fcea54e1d965("WeightedMultivariateData", "", boost::python::no_init);
    class_fe5c14ebd9715db583a8fcea54e1d965.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_fe5c14ebd9715db583a8fcea54e1d965.def(boost::python::init< class ::statiskit::WeightedMultivariateData const & >(""));

    if(autowig::Held< class ::statiskit::WeightedMultivariateData >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedMultivariateData >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >::Type >();
    }

}