#include "_core.h"


void wrapper_44dd5352a62558a2b747205bcccc2c85(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_44dd5352a62558a2b747205bcccc2c85(module, "criterion_type");
    enum_44dd5352a62558a2b747205bcccc2c85.value("AIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_44dd5352a62558a2b747205bcccc2c85.value("AI_CC", ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_44dd5352a62558a2b747205bcccc2c85.value("BIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_44dd5352a62558a2b747205bcccc2c85.value("HQIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_44dd5352a62558a2b747205bcccc2c85.export_values();

}