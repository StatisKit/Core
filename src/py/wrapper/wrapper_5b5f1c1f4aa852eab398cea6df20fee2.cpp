#include "_core.h"

namespace autowig
{
    typedef ::statiskit::WeightedData< ::statiskit::MultivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::WeightedData< ::statiskit::MultivariateData >::WeightedData;


        public:
            typedef double  return_type_7da327a8236953bdbdbe7d839fab134b;
            typedef ::statiskit::Index const & param_7da327a8236953bdbdbe7d839fab134b_0_type;
            virtual return_type_7da327a8236953bdbdbe7d839fab134b get_weight(param_7da327a8236953bdbdbe7d839fab134b_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_7da327a8236953bdbdbe7d839fab134b, class_type, get_weight, param_0); };

        public:
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_b5f43de177835cf7a8332223a0439efa;
            virtual return_type_b5f43de177835cf7a8332223a0439efa get_sample_space() const override { PYBIND11_OVERLOAD(return_type_b5f43de177835cf7a8332223a0439efa, class_type, get_sample_space, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_772fe48a3d9157a8866c84dd1f9b5675;
            virtual return_type_772fe48a3d9157a8866c84dd1f9b5675 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_772fe48a3d9157a8866c84dd1f9b5675, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_f64a6810607b5e87abd849016a7257a8;
            typedef ::statiskit::Indices const & param_f64a6810607b5e87abd849016a7257a8_0_type;
            virtual return_type_f64a6810607b5e87abd849016a7257a8 select(param_f64a6810607b5e87abd849016a7257a8_0_type param_0) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_f64a6810607b5e87abd849016a7257a8, class_type, select, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_c396af3cbd155448853ecc949208ba01;
            typedef ::statiskit::Index const & param_c396af3cbd155448853ecc949208ba01_0_type;
            virtual return_type_c396af3cbd155448853ecc949208ba01 select(param_c396af3cbd155448853ecc949208ba01_0_type param_0) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c396af3cbd155448853ecc949208ba01, class_type, select, param_0); };

        public:
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_ac6508992c5b5503bd21d9306d7865ab;
            typedef ::statiskit::Index const & param_ac6508992c5b5503bd21d9306d7865ab_0_type;
            virtual return_type_ac6508992c5b5503bd21d9306d7865ab get_sample_space(param_ac6508992c5b5503bd21d9306d7865ab_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ac6508992c5b5503bd21d9306d7865ab, class_type, get_sample_space, param_0); };

        public:
            typedef ::statiskit::Index  return_type_c47e79caf5975050b200ee7ce97df8ff;
            virtual return_type_c47e79caf5975050b200ee7ce97df8ff get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_c47e79caf5975050b200ee7ce97df8ff, class_type, get_nb_components, ); };

        public:
            typedef ::statiskit::Index  return_type_9a45dee4cb885178bcb89ced8cb3face;
            virtual return_type_9a45dee4cb885178bcb89ced8cb3face get_nb_events() const override { PYBIND11_OVERLOAD(return_type_9a45dee4cb885178bcb89ced8cb3face, class_type, get_nb_events, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  return_type_facf1de3504b5543b1eed987285d8673;
            virtual return_type_facf1de3504b5543b1eed987285d8673 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_facf1de3504b5543b1eed987285d8673, class_type, generator, ); };
    };
}

struct ::statiskit::MultivariateSampleSpace const * (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_b5f43de177835cf7a8332223a0439efa)()const= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_sample_space;
struct ::statiskit::MultivariateData const * (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_0ff6cd4afd5d5c6bafd6a862adb38410)()const= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::origin;
::statiskit::Index  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_2ce657ba87ce5daf9e0bc47c5dc1432e)()const= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_nb_weights;
double  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_7da327a8236953bdbdbe7d839fab134b)(::statiskit::Index const &)const= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::get_weight;
void  (::statiskit::WeightedData< ::statiskit::MultivariateData >::*method_pointer_cbfdf5edbda858af9e4598c8ab86074d)(::statiskit::Index const &, double const &)= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::set_weight;

namespace autowig {
}

void wrapper_5b5f1c1f4aa852eab398cea6df20fee2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >, autowig::Trampoline, autowig::HolderType< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::Type, struct ::statiskit::MultivariateData > class_5b5f1c1f4aa852eab398cea6df20fee2(module, "_WeightedData_5b5f1c1f4aa852eab398cea6df20fee2", "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def(pybind11::init< struct ::statiskit::MultivariateData const & >());
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_sample_space", method_pointer_b5f43de177835cf7a8332223a0439efa, pybind11::return_value_policy::reference_internal, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("origin", method_pointer_0ff6cd4afd5d5c6bafd6a862adb38410, pybind11::return_value_policy::reference_internal, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_nb_weights", method_pointer_2ce657ba87ce5daf9e0bc47c5dc1432e, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("get_weight", method_pointer_7da327a8236953bdbdbe7d839fab134b, "");
    class_5b5f1c1f4aa852eab398cea6df20fee2.def("set_weight", method_pointer_cbfdf5edbda858af9e4598c8ab86074d, "");

}