#include "_core.h"

double const & (::statiskit::SlopeHeuristicSuperiorSelector::*method_pointer_e4d1e5ff572a52868a58cd42498837f8)()const= &::statiskit::SlopeHeuristicSuperiorSelector::get_threshold;
void  (::statiskit::SlopeHeuristicSuperiorSelector::*method_pointer_5fb00356a0aa5e3db19c85359e6b403d)(double const &)= &::statiskit::SlopeHeuristicSuperiorSelector::set_threshold;

namespace autowig {
}

void wrapper_3220f60173275579a5722fe8dba23dfa(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristicSuperiorSelector, autowig::HolderType< class ::statiskit::SlopeHeuristicSuperiorSelector >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicSuperiorSelector, struct ::statiskit::SlopeHeuristicSelector > > class_3220f60173275579a5722fe8dba23dfa(module, "SlopeHeuristicSuperiorSelector", "");
    class_3220f60173275579a5722fe8dba23dfa.def(pybind11::init<  >());
    class_3220f60173275579a5722fe8dba23dfa.def(pybind11::init< class ::statiskit::SlopeHeuristicSuperiorSelector const & >());
    class_3220f60173275579a5722fe8dba23dfa.def("get_threshold", method_pointer_e4d1e5ff572a52868a58cd42498837f8, pybind11::return_value_policy::copy, "");
    class_3220f60173275579a5722fe8dba23dfa.def("set_threshold", method_pointer_5fb00356a0aa5e3db19c85359e6b403d, "");

}