#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateData class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateData::MultivariateData;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_772fe48a3d9157a8866c84dd1f9b5675;
            virtual return_type_772fe48a3d9157a8866c84dd1f9b5675 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_772fe48a3d9157a8866c84dd1f9b5675, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_f64a6810607b5e87abd849016a7257a8;
            typedef ::statiskit::Indices const & param_f64a6810607b5e87abd849016a7257a8_0_type;
            virtual return_type_f64a6810607b5e87abd849016a7257a8 select(param_f64a6810607b5e87abd849016a7257a8_0_type param_0) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_f64a6810607b5e87abd849016a7257a8, class_type, select, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_c396af3cbd155448853ecc949208ba01;
            typedef ::statiskit::Index const & param_c396af3cbd155448853ecc949208ba01_0_type;
            virtual return_type_c396af3cbd155448853ecc949208ba01 select(param_c396af3cbd155448853ecc949208ba01_0_type param_0) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c396af3cbd155448853ecc949208ba01, class_type, select, param_0); };
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_ac6508992c5b5503bd21d9306d7865ab;
            typedef ::statiskit::Index const & param_ac6508992c5b5503bd21d9306d7865ab_0_type;
            virtual return_type_ac6508992c5b5503bd21d9306d7865ab get_sample_space(param_ac6508992c5b5503bd21d9306d7865ab_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ac6508992c5b5503bd21d9306d7865ab, class_type, get_sample_space, param_0); };
            typedef ::statiskit::Index  return_type_c47e79caf5975050b200ee7ce97df8ff;
            virtual return_type_c47e79caf5975050b200ee7ce97df8ff get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_c47e79caf5975050b200ee7ce97df8ff, class_type, get_nb_components, ); };
            typedef ::statiskit::Index  return_type_9a45dee4cb885178bcb89ced8cb3face;
            virtual return_type_9a45dee4cb885178bcb89ced8cb3face get_nb_events() const override { PYBIND11_OVERLOAD(return_type_9a45dee4cb885178bcb89ced8cb3face, class_type, get_nb_events, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  return_type_facf1de3504b5543b1eed987285d8673;
            virtual return_type_facf1de3504b5543b1eed987285d8673 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_facf1de3504b5543b1eed987285d8673, class_type, generator, ); };
    };
}

class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  (::statiskit::MultivariateData::*method_pointer_facf1de3504b5543b1eed987285d8673)()const= &::statiskit::MultivariateData::generator;
::statiskit::Index  (::statiskit::MultivariateData::*method_pointer_9a45dee4cb885178bcb89ced8cb3face)()const= &::statiskit::MultivariateData::get_nb_events;
double  (::statiskit::MultivariateData::*method_pointer_21b09584f6625e14abe2acdb420c6b08)()const= &::statiskit::MultivariateData::compute_total;
::statiskit::Index  (::statiskit::MultivariateData::*method_pointer_c47e79caf5975050b200ee7ce97df8ff)()const= &::statiskit::MultivariateData::get_nb_components;
struct ::statiskit::UnivariateSampleSpace const * (::statiskit::MultivariateData::*method_pointer_ac6508992c5b5503bd21d9306d7865ab)(::statiskit::Index const &)const= &::statiskit::MultivariateData::get_sample_space;
class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::MultivariateData::*method_pointer_c396af3cbd155448853ecc949208ba01)(::statiskit::Index const &)const= &::statiskit::MultivariateData::select;
class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateData::*method_pointer_f64a6810607b5e87abd849016a7257a8)(::statiskit::Indices const &)const= &::statiskit::MultivariateData::select;
class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateData::*method_pointer_772fe48a3d9157a8866c84dd1f9b5675)()const= &::statiskit::MultivariateData::copy;

namespace autowig {
}

void wrapper_88cb53c05b215504b1f0ee0564765af0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateData, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateData >::Type > class_88cb53c05b215504b1f0ee0564765af0(module, "MultivariateData", "");
    class_88cb53c05b215504b1f0ee0564765af0.def(pybind11::init<  >());
    class_88cb53c05b215504b1f0ee0564765af0.def("__iter__", method_pointer_facf1de3504b5543b1eed987285d8673, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("get_nb_events", method_pointer_9a45dee4cb885178bcb89ced8cb3face, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("compute_total", method_pointer_21b09584f6625e14abe2acdb420c6b08, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("get_nb_components", method_pointer_c47e79caf5975050b200ee7ce97df8ff, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("get_sample_space", method_pointer_ac6508992c5b5503bd21d9306d7865ab, pybind11::return_value_policy::reference_internal, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("select", method_pointer_c396af3cbd155448853ecc949208ba01, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("select", method_pointer_f64a6810607b5e87abd849016a7257a8, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("copy", method_pointer_772fe48a3d9157a8866c84dd1f9b5675, "");

}