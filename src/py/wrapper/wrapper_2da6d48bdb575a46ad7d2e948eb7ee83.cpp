#include "_core.h"


namespace autowig {
}

void wrapper_2da6d48bdb575a46ad7d2e948eb7ee83(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::SlopeHeuristicOLSSolver, autowig::HolderType< struct ::statiskit::SlopeHeuristicOLSSolver >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicOLSSolver, class ::statiskit::SlopeHeuristicSolver > > class_2da6d48bdb575a46ad7d2e948eb7ee83(module, "SlopeHeuristicOLSSolver", "");
    class_2da6d48bdb575a46ad7d2e948eb7ee83.def(pybind11::init<  >());
    class_2da6d48bdb575a46ad7d2e948eb7ee83.def(pybind11::init< struct ::statiskit::SlopeHeuristicOLSSolver const & >());

}