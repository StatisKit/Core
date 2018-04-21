#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LogarithmicDistribution const volatile * get_pointer<class ::statiskit::LogarithmicDistribution const volatile >(class ::statiskit::LogarithmicDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c2568ff48c245dbe8395ac41d83bc8f8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::LogarithmicDistribution::*method_pointer_d5b6531d476959c49b20edc5b912c63a)() const = &::statiskit::LogarithmicDistribution::get_theta;
    void  (::statiskit::LogarithmicDistribution::*method_pointer_f4cda2ac3a3b5e9f861b3a906b5ee5d6)(double const &) = &::statiskit::LogarithmicDistribution::set_theta;
    boost::python::class_< class ::statiskit::LogarithmicDistribution, autowig::Held< class ::statiskit::LogarithmicDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > > class_c2568ff48c245dbe8395ac41d83bc8f8("LogarithmicDistribution", "", boost::python::no_init);
    class_c2568ff48c245dbe8395ac41d83bc8f8.def(boost::python::init<  >(""));
    class_c2568ff48c245dbe8395ac41d83bc8f8.def(boost::python::init< double const & >(""));
    class_c2568ff48c245dbe8395ac41d83bc8f8.def(boost::python::init< class ::statiskit::LogarithmicDistribution const & >(""));
    class_c2568ff48c245dbe8395ac41d83bc8f8.def("get_theta", method_pointer_d5b6531d476959c49b20edc5b912c63a, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of theta\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_c2568ff48c245dbe8395ac41d83bc8f8.def("set_theta", method_pointer_f4cda2ac3a3b5e9f861b3a906b5ee5d6, "Set the value of theta\n\n:Parameter:\n    `theta` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::LogarithmicDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LogarithmicDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}