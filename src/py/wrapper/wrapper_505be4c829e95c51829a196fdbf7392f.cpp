#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::GammaDistribution const volatile * get_pointer<class ::statiskit::GammaDistribution const volatile >(class ::statiskit::GammaDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_505be4c829e95c51829a196fdbf7392f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::GammaDistribution::*method_pointer_2d6e78ac029c5dbaba11f4d47d3f8f50)() const = &::statiskit::GammaDistribution::get_alpha;
    void  (::statiskit::GammaDistribution::*method_pointer_b60ed55763e75148abec99d60bc157d1)(double const &) = &::statiskit::GammaDistribution::set_alpha;
    double const & (::statiskit::GammaDistribution::*method_pointer_97c06cfdcaa253f7902ee5da0de74e99)() const = &::statiskit::GammaDistribution::get_beta;
    void  (::statiskit::GammaDistribution::*method_pointer_3fc04c0502de56399edb37c532d78ee0)(double const &) = &::statiskit::GammaDistribution::set_beta;
    boost::python::class_< class ::statiskit::GammaDistribution, autowig::Held< class ::statiskit::GammaDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GammaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_505be4c829e95c51829a196fdbf7392f("GammaDistribution", "This class represents a Gamma distribution.\n\nThe Gamma distribution is an univariate continuous distribution. The\nsupport is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n", boost::python::no_init);
    class_505be4c829e95c51829a196fdbf7392f.def(boost::python::init<  >(""));
    class_505be4c829e95c51829a196fdbf7392f.def(boost::python::init< double const &, double const & >(""));
    class_505be4c829e95c51829a196fdbf7392f.def(boost::python::init< class ::statiskit::GammaDistribution const & >(""));
    class_505be4c829e95c51829a196fdbf7392f.def("get_alpha", method_pointer_2d6e78ac029c5dbaba11f4d47d3f8f50, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the shape parameter :math:`\\alpha`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("set_alpha", method_pointer_b60ed55763e75148abec99d60bc157d1, "Set the value of the shape parameter :math:`\\alpha`.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("get_beta", method_pointer_97c06cfdcaa253f7902ee5da0de74e99, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the rate parameter :math:`\\beta`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("set_beta", method_pointer_3fc04c0502de56399edb37c532d78ee0, "Set the value of the rate parameter :math:`\\beta`.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::GammaDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GammaDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GammaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}