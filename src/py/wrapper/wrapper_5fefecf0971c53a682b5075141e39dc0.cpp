#include "_core.h"

double const & (::statiskit::SlopeHeuristicBiSquareSolver::*method_pointer_9bddc4d28425559fa247588656301e76)()const= &::statiskit::SlopeHeuristicBiSquareSolver::get_k;
void  (::statiskit::SlopeHeuristicBiSquareSolver::*method_pointer_1de2922e7e925d388fa01a069fb88c41)(double const &)= &::statiskit::SlopeHeuristicBiSquareSolver::set_k;

namespace autowig {
}

void wrapper_5fefecf0971c53a682b5075141e39dc0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristicBiSquareSolver, autowig::HolderType< class ::statiskit::SlopeHeuristicBiSquareSolver >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicBiSquareSolver, class ::statiskit::SlopeHeuristicIWLSSolver > > class_5fefecf0971c53a682b5075141e39dc0(module, "SlopeHeuristicBiSquareSolver", "");
    class_5fefecf0971c53a682b5075141e39dc0.def(pybind11::init<  >());
    class_5fefecf0971c53a682b5075141e39dc0.def(pybind11::init< class ::statiskit::SlopeHeuristicBiSquareSolver const & >());
    class_5fefecf0971c53a682b5075141e39dc0.def("get_k", method_pointer_9bddc4d28425559fa247588656301e76, pybind11::return_value_policy::copy, "");
    class_5fefecf0971c53a682b5075141e39dc0.def("set_k", method_pointer_1de2922e7e925d388fa01a069fb88c41, "");

}