#include "_core.h"


namespace autowig {
}

void wrapper_049d21481e965f67b49aa4d4debb77d4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NormalDistributionEstimation, autowig::HolderType< struct ::statiskit::NormalDistributionEstimation >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_049d21481e965f67b49aa4d4debb77d4(module, "NormalDistributionEstimation", "");
    class_049d21481e965f67b49aa4d4debb77d4.def(pybind11::init<  >());
    class_049d21481e965f67b49aa4d4debb77d4.def(pybind11::init< struct ::statiskit::NormalDistributionEstimation const & >());

}