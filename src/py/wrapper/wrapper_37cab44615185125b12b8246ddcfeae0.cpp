#include "_core.h"


void wrapper_37cab44615185125b12b8246ddcfeae0(pybind11::module& module)
{

    pybind11::enum_< ::std::ios_base::event > enum_37cab44615185125b12b8246ddcfeae0(module, "event");
    enum_37cab44615185125b12b8246ddcfeae0.value("ERASE_EVENT", ::std::ios_base::erase_event);
    enum_37cab44615185125b12b8246ddcfeae0.value("IMBUE_EVENT", ::std::ios_base::imbue_event);
    enum_37cab44615185125b12b8246ddcfeae0.value("COPYFMT_EVENT", ::std::ios_base::copyfmt_event);
    enum_37cab44615185125b12b8246ddcfeae0.export_values();

}