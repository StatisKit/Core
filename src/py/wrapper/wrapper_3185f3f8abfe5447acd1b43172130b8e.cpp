#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_0def23e37b8e561c9b9ff59c00924f09;
            virtual return_type_0def23e37b8e561c9b9ff59c00924f09 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_0def23e37b8e561c9b9ff59c00924f09, class_type, copy, ); };
            typedef double  return_type_7da327a8236953bdbdbe7d839fab134b;
            typedef ::statiskit::Index const & param_7da327a8236953bdbdbe7d839fab134b_0_type;
            virtual return_type_7da327a8236953bdbdbe7d839fab134b get_weight(param_7da327a8236953bdbdbe7d839fab134b_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_7da327a8236953bdbdbe7d839fab134b, class_type, get_weight, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  return_type_db766366b24e53159689129a8160deae;
            virtual return_type_db766366b24e53159689129a8160deae generator() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_db766366b24e53159689129a8160deae, class_type, generator, ); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_b5f43de177835cf7a8332223a0439efa;
            virtual return_type_b5f43de177835cf7a8332223a0439efa get_sample_space() const override { PYBIND11_OVERLOAD(return_type_b5f43de177835cf7a8332223a0439efa, class_type, get_sample_space, ); };
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


namespace autowig {
}

void wrapper_3185f3f8abfe5447acd1b43172130b8e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >::Type, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > class_3185f3f8abfe5447acd1b43172130b8e(module, "_PolymorphicCopy_3185f3f8abfe5447acd1b43172130b8e", "");
    class_3185f3f8abfe5447acd1b43172130b8e.def(pybind11::init<  >());

}