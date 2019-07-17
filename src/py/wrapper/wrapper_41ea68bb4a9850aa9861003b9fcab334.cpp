#include "_core.h"

double const & (::statiskit::ExponentialSchedule::*method_pointer_e148ea22fdff52539414c0352426c429)()const= &::statiskit::ExponentialSchedule::get_theta;
void  (::statiskit::ExponentialSchedule::*method_pointer_1ff8bb70c7cc5ca494ebb09a8c70a691)(double const &)= &::statiskit::ExponentialSchedule::set_theta;

namespace autowig {
}

void wrapper_41ea68bb4a9850aa9861003b9fcab334(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ExponentialSchedule, autowig::HolderType< class ::statiskit::ExponentialSchedule >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > > class_41ea68bb4a9850aa9861003b9fcab334(module, "ExponentialSchedule", "");
    class_41ea68bb4a9850aa9861003b9fcab334.def(pybind11::init< double const & >());
    class_41ea68bb4a9850aa9861003b9fcab334.def(pybind11::init< class ::statiskit::ExponentialSchedule const & >());
    class_41ea68bb4a9850aa9861003b9fcab334.def("get_theta", method_pointer_e148ea22fdff52539414c0352426c429, pybind11::return_value_policy::copy, "");
    class_41ea68bb4a9850aa9861003b9fcab334.def("set_theta", method_pointer_1ff8bb70c7cc5ca494ebb09a8c70a691, "");

}