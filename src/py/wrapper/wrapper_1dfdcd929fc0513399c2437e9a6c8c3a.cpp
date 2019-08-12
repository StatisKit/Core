#include "_core.h"

struct ::statiskit::UnivariateLocationEstimation::Estimator * (::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::*method_pointer_f1ef2e72f4535e7994e96e98baeb7891)()= &::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::get_location;
void  (::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::*method_pointer_1b08816825bc5b5a9fd84c392a21a890)(struct ::statiskit::UnivariateLocationEstimation::Estimator const &)= &::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::set_location;
struct ::statiskit::UnivariateDispersionEstimation::Estimator * (::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::*method_pointer_fd5d3847049c5ac8bf8c437f42c6942c)()= &::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::get_dispersion;
void  (::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::*method_pointer_89108ff7f3cc5207ba03d6f67201946c)(struct ::statiskit::UnivariateDispersionEstimation::Estimator const &)= &::statiskit::NegativeBinomialDistributionMMEstimation::Estimator::set_dispersion;

namespace autowig {
}

void wrapper_1dfdcd929fc0513399c2437e9a6c8c3a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator, autowig::HolderType< class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator, struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator > > class_1dfdcd929fc0513399c2437e9a6c8c3a(module, "Estimator", "This class NegativeBinomialDistribution represents a Maximum Likelihood\nEstimator (MLE) of negative binomial distribution parameters\n:math:`\\kappa` and :math:`\\pi`.\n\nThis MLE prededure is described in :cite:`DBB13.` Note\nthat in their paper, the negative binomial distribution probability\ndistribution function is given by\n\n.. math::\n\n\n   P\\left(X = x\\right) = \\frac{\\Gamma\\left(x+\\kappa\\right)}{x! \\Gamma\\left(\\kappa\\right)} \\left(\\frac{\\mu}{\\mu + \\kappa}\\right)^{x} \\left(\\frac{\\kappa}{\\kappa + \\mu}\\right)^{\\kappa}.\n\n This is a reparametrization of the negative binomial distribution\ndescribed by parameters :math:`\\kappa` and :math:`\\pi` with $$\n\n.. seealso::\n\n    :cpp:class:`::statiskit::NegativeBinomialDistribution`.\n\n");
    class_1dfdcd929fc0513399c2437e9a6c8c3a.def(pybind11::init<  >());
    class_1dfdcd929fc0513399c2437e9a6c8c3a.def(pybind11::init< class ::statiskit::NegativeBinomialDistributionMMEstimation::Estimator const & >());
    class_1dfdcd929fc0513399c2437e9a6c8c3a.def("get_location", method_pointer_f1ef2e72f4535e7994e96e98baeb7891, pybind11::return_value_policy::reference_internal, "");
    class_1dfdcd929fc0513399c2437e9a6c8c3a.def("set_location", method_pointer_1b08816825bc5b5a9fd84c392a21a890, "");
    class_1dfdcd929fc0513399c2437e9a6c8c3a.def("get_dispersion", method_pointer_fd5d3847049c5ac8bf8c437f42c6942c, pybind11::return_value_policy::reference_internal, "");
    class_1dfdcd929fc0513399c2437e9a6c8c3a.def("set_dispersion", method_pointer_89108ff7f3cc5207ba03d6f67201946c, "");

}