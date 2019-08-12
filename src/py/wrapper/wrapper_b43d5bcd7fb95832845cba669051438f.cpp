#include "_core.h"


void wrapper_b43d5bcd7fb95832845cba669051438f(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::criterion_type > enum_b43d5bcd7fb95832845cba669051438f(module, "criterion_type");
    enum_b43d5bcd7fb95832845cba669051438f.value("AIC", ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::AIC);
    enum_b43d5bcd7fb95832845cba669051438f.value("AI_CC", ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::AICc);
    enum_b43d5bcd7fb95832845cba669051438f.value("BIC", ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::BIC);
    enum_b43d5bcd7fb95832845cba669051438f.value("HQIC", ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator::HQIC);
    enum_b43d5bcd7fb95832845cba669051438f.export_values();

}