#include "_core.h"


void wrapper_3a6a49079d1b5e9bb815105374e2fc93(pybind11::module& module)
{

    pybind11::enum_< ::statiskit::encoding_type > enum_3a6a49079d1b5e9bb815105374e2fc93(module, "encoding_type");
    enum_3a6a49079d1b5e9bb815105374e2fc93.value("TREATMENT", ::statiskit::TREATMENT);
    enum_3a6a49079d1b5e9bb815105374e2fc93.value("DEVIATION", ::statiskit::DEVIATION);
    enum_3a6a49079d1b5e9bb815105374e2fc93.value("CUMULATIVE", ::statiskit::CUMULATIVE);
    enum_3a6a49079d1b5e9bb815105374e2fc93.export_values();

}