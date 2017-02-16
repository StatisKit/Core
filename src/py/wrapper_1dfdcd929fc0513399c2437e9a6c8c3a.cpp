#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator const volatile * get_pointer<class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator const volatile >(class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_1dfdcd929fc0513399c2437e9a6c8c3a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_cc9b200ad98c51108cfb0b6bf6bf2bd0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_binomial_distribution_mm_estimation");
    boost::python::object module_cc9b200ad98c51108cfb0b6bf6bf2bd0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cc9b200ad98c51108cfb0b6bf6bf2bd0.c_str()))));
    boost::python::scope().attr("_negative_binomial_distribution_mm_estimation") = module_cc9b200ad98c51108cfb0b6bf6bf2bd0;
    boost::python::scope scope_cc9b200ad98c51108cfb0b6bf6bf2bd0 = module_cc9b200ad98c51108cfb0b6bf6bf2bd0;
    boost::python::class_< class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator, autowig::Held< class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator >::Type > class_1dfdcd929fc0513399c2437e9a6c8c3a("Estimator", "This class NegativeBinomialDistribution represents a Maximum Likelihood\nEstimator (MLE) of negative binomial distribution parameters\n:math:`\\kappa` and :math:`\\pi`.\n\nThis MLE prededure is described in :cite:`DBB13.` Note\nthat in their paper, the negative binomial distribution probability\ndistribution function is given by\n\n.. math::\n\n\n   P\\left(X = x\\right) = \\frac{\\Gamma\\left(x+\\kappa\\right)}{x! \\Gamma\\left(\\kappa\\right)} \\left(\\frac{\\mu}{\\mu + \\kappa}\\right)^{x} \\left(\\frac{\\kappa}{\\kappa + \\mu}\\right)^{\\kappa}.\n\n This is a reparametrization of the negative binomial distribution\ndescribed by parameters :math:`\\kappa` and :math:`\\pi` with $$\n\n.. seealso::\n\n    :py:class:`statiskit.core.statiskit.NegativeBinomialDistribution`.\n\n", boost::python::no_init);

}