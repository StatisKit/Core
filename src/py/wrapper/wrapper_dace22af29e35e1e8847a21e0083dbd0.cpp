#include "_core.h"

double const & (::statiskit::SlopeHeuristicHuberSolver::*method_pointer_4b87ddb1d0a553e89a54cc1bba96ed07)()const= &::statiskit::SlopeHeuristicHuberSolver::get_k;
void  (::statiskit::SlopeHeuristicHuberSolver::*method_pointer_06199c1def0458c387775cd5080ca40a)(double const &)= &::statiskit::SlopeHeuristicHuberSolver::set_k;

namespace autowig {
}

void wrapper_dace22af29e35e1e8847a21e0083dbd0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristicHuberSolver, autowig::HolderType< class ::statiskit::SlopeHeuristicHuberSolver >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicHuberSolver, class ::statiskit::SlopeHeuristicIWLSSolver > > class_dace22af29e35e1e8847a21e0083dbd0(module, "SlopeHeuristicHuberSolver", "");
    class_dace22af29e35e1e8847a21e0083dbd0.def(pybind11::init<  >());
    class_dace22af29e35e1e8847a21e0083dbd0.def(pybind11::init< class ::statiskit::SlopeHeuristicHuberSolver const & >());
    class_dace22af29e35e1e8847a21e0083dbd0.def("get_k", method_pointer_4b87ddb1d0a553e89a54cc1bba96ed07, pybind11::return_value_policy::copy, "");
    class_dace22af29e35e1e8847a21e0083dbd0.def("set_k", method_pointer_06199c1def0458c387775cd5080ca40a, "");

}