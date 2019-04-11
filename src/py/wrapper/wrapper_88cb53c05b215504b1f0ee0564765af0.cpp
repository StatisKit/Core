#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateData class_type;

    class Trampoline : public class_type
    {
        public:


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_772fe48a3d9157a8866c84dd1f9b5675;
            virtual return_type_772fe48a3d9157a8866c84dd1f9b5675 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_772fe48a3d9157a8866c84dd1f9b5675, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_6458b57af188571eb3d4621eb252540b;
            typedef ::statiskit::Indices const & param_6458b57af188571eb3d4621eb252540b_0_type;
            virtual return_type_6458b57af188571eb3d4621eb252540b extract(param_6458b57af188571eb3d4621eb252540b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_6458b57af188571eb3d4621eb252540b, class_type, extract, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_03ae26ff6e5c56ac9c1e8dc84d177549;
            typedef ::statiskit::Index const & param_03ae26ff6e5c56ac9c1e8dc84d177549_0_type;
            virtual return_type_03ae26ff6e5c56ac9c1e8dc84d177549 extract(param_03ae26ff6e5c56ac9c1e8dc84d177549_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_03ae26ff6e5c56ac9c1e8dc84d177549, class_type, extract, param_0); };

        public:
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_2da46638257d59e48fa1636c64d254bf;
            virtual return_type_2da46638257d59e48fa1636c64d254bf get_sample_space() const override { PYBIND11_OVERLOAD_PURE(return_type_2da46638257d59e48fa1636c64d254bf, class_type, get_sample_space, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  return_type_facf1de3504b5543b1eed987285d8673;
            virtual return_type_facf1de3504b5543b1eed987285d8673 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_facf1de3504b5543b1eed987285d8673, class_type, generator, ); };

        public:
            typedef ::statiskit::Index  return_type_e5fc456b4a2d5131b0cd3ab814baba49;
            virtual return_type_e5fc456b4a2d5131b0cd3ab814baba49 size() const override { PYBIND11_OVERLOAD(return_type_e5fc456b4a2d5131b0cd3ab814baba49, class_type, size, ); };
    };
}

::statiskit::Index  (::statiskit::MultivariateData::*method_pointer_e5fc456b4a2d5131b0cd3ab814baba49)()const= &::statiskit::MultivariateData::size;
class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  (::statiskit::MultivariateData::*method_pointer_facf1de3504b5543b1eed987285d8673)()const= &::statiskit::MultivariateData::generator;
struct ::statiskit::MultivariateSampleSpace const * (::statiskit::MultivariateData::*method_pointer_2da46638257d59e48fa1636c64d254bf)()const= &::statiskit::MultivariateData::get_sample_space;
class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::MultivariateData::*method_pointer_03ae26ff6e5c56ac9c1e8dc84d177549)(::statiskit::Index const &)const= &::statiskit::MultivariateData::extract;
class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateData::*method_pointer_6458b57af188571eb3d4621eb252540b)(::statiskit::Indices const &)const= &::statiskit::MultivariateData::extract;
class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateData::*method_pointer_772fe48a3d9157a8866c84dd1f9b5675)()const= &::statiskit::MultivariateData::copy;
double  (::statiskit::MultivariateData::*method_pointer_21b09584f6625e14abe2acdb420c6b08)()const= &::statiskit::MultivariateData::compute_total;

namespace autowig {
}

void wrapper_88cb53c05b215504b1f0ee0564765af0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateData, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateData >::Type > class_88cb53c05b215504b1f0ee0564765af0(module, "MultivariateData", "");
    class_88cb53c05b215504b1f0ee0564765af0.def("__len__", method_pointer_e5fc456b4a2d5131b0cd3ab814baba49, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("__iter__", method_pointer_facf1de3504b5543b1eed987285d8673, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("get_sample_space", method_pointer_2da46638257d59e48fa1636c64d254bf, pybind11::return_value_policy::reference_internal, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("extract", method_pointer_03ae26ff6e5c56ac9c1e8dc84d177549, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("extract", method_pointer_6458b57af188571eb3d4621eb252540b, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("copy", method_pointer_772fe48a3d9157a8866c84dd1f9b5675, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("compute_total", method_pointer_21b09584f6625e14abe2acdb420c6b08, "");

}