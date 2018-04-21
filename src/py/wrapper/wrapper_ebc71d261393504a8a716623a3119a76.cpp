#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MixtureSingularDistribution const volatile * get_pointer<struct ::statiskit::MixtureSingularDistribution const volatile >(struct ::statiskit::MixtureSingularDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ebc71d261393504a8a716623a3119a76()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MixtureSingularDistribution, autowig::Held< struct ::statiskit::MixtureSingularDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > > > class_ebc71d261393504a8a716623a3119a76("MixtureSingularDistribution", "", boost::python::no_init);
    class_ebc71d261393504a8a716623a3119a76.def(boost::python::init< class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_ebc71d261393504a8a716623a3119a76.def(boost::python::init< struct ::statiskit::MixtureSingularDistribution const & >(""));

    if(autowig::Held< struct ::statiskit::MixtureSingularDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MixtureSingularDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > >::Type >();
    }

}