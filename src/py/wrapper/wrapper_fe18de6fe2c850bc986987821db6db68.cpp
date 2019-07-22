#include "_core.h"


void wrapper_fe18de6fe2c850bc986987821db6db68(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::ordering_type > enum_fe18de6fe2c850bc986987821db6db68(module, "ordering_type");
    enum_fe18de6fe2c850bc986987821db6db68.value("NONE", ::statiskit::NONE);
    enum_fe18de6fe2c850bc986987821db6db68.value("TOTAL", ::statiskit::TOTAL);
    enum_fe18de6fe2c850bc986987821db6db68.value("PARTIAL", ::statiskit::PARTIAL);
    enum_fe18de6fe2c850bc986987821db6db68.export_values();

}