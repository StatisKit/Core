#include "_core.h"

double  (::statiskit::HierarchicalDistribution::*method_pointer_011b6a4c67bd51979faad3d70b2accb1)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::HierarchicalDistribution::internal_ldf;
double  (::statiskit::HierarchicalDistribution::*method_pointer_bdb51633f466504bbda767676bc595b0)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::HierarchicalDistribution::internal_pdf;
unsigned int  (::statiskit::HierarchicalDistribution::*method_pointer_516ce2ebf00e53a5b015217458043636)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::HierarchicalDistribution::index;
struct ::statiskit::CategoricalUnivariateDistribution const * (::statiskit::HierarchicalDistribution::*method_pointer_0095a88066135c6c963b6a524c18cad4)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::HierarchicalDistribution::get_distribution;
void  (::statiskit::HierarchicalDistribution::*method_pointer_82f72d1f9cd65a6881253ef5e6c217db)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalUnivariateDistribution const &)= &::statiskit::HierarchicalDistribution::set_distribution;
class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >  (::statiskit::HierarchicalDistribution::*method_pointer_a57d14e2013e52109b587e456949b355)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::HierarchicalDistribution::parent;

namespace autowig {
}

void wrapper_3878f151eb4759f89a07796ff631bdf9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::HierarchicalDistribution, autowig::HolderType< class ::statiskit::HierarchicalDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::HierarchicalDistribution, struct ::statiskit::CategoricalUnivariateDistribution > > class_3878f151eb4759f89a07796ff631bdf9(module, "HierarchicalDistribution", "");
    class_3878f151eb4759f89a07796ff631bdf9.def(pybind11::init<  >());
    class_3878f151eb4759f89a07796ff631bdf9.def(pybind11::init< class ::statiskit::HierarchicalSampleSpace const & >());
    class_3878f151eb4759f89a07796ff631bdf9.def(pybind11::init< class ::statiskit::HierarchicalDistribution const & >());
    class_3878f151eb4759f89a07796ff631bdf9.def("internal_ldf", method_pointer_011b6a4c67bd51979faad3d70b2accb1, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("internal_pdf", method_pointer_bdb51633f466504bbda767676bc595b0, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("index", method_pointer_516ce2ebf00e53a5b015217458043636, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("get_distribution", method_pointer_0095a88066135c6c963b6a524c18cad4, pybind11::return_value_policy::reference_internal, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("set_distribution", method_pointer_82f72d1f9cd65a6881253ef5e6c217db, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("parent", method_pointer_a57d14e2013e52109b587e456949b355, "");

}