#include "_core.h"


void wrapper_e049e06f4450537e811c2c21e309aa43(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_e049e06f4450537e811c2c21e309aa43(module, "criterion_type");
    enum_e049e06f4450537e811c2c21e309aa43.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_e049e06f4450537e811c2c21e309aa43.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_e049e06f4450537e811c2c21e309aa43.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_e049e06f4450537e811c2c21e309aa43.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_e049e06f4450537e811c2c21e309aa43.export_values();

}