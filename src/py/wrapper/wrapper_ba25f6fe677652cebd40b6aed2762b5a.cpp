#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultinomialSingularDistribution const volatile * get_pointer<class ::statiskit::MultinomialSingularDistribution const volatile >(class ::statiskit::MultinomialSingularDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ba25f6fe677652cebd40b6aed2762b5a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultinomialSingularDistribution::*method_pointer_0eb2e57f88f7522cbd8ce57df2a18a31)() const = &::statiskit::MultinomialSingularDistribution::get_pi;
    void  (::statiskit::MultinomialSingularDistribution::*method_pointer_9fb5327edbc756a6979e8572e7fc6e90)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MultinomialSingularDistribution::set_pi;
    boost::python::class_< class ::statiskit::MultinomialSingularDistribution, autowig::Held< class ::statiskit::MultinomialSingularDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > > > class_ba25f6fe677652cebd40b6aed2762b5a("MultinomialSingularDistribution", "", boost::python::no_init);
    class_ba25f6fe677652cebd40b6aed2762b5a.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_ba25f6fe677652cebd40b6aed2762b5a.def(boost::python::init< class ::statiskit::MultinomialSingularDistribution const & >(""));
    class_ba25f6fe677652cebd40b6aed2762b5a.def("get_pi", method_pointer_0eb2e57f88f7522cbd8ce57df2a18a31, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def("set_pi", method_pointer_9fb5327edbc756a6979e8572e7fc6e90, "");

    if(autowig::Held< class ::statiskit::MultinomialSingularDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultinomialSingularDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type >();
    }

}