#include "_core.h"


void wrapper_51ea28dd67c25a1d9fd728c9c81fc5d1(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_51ea28dd67c25a1d9fd728c9c81fc5d1(module, "criterion_type");
    enum_51ea28dd67c25a1d9fd728c9c81fc5d1.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_51ea28dd67c25a1d9fd728c9c81fc5d1.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_51ea28dd67c25a1d9fd728c9c81fc5d1.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_51ea28dd67c25a1d9fd728c9c81fc5d1.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_51ea28dd67c25a1d9fd728c9c81fc5d1.export_values();

}