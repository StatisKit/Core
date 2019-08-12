#include "_core.h"


void wrapper_75ba8e402aa85a62a96976ab7e3073c3(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_75ba8e402aa85a62a96976ab7e3073c3(module, "criterion_type");
    enum_75ba8e402aa85a62a96976ab7e3073c3.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_75ba8e402aa85a62a96976ab7e3073c3.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_75ba8e402aa85a62a96976ab7e3073c3.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_75ba8e402aa85a62a96976ab7e3073c3.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_75ba8e402aa85a62a96976ab7e3073c3.export_values();

}