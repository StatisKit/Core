#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::IndicesSelectedData::*method_pointer_d6c7efbc09c752d192fd6ffa5db7924e)()const= &::statiskit::IndicesSelectedData::origin;
class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & (::statiskit::IndicesSelectedData::*method_pointer_e9aa5c082c775c28beea479e2329c74c)()const= &::statiskit::IndicesSelectedData::get_indices;

namespace autowig {
}

void wrapper_bf9e7f30f1ac5c22a1598a2a6a45b312(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IndicesSelectedData, autowig::HolderType< class ::statiskit::IndicesSelectedData >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::IndicesSelectedData, struct ::statiskit::MultivariateData > > class_bf9e7f30f1ac5c22a1598a2a6a45b312(module, "IndicesSelectedData", "");
    class_bf9e7f30f1ac5c22a1598a2a6a45b312.def(pybind11::init< struct ::statiskit::MultivariateData const &, ::statiskit::Indices const & >());
    class_bf9e7f30f1ac5c22a1598a2a6a45b312.def(pybind11::init< class ::statiskit::IndicesSelectedData const & >());
    class_bf9e7f30f1ac5c22a1598a2a6a45b312.def("origin", method_pointer_d6c7efbc09c752d192fd6ffa5db7924e, pybind11::return_value_policy::reference_internal, "");
    class_bf9e7f30f1ac5c22a1598a2a6a45b312.def("get_indices", method_pointer_e9aa5c082c775c28beea479e2329c74c, pybind11::return_value_policy::copy, "");

}