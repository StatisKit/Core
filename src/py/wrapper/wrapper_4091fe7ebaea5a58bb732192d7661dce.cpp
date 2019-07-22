#include "_core.h"


void wrapper_4091fe7ebaea5a58bb732192d7661dce(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::outcome_type > enum_4091fe7ebaea5a58bb732192d7661dce(module, "outcome_type");
    enum_4091fe7ebaea5a58bb732192d7661dce.value("CATEGORICAL", ::statiskit::outcome_type::CATEGORICAL);
    enum_4091fe7ebaea5a58bb732192d7661dce.value("DISCRETE", ::statiskit::outcome_type::DISCRETE);
    enum_4091fe7ebaea5a58bb732192d7661dce.value("CONTINUOUS", ::statiskit::outcome_type::CONTINUOUS);
    enum_4091fe7ebaea5a58bb732192d7661dce.value("MIXED", ::statiskit::outcome_type::MIXED);

}