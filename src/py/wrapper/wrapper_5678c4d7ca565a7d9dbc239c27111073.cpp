#include "_core.h"

void  (::statiskit::UnivariateDataFrame::*method_pointer_b2b45040751857d9942654209dd4fdac)(struct ::statiskit::UnivariateSampleSpace const &)= &::statiskit::UnivariateDataFrame::set_sample_space;
struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateDataFrame::*method_pointer_acfaaecaae6e563198d7e451796407a2)(::statiskit::Index const &)const= &::statiskit::UnivariateDataFrame::get_event;
void  (::statiskit::UnivariateDataFrame::*method_pointer_ce7b8fa1ade75b408b8f489683745f15)(::statiskit::Index const &, struct ::statiskit::UnivariateEvent const *)= &::statiskit::UnivariateDataFrame::set_event;
void  (::statiskit::UnivariateDataFrame::*method_pointer_09c311d9e4475939affd9d4717d290fb)(struct ::statiskit::UnivariateEvent const *)= &::statiskit::UnivariateDataFrame::add_event;
class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateDataFrame::*method_pointer_a77777c59a785c7cb264ac4c74d865ac)()= &::statiskit::UnivariateDataFrame::pop_event;
void  (::statiskit::UnivariateDataFrame::*method_pointer_fc1013be18f0593e9a96b8a03e5b4823)(::statiskit::Index const &, struct ::statiskit::UnivariateEvent const *)= &::statiskit::UnivariateDataFrame::insert_event;
void  (::statiskit::UnivariateDataFrame::*method_pointer_0f508f8076e95e299ce71667166fb56e)(::statiskit::Index const &)= &::statiskit::UnivariateDataFrame::remove_event;

namespace autowig {
}

void wrapper_5678c4d7ca565a7d9dbc239c27111073(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateDataFrame, autowig::HolderType< class ::statiskit::UnivariateDataFrame >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateDataFrame, struct ::statiskit::UnivariateData >, class ::statiskit::NamedData > class_5678c4d7ca565a7d9dbc239c27111073(module, "UnivariateDataFrame", "");
    class_5678c4d7ca565a7d9dbc239c27111073.def(pybind11::init< struct ::statiskit::UnivariateSampleSpace const & >());
    class_5678c4d7ca565a7d9dbc239c27111073.def(pybind11::init< class ::statiskit::UnivariateDataFrame const & >());
    class_5678c4d7ca565a7d9dbc239c27111073.def("set_sample_space", method_pointer_b2b45040751857d9942654209dd4fdac, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("get_event", method_pointer_acfaaecaae6e563198d7e451796407a2, pybind11::return_value_policy::reference_internal, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("set_event", method_pointer_ce7b8fa1ade75b408b8f489683745f15, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("add_event", method_pointer_09c311d9e4475939affd9d4717d290fb, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("pop_event", method_pointer_a77777c59a785c7cb264ac4c74d865ac, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("insert_event", method_pointer_fc1013be18f0593e9a96b8a03e5b4823, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("remove_event", method_pointer_0f508f8076e95e299ce71667166fb56e, "");

}