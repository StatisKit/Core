#include "_core.h"


void wrapper_4ec7ef936ad45be98bd61fcd15540f56(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_4ec7ef936ad45be98bd61fcd15540f56(module, "criterion_type");
    enum_4ec7ef936ad45be98bd61fcd15540f56.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_4ec7ef936ad45be98bd61fcd15540f56.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_4ec7ef936ad45be98bd61fcd15540f56.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_4ec7ef936ad45be98bd61fcd15540f56.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_4ec7ef936ad45be98bd61fcd15540f56.export_values();

}