#include "_core.h"


namespace autowig {
}

void wrapper_d82ac4c07b685057ae35b9a0216111d2(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::SlopeHeuristicMaximalSelector, autowig::HolderType< struct ::statiskit::SlopeHeuristicMaximalSelector >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicMaximalSelector, struct ::statiskit::SlopeHeuristicSelector > > class_d82ac4c07b685057ae35b9a0216111d2(module, "SlopeHeuristicMaximalSelector", "");
    class_d82ac4c07b685057ae35b9a0216111d2.def(pybind11::init<  >());
    class_d82ac4c07b685057ae35b9a0216111d2.def(pybind11::init< struct ::statiskit::SlopeHeuristicMaximalSelector const & >());

}