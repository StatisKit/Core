#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::IndexSelectedData::*method_pointer_7f2f4c108cf75898ab48e37fb8037786)()const= &::statiskit::IndexSelectedData::origin;
::statiskit::Index  (::statiskit::IndexSelectedData::*method_pointer_7f1a472f52ad59cb95b2616b04e31e93)()const= &::statiskit::IndexSelectedData::get_index;

namespace autowig {
}

void wrapper_96a5a23f253351d38c0689328d0d8eb2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IndexSelectedData, autowig::HolderType< class ::statiskit::IndexSelectedData >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::IndexSelectedData, struct ::statiskit::UnivariateData > > class_96a5a23f253351d38c0689328d0d8eb2(module, "IndexSelectedData", "");
    class_96a5a23f253351d38c0689328d0d8eb2.def(pybind11::init< struct ::statiskit::MultivariateData const &, ::statiskit::Index const & >());
    class_96a5a23f253351d38c0689328d0d8eb2.def(pybind11::init< class ::statiskit::IndexSelectedData const & >());
    class_96a5a23f253351d38c0689328d0d8eb2.def("origin", method_pointer_7f2f4c108cf75898ab48e37fb8037786, pybind11::return_value_policy::reference_internal, "");
    class_96a5a23f253351d38c0689328d0d8eb2.def("get_index", method_pointer_7f1a472f52ad59cb95b2616b04e31e93, "");

}