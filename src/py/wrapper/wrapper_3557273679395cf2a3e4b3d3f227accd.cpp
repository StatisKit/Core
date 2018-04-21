#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LaplaceDistribution const volatile * get_pointer<class ::statiskit::LaplaceDistribution const volatile >(class ::statiskit::LaplaceDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3557273679395cf2a3e4b3d3f227accd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::LaplaceDistribution::*method_pointer_4d398e06491252e28abd7e36a780974f)() const = &::statiskit::LaplaceDistribution::get_mu;
    void  (::statiskit::LaplaceDistribution::*method_pointer_bfd7be501f8359d4bae2bdc5151055aa)(double const &) = &::statiskit::LaplaceDistribution::set_mu;
    double const & (::statiskit::LaplaceDistribution::*method_pointer_fd899166e96755e5aea2da76a77e8757)() const = &::statiskit::LaplaceDistribution::get_sigma;
    void  (::statiskit::LaplaceDistribution::*method_pointer_c648a51d4a4c52e4b0c556a98d28423f)(double const &) = &::statiskit::LaplaceDistribution::set_sigma;
    boost::python::class_< class ::statiskit::LaplaceDistribution, autowig::Held< class ::statiskit::LaplaceDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::LaplaceDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_3557273679395cf2a3e4b3d3f227accd("LaplaceDistribution", "This class LaplaceDistribution represents a `Laplace\ndistribution <https://en.wikipedia.org/wiki/Laplace_distribution>`__.\n\nThe Laplace distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_3557273679395cf2a3e4b3d3f227accd.def(boost::python::init<  >(""));
    class_3557273679395cf2a3e4b3d3f227accd.def(boost::python::init< double const &, double const & >(""));
    class_3557273679395cf2a3e4b3d3f227accd.def(boost::python::init< class ::statiskit::LaplaceDistribution const & >(""));
    class_3557273679395cf2a3e4b3d3f227accd.def("get_mu", method_pointer_4d398e06491252e28abd7e36a780974f, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("set_mu", method_pointer_bfd7be501f8359d4bae2bdc5151055aa, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("get_sigma", method_pointer_fd899166e96755e5aea2da76a77e8757, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("set_sigma", method_pointer_c648a51d4a4c52e4b0c556a98d28423f, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::LaplaceDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LaplaceDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::LaplaceDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}