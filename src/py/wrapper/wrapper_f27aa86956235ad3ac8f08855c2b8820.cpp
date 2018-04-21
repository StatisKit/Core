#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SplittingDistribution const volatile * get_pointer<class ::statiskit::SplittingDistribution const volatile >(class ::statiskit::SplittingDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f27aa86956235ad3ac8f08855c2b8820()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::SplittingDistribution::*method_pointer_3d0a5e25401d5a02a6b475d9f5ce084d)() const = &::statiskit::SplittingDistribution::get_sum;
    void  (::statiskit::SplittingDistribution::*method_pointer_208168851a265e90878b4dbc88e72100)(struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::SplittingDistribution::set_sum;
    struct ::statiskit::SingularDistribution * (::statiskit::SplittingDistribution::*method_pointer_b11e42fb740c57c4b06ac9f5bc089afa)() const = &::statiskit::SplittingDistribution::get_singular;
    void  (::statiskit::SplittingDistribution::*method_pointer_a1fa1a240cbc549680a711d123c81f59)(struct ::statiskit::SingularDistribution const &) = &::statiskit::SplittingDistribution::set_singular;
    boost::python::class_< class ::statiskit::SplittingDistribution, autowig::Held< class ::statiskit::SplittingDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > > > class_f27aa86956235ad3ac8f08855c2b8820("SplittingDistribution", "", boost::python::no_init);
    class_f27aa86956235ad3ac8f08855c2b8820.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const &, struct ::statiskit::SingularDistribution const & >(""));
    class_f27aa86956235ad3ac8f08855c2b8820.def(boost::python::init< class ::statiskit::SplittingDistribution const & >(""));
    class_f27aa86956235ad3ac8f08855c2b8820.def("get_sum", method_pointer_3d0a5e25401d5a02a6b475d9f5ce084d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("set_sum", method_pointer_208168851a265e90878b4dbc88e72100, "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("get_singular", method_pointer_b11e42fb740c57c4b06ac9f5bc089afa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("set_singular", method_pointer_a1fa1a240cbc549680a711d123c81f59, "");

    if(autowig::Held< class ::statiskit::SplittingDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SplittingDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
    }

}