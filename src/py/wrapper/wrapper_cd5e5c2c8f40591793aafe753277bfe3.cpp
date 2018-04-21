#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::DirichletDistribution const volatile * get_pointer<class ::statiskit::DirichletDistribution const volatile >(class ::statiskit::DirichletDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cd5e5c2c8f40591793aafe753277bfe3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::DirichletDistribution::*method_pointer_8b3cd98182555b0ba6f7e67b9468a0f8)() const = &::statiskit::DirichletDistribution::get_alpha;
    void  (::statiskit::DirichletDistribution::*method_pointer_3aa0b41c15235d3eacbc5a2da94febc1)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::DirichletDistribution::set_alpha;
    boost::python::class_< class ::statiskit::DirichletDistribution, autowig::Held< class ::statiskit::DirichletDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > > class_cd5e5c2c8f40591793aafe753277bfe3("DirichletDistribution", "", boost::python::no_init);
    class_cd5e5c2c8f40591793aafe753277bfe3.def(boost::python::init< ::statiskit::Index const & >(""));
    class_cd5e5c2c8f40591793aafe753277bfe3.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_cd5e5c2c8f40591793aafe753277bfe3.def(boost::python::init< class ::statiskit::DirichletDistribution const & >(""));
    class_cd5e5c2c8f40591793aafe753277bfe3.def("get_alpha", method_pointer_8b3cd98182555b0ba6f7e67b9468a0f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def("set_alpha", method_pointer_3aa0b41c15235d3eacbc5a2da94febc1, "");

    if(autowig::Held< class ::statiskit::DirichletDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::DirichletDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}