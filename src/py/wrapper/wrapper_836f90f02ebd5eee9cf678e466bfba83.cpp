#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::GumbelMinDistribution const volatile * get_pointer<class ::statiskit::GumbelMinDistribution const volatile >(class ::statiskit::GumbelMinDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_836f90f02ebd5eee9cf678e466bfba83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::GumbelMinDistribution::*method_pointer_cdf29aaffbbe510897dab33d10e8b014)() const = &::statiskit::GumbelMinDistribution::get_mu;
    void  (::statiskit::GumbelMinDistribution::*method_pointer_1f83644fe4ea54158b61ff4a154ebb0e)(double const &) = &::statiskit::GumbelMinDistribution::set_mu;
    double const & (::statiskit::GumbelMinDistribution::*method_pointer_8c5638b106ca528c9517dd2f55df1032)() const = &::statiskit::GumbelMinDistribution::get_sigma;
    void  (::statiskit::GumbelMinDistribution::*method_pointer_a5c2d94b61e45509b2bd9bd7fbc42a2d)(double const &) = &::statiskit::GumbelMinDistribution::set_sigma;
    boost::python::class_< class ::statiskit::GumbelMinDistribution, autowig::Held< class ::statiskit::GumbelMinDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GumbelMinDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_836f90f02ebd5eee9cf678e466bfba83("GumbelMinDistribution", "This class GumbelMinDistribution represents a Gumbel distribution\n(minimum).\n\nA random component :math:`X` is said to folloow a Gumbel distribution\n(minimum) if :math:`Y=-X` follows a Gumbel distribution (maximum). The\nGumbel distribution (minimum) is an univariate continuous distribution.\nIt is also called extreme value type I distribution (minimum). The\nsupport is the set of real values :math:`\\mathbb{R}`. @see\nstatiskit::GumbelMaxDistribution\n\n", boost::python::no_init);
    class_836f90f02ebd5eee9cf678e466bfba83.def(boost::python::init<  >(""));
    class_836f90f02ebd5eee9cf678e466bfba83.def(boost::python::init< double const &, double const & >(""));
    class_836f90f02ebd5eee9cf678e466bfba83.def(boost::python::init< class ::statiskit::GumbelMinDistribution const & >(""));
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_mu", method_pointer_cdf29aaffbbe510897dab33d10e8b014, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("set_mu", method_pointer_1f83644fe4ea54158b61ff4a154ebb0e, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_sigma", method_pointer_8c5638b106ca528c9517dd2f55df1032, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("set_sigma", method_pointer_a5c2d94b61e45509b2bd9bd7fbc42a2d, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::GumbelMinDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GumbelMinDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GumbelMinDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}