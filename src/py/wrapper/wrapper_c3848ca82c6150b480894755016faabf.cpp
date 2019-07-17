#include "_core.h"

void  (::statiskit::MultivariateDataFrame::*method_pointer_bdf57f4d8234532bab59339bf04ced18)(::statiskit::Index const &, struct ::statiskit::UnivariateSampleSpace const &)= &::statiskit::MultivariateDataFrame::set_sample_space;
class ::statiskit::UnivariateDataFrame const * (::statiskit::MultivariateDataFrame::*method_pointer_b9d069c00f5c563587cb7bb977d07267)(::statiskit::Index const &)const= &::statiskit::MultivariateDataFrame::get_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_bd6f29af832854fd90b48c846aef5083)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &)= &::statiskit::MultivariateDataFrame::set_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_e10b9c47f5cd51a68b8b0640eb4af2a4)(class ::statiskit::UnivariateDataFrame const &)= &::statiskit::MultivariateDataFrame::add_component;
class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > >  (::statiskit::MultivariateDataFrame::*method_pointer_0e36cd3c6b7554bb8faab5320f147d49)()= &::statiskit::MultivariateDataFrame::pop_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_fc707ff04a2653ea8e21bf6a890a5abb)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &)= &::statiskit::MultivariateDataFrame::insert_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_600b4f5b6cc15bb1b7a8e0601af0e7f9)(::statiskit::Index const &)= &::statiskit::MultivariateDataFrame::remove_component;

namespace autowig {
}

void wrapper_c3848ca82c6150b480894755016faabf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateDataFrame, autowig::HolderType< class ::statiskit::MultivariateDataFrame >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > > class_c3848ca82c6150b480894755016faabf(module, "MultivariateDataFrame", "");
    class_c3848ca82c6150b480894755016faabf.def(pybind11::init<  >());
    class_c3848ca82c6150b480894755016faabf.def(pybind11::init< class ::statiskit::MultivariateDataFrame const & >());
    class_c3848ca82c6150b480894755016faabf.def("set_sample_space", method_pointer_bdf57f4d8234532bab59339bf04ced18, "");
    class_c3848ca82c6150b480894755016faabf.def("get_component", method_pointer_b9d069c00f5c563587cb7bb977d07267, pybind11::return_value_policy::reference_internal, "");
    class_c3848ca82c6150b480894755016faabf.def("set_component", method_pointer_bd6f29af832854fd90b48c846aef5083, "");
    class_c3848ca82c6150b480894755016faabf.def("add_component", method_pointer_e10b9c47f5cd51a68b8b0640eb4af2a4, "");
    class_c3848ca82c6150b480894755016faabf.def("pop_component", method_pointer_0e36cd3c6b7554bb8faab5320f147d49, "");
    class_c3848ca82c6150b480894755016faabf.def("insert_component", method_pointer_fc707ff04a2653ea8e21bf6a890a5abb, "");
    class_c3848ca82c6150b480894755016faabf.def("remove_component", method_pointer_600b4f5b6cc15bb1b7a8e0601af0e7f9, "");

}