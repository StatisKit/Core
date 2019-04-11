#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateData class_type;

    class Trampoline : public class_type
    {
        public:


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_f924b25c6e335944a81f6073e12504ff;
            virtual return_type_f924b25c6e335944a81f6073e12504ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f924b25c6e335944a81f6073e12504ff, class_type, copy, ); };

        public:
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_21507917363a580db5491fa57b8df73d;
            virtual return_type_21507917363a580db5491fa57b8df73d get_sample_space() const override { PYBIND11_OVERLOAD_PURE(return_type_21507917363a580db5491fa57b8df73d, class_type, get_sample_space, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  return_type_a33919ff84f759e6b649d1aea1a76e87;
            virtual return_type_a33919ff84f759e6b649d1aea1a76e87 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a33919ff84f759e6b649d1aea1a76e87, class_type, generator, ); };

        public:
            typedef ::statiskit::Index  return_type_ccb6e82201a6558e9733151230bbc9af;
            virtual return_type_ccb6e82201a6558e9733151230bbc9af size() const override { PYBIND11_OVERLOAD(return_type_ccb6e82201a6558e9733151230bbc9af, class_type, size, ); };
    };
}

::statiskit::Index  (::statiskit::UnivariateData::*method_pointer_ccb6e82201a6558e9733151230bbc9af)()const= &::statiskit::UnivariateData::size;
class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  (::statiskit::UnivariateData::*method_pointer_a33919ff84f759e6b649d1aea1a76e87)()const= &::statiskit::UnivariateData::generator;
struct ::statiskit::UnivariateSampleSpace const * (::statiskit::UnivariateData::*method_pointer_21507917363a580db5491fa57b8df73d)()const= &::statiskit::UnivariateData::get_sample_space;
class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::UnivariateData::*method_pointer_f924b25c6e335944a81f6073e12504ff)()const= &::statiskit::UnivariateData::copy;
double  (::statiskit::UnivariateData::*method_pointer_e7311f0bb01b535d99e8bc70f058ae81)()const= &::statiskit::UnivariateData::compute_total;
class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateData::*method_pointer_cbae3054f1635d5ab0645054f8bbd45b)()const= &::statiskit::UnivariateData::compute_minimum;
class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateData::*method_pointer_6114a404726e5acdafff1da68ca6210d)()const= &::statiskit::UnivariateData::compute_maximum;

namespace autowig {
}

void wrapper_2513f8d88792503e97d2b3f6b8c31e6f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateData, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateData >::Type > class_2513f8d88792503e97d2b3f6b8c31e6f(module, "UnivariateData", "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("__len__", method_pointer_ccb6e82201a6558e9733151230bbc9af, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("__iter__", method_pointer_a33919ff84f759e6b649d1aea1a76e87, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("get_sample_space", method_pointer_21507917363a580db5491fa57b8df73d, pybind11::return_value_policy::reference_internal, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("copy", method_pointer_f924b25c6e335944a81f6073e12504ff, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("compute_total", method_pointer_e7311f0bb01b535d99e8bc70f058ae81, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("compute_minimum", method_pointer_cbae3054f1635d5ab0645054f8bbd45b, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("compute_maximum", method_pointer_6114a404726e5acdafff1da68ca6210d, "");

}