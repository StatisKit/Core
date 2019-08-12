#include "_core.h"


void wrapper_7a957a5572455292b1ecc19f2daf800e(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_7a957a5572455292b1ecc19f2daf800e(module, "criterion_type");
    enum_7a957a5572455292b1ecc19f2daf800e.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_7a957a5572455292b1ecc19f2daf800e.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_7a957a5572455292b1ecc19f2daf800e.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_7a957a5572455292b1ecc19f2daf800e.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_7a957a5572455292b1ecc19f2daf800e.export_values();

}