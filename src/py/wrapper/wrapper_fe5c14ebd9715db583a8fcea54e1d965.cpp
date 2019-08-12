#include "_core.h"

namespace autowig
{
    typedef ::statiskit::WeightedMultivariateData class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::WeightedMultivariateData::WeightedMultivariateData;


        public:
            typedef double  return_type_7da327a8236953bdbdbe7d839fab134b;
            typedef ::statiskit::Index const & param_7da327a8236953bdbdbe7d839fab134b_0_type;
            virtual return_type_7da327a8236953bdbdbe7d839fab134b get_weight(param_7da327a8236953bdbdbe7d839fab134b_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_7da327a8236953bdbdbe7d839fab134b, class_type, get_weight, param_0); };

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
            typedef ::statiskit::Index  return_type_9a45dee4cb885178bcb89ced8cb3face;
            virtual return_type_9a45dee4cb885178bcb89ced8cb3face get_nb_events() const override { PYBIND11_OVERLOAD(return_type_9a45dee4cb885178bcb89ced8cb3face, class_type, get_nb_events, ); };
    };
}


namespace autowig {
}

void wrapper_fe5c14ebd9715db583a8fcea54e1d965(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedMultivariateData, autowig::Trampoline, autowig::HolderType< class ::statiskit::WeightedMultivariateData >::Type, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > class_fe5c14ebd9715db583a8fcea54e1d965(module, "WeightedMultivariateData", "");

}