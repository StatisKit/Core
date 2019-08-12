#include "_core.h"

void  (::statiskit::HierarchicalSampleSpace::*method_pointer_604058ca75845a609dc1643449e794c1)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalSampleSpace const &)= &::statiskit::HierarchicalSampleSpace::partition;
struct ::statiskit::CategoricalSampleSpace const * (::statiskit::HierarchicalSampleSpace::*method_pointer_ddd11f7e554050a9a8f5150229b8c16b)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)= &::statiskit::HierarchicalSampleSpace::get_sample_space;
class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >  (::statiskit::HierarchicalSampleSpace::*method_pointer_4805cfaee6d85d90a38c5df5668f7bb1)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::HierarchicalSampleSpace::children;

namespace autowig {
}

void wrapper_3e9d65e7582c5349812d357cd482c2ca(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::HierarchicalSampleSpace, autowig::HolderType< class ::statiskit::HierarchicalSampleSpace >::Type, struct ::statiskit::CategoricalSampleSpace > class_3e9d65e7582c5349812d357cd482c2ca(module, "HierarchicalSampleSpace", "");
    class_3e9d65e7582c5349812d357cd482c2ca.def(pybind11::init< struct ::statiskit::CategoricalSampleSpace const & >());
    class_3e9d65e7582c5349812d357cd482c2ca.def(pybind11::init< class ::statiskit::HierarchicalSampleSpace const & >());
    class_3e9d65e7582c5349812d357cd482c2ca.def("partition", method_pointer_604058ca75845a609dc1643449e794c1, "");
    class_3e9d65e7582c5349812d357cd482c2ca.def("get_sample_space", method_pointer_ddd11f7e554050a9a8f5150229b8c16b, pybind11::return_value_policy::reference_internal, "");
    class_3e9d65e7582c5349812d357cd482c2ca.def("children", method_pointer_4805cfaee6d85d90a38c5df5668f7bb1, "");

}