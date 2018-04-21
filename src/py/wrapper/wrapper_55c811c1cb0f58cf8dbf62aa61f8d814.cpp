#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultinormalDistribution const volatile * get_pointer<class ::statiskit::MultinormalDistribution const volatile >(class ::statiskit::MultinormalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_55c811c1cb0f58cf8dbf62aa61f8d814()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultinormalDistribution::*method_pointer_c8bbfad5ecf85392beceef1fb0fb5eb8)() const = &::statiskit::MultinormalDistribution::get_mu;
    void  (::statiskit::MultinormalDistribution::*method_pointer_6d6c50ecfa27555b804892649b6f0ded)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MultinormalDistribution::set_mu;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::MultinormalDistribution::*method_pointer_1a4f03987a6454788914ad54e5b6e0dc)() const = &::statiskit::MultinormalDistribution::get_sigma;
    void  (::statiskit::MultinormalDistribution::*method_pointer_78836ce44b7f59dba64fdc7318ddb554)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::MultinormalDistribution::set_sigma;
    boost::python::class_< class ::statiskit::MultinormalDistribution, autowig::Held< class ::statiskit::MultinormalDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::MultinormalDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > > class_55c811c1cb0f58cf8dbf62aa61f8d814("MultinormalDistribution", "", boost::python::no_init);
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def(boost::python::init< class ::statiskit::MultinormalDistribution const & >(""));
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("get_mu", method_pointer_c8bbfad5ecf85392beceef1fb0fb5eb8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("set_mu", method_pointer_6d6c50ecfa27555b804892649b6f0ded, "");
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("get_sigma", method_pointer_1a4f03987a6454788914ad54e5b6e0dc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_55c811c1cb0f58cf8dbf62aa61f8d814.def("set_sigma", method_pointer_78836ce44b7f59dba64fdc7318ddb554, "");

    if(autowig::Held< class ::statiskit::MultinormalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultinormalDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::MultinormalDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}