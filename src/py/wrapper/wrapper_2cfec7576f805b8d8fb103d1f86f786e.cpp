#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NormalDistribution const volatile * get_pointer<class ::statiskit::NormalDistribution const volatile >(class ::statiskit::NormalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2cfec7576f805b8d8fb103d1f86f786e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::NormalDistribution::*method_pointer_412f22d12d8c5ecfb2e37a69d4aa4f05)() const = &::statiskit::NormalDistribution::get_mu;
    void  (::statiskit::NormalDistribution::*method_pointer_c770f1aeabd6538a97629064cf8bc270)(double const &) = &::statiskit::NormalDistribution::set_mu;
    double const & (::statiskit::NormalDistribution::*method_pointer_29e7dd42d9085b56954175dc8b9a994e)() const = &::statiskit::NormalDistribution::get_sigma;
    void  (::statiskit::NormalDistribution::*method_pointer_0ada355ca76458319515887abcd12ef1)(double const &) = &::statiskit::NormalDistribution::set_sigma;
    boost::python::class_< class ::statiskit::NormalDistribution, autowig::Held< class ::statiskit::NormalDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_2cfec7576f805b8d8fb103d1f86f786e("NormalDistribution", "This class NormalDistribution represents a `normal\ndistribution <https://en.wikipedia.org/wiki/Normal_distribution>`__.\n\nThe normal distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_2cfec7576f805b8d8fb103d1f86f786e.def(boost::python::init<  >(""));
    class_2cfec7576f805b8d8fb103d1f86f786e.def(boost::python::init< double const &, double const & >(""));
    class_2cfec7576f805b8d8fb103d1f86f786e.def(boost::python::init< class ::statiskit::NormalDistribution const & >(""));
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_mu", method_pointer_412f22d12d8c5ecfb2e37a69d4aa4f05, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("set_mu", method_pointer_c770f1aeabd6538a97629064cf8bc270, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_sigma", method_pointer_29e7dd42d9085b56954175dc8b9a994e, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("set_sigma", method_pointer_0ada355ca76458319515887abcd12ef1, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::NormalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NormalDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}