#include "_core.h"


void wrapper_78fa594811935c2ea4b4905d733f141f(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::size_error::size_type > enum_78fa594811935c2ea4b4905d733f141f(module, "size_type");
    enum_78fa594811935c2ea4b4905d733f141f.value("INFERIOR", ::statiskit::size_error::inferior);
    enum_78fa594811935c2ea4b4905d733f141f.value("EQUAL", ::statiskit::size_error::equal);
    enum_78fa594811935c2ea4b4905d733f141f.value("SUPERIOR", ::statiskit::size_error::superior);
    enum_78fa594811935c2ea4b4905d733f141f.export_values();

}