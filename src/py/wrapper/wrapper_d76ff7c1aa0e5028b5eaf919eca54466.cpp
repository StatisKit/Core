#include "_core.h"


void wrapper_d76ff7c1aa0e5028b5eaf919eca54466(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_d76ff7c1aa0e5028b5eaf919eca54466(module, "criterion_type");
    enum_d76ff7c1aa0e5028b5eaf919eca54466.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_d76ff7c1aa0e5028b5eaf919eca54466.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_d76ff7c1aa0e5028b5eaf919eca54466.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_d76ff7c1aa0e5028b5eaf919eca54466.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_d76ff7c1aa0e5028b5eaf919eca54466.export_values();

}