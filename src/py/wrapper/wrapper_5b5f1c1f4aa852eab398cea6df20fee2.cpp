#include "_core.h"

namespace autowig
{
    typedef ::statiskit::WeightedData< ::statiskit::MultivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::WeightedData< ::statiskit::MultivariateData >::WeightedData;

            typedef double  return_type_7da327a8236953bdbdbe7d839fab134b;
            typedef ::statiskit::Index const & param_7da327a8236953bdbdbe7d839fab134b_0_type;
            virtual return_type_7da327a8236953bdbdbe7d839fab134b get_weight(param_7da327a8236953bdbdbe7d839fab134b_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_7da327a8236953bdbdbe7d839fab134b, class_type, get_weight, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  return_type_db766366b24e53159689129a8160deae;
            virtual return_type_db766366b24e53159689129a8160deae generator() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_db766366b24e53159689129a8160deae, class_type, generator, ); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_b5f43de177835cf7a8332223a0439efa;
            virtual return_type_b5f43de177835cf7a8332223a0439efa get_sample_space() const override { PYBIND11_OVERLOAD(return_type_b5f43de177835cf7a8332223a0439efa, class_type, get_sample_space, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_772fe48a3d9157a8866c84dd1f9b5675;
            virtual return_type_772fe48a3d9157a8866c84dd1f9b5675 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_772fe48a3d9157a8866c84dd1f9b5675, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_6458b57af188571eb3d4621eb252540b;
            typedef ::statiskit::Indices const & param_6458b57af188571eb3d4621eb252540b_0_type;
            virtual return_type_6458b57af188571eb3d4621eb252540b extract(param_6458b57af188571eb3d4621eb252540b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_6458b57af188571eb3d4621eb252540b, class_type, extract, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_03ae26ff6e5c56ac9c1e8dc84d177549;
            typedef ::statiskit::Index const & param_03ae26ff6e5c56ac9c1e8dc84d177549_0_type;
            virtual return_type_03ae26ff6e5c56ac9c1e8dc84d177549 extract(param_03ae26ff6e5c56ac9c1e8dc84d177549_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_03ae26ff6e5c56ac9c1e8dc84d177549, class_type, extract, param_0); };
            typedef ::statiskit::Index  return_type_e5fc456b4a2d5131b0cd3ab814baba49;
            virtual return_type_e5fc456b4a2d5131b0cd3ab814baba49 size() const override { PYBIND11_OVERLOAD(return_type_e5fc456b4a2d5131b0cd3ab814baba49, class_type, size, ); };
    };
}

struct ::statiskit::MultivariateData const * (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_24860636c996556c8cece089c4290285)()const= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_data;
::statiskit::Index  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_2ce657ba87ce5daf9e0bc47c5dc1432e)()const= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_nb_weights;
double  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_7da327a8236953bdbdbe7d839fab134b)(::statiskit::Index const &)const= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_weight;
void  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_cbfdf5edbda858af9e4598c8ab86074d)(::statiskit::Index const &, double const &)= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::set_weight;

namespace autowig {
}

void wrapper_5b5f1c1f4aa852eab398cea6df20fee2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >, autowig::Trampoline, autowig::HolderType< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::Type, struct ::statiskit::MultivariateData > class_5b5f1c1f4aa852eab398cea6df20fee2(module, "_WeightedData_5b5f1c1f4aa852eab398cea6df20fee2", "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def(pybind11::init<  >());
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_data", method_pointer_24860636c996556c8cece089c4290285, pybind11::return_value_policy::reference_internal, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_nb_weights", method_pointer_2ce657ba87ce5daf9e0bc47c5dc1432e, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_weight", method_pointer_7da327a8236953bdbdbe7d839fab134b, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("set_weight", method_pointer_cbfdf5edbda858af9e4598c8ab86074d, "");

}