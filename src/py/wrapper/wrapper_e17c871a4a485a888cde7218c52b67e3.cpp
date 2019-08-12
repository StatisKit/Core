#include "_core.h"


namespace autowig {
}

void wrapper_e17c871a4a485a888cde7218c52b67e3(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, autowig::HolderType< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator > > > class_e17c871a4a485a888cde7218c52b67e3(module, "Estimator", "");
    class_e17c871a4a485a888cde7218c52b67e3.def(pybind11::init<  >());
    class_e17c871a4a485a888cde7218c52b67e3.def(pybind11::init< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator const & >());

}