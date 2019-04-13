#include "_core.h"

class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  (::statiskit::OrdinalSampleSpace::*method_pointer_521b4a3827bc56de8b09121e7ab54dde)()const= &::statiskit::OrdinalSampleSpace::get_ordered;
void  (::statiskit::OrdinalSampleSpace::*method_pointer_1f7f4bbcf48756c8b4ab24c57b9e03b2)(class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &)= &::statiskit::OrdinalSampleSpace::set_ordered;
class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & (::statiskit::OrdinalSampleSpace::*method_pointer_bbbcd1f7befd501da33c8bc0a6ca7d94)()const= &::statiskit::OrdinalSampleSpace::get_rank;
void  (::statiskit::OrdinalSampleSpace::*method_pointer_106705a757c553aa881c46d55a55ded5)(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const &)= &::statiskit::OrdinalSampleSpace::set_rank;
void  (::statiskit::OrdinalSampleSpace::*method_pointer_343159b54c8a5f0da44d25b4d4786073)()= &::statiskit::OrdinalSampleSpace::randomize;
class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > >  (::statiskit::OrdinalSampleSpace::*method_pointer_57b6fbac4790575084fe42696914a551)()const= &::statiskit::OrdinalSampleSpace::as_nominal;

namespace autowig {
}

void wrapper_850400feaf015819b89ae0fb0bc38962(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OrdinalSampleSpace, autowig::HolderType< class ::statiskit::OrdinalSampleSpace >::Type, struct ::statiskit::CategoricalSampleSpace > class_850400feaf015819b89ae0fb0bc38962(module, "OrdinalSampleSpace", "");
    class_850400feaf015819b89ae0fb0bc38962.def(pybind11::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >());
    class_850400feaf015819b89ae0fb0bc38962.def(pybind11::init< class ::statiskit::OrdinalSampleSpace const & >());
    class_850400feaf015819b89ae0fb0bc38962.def("get_ordered", method_pointer_521b4a3827bc56de8b09121e7ab54dde, "");
    class_850400feaf015819b89ae0fb0bc38962.def("set_ordered", method_pointer_1f7f4bbcf48756c8b4ab24c57b9e03b2, "");
    class_850400feaf015819b89ae0fb0bc38962.def("get_rank", method_pointer_bbbcd1f7befd501da33c8bc0a6ca7d94, pybind11::return_value_policy::copy, "");
    class_850400feaf015819b89ae0fb0bc38962.def("set_rank", method_pointer_106705a757c553aa881c46d55a55ded5, "");
    class_850400feaf015819b89ae0fb0bc38962.def("randomize", method_pointer_343159b54c8a5f0da44d25b4d4786073, "");
    class_850400feaf015819b89ae0fb0bc38962.def("as_nominal", method_pointer_57b6fbac4790575084fe42696914a551, "");

}