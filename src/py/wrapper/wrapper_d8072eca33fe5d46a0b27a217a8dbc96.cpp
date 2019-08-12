#include "_core.h"


void wrapper_d8072eca33fe5d46a0b27a217a8dbc96(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::censoring_type > enum_d8072eca33fe5d46a0b27a217a8dbc96(module, "censoring_type");
    enum_d8072eca33fe5d46a0b27a217a8dbc96.value("NONE", ::statiskit::censoring_type::NONE);
    enum_d8072eca33fe5d46a0b27a217a8dbc96.value("CENSORED", ::statiskit::censoring_type::CENSORED);
    enum_d8072eca33fe5d46a0b27a217a8dbc96.value("LEFT", ::statiskit::censoring_type::LEFT);
    enum_d8072eca33fe5d46a0b27a217a8dbc96.value("RIGHT", ::statiskit::censoring_type::RIGHT);
    enum_d8072eca33fe5d46a0b27a217a8dbc96.value("INTERVAL", ::statiskit::censoring_type::INTERVAL);

}