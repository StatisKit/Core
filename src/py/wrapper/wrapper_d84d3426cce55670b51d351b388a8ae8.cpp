#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_6297c3d2b63f55c6978039eca42dfda2;
            virtual return_type_6297c3d2b63f55c6978039eca42dfda2 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_6297c3d2b63f55c6978039eca42dfda2, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_6458b57af188571eb3d4621eb252540b;
            typedef ::statiskit::Indices const & param_6458b57af188571eb3d4621eb252540b_0_type;
            virtual return_type_6458b57af188571eb3d4621eb252540b extract(param_6458b57af188571eb3d4621eb252540b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_6458b57af188571eb3d4621eb252540b, class_type, extract, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_03ae26ff6e5c56ac9c1e8dc84d177549;
            typedef ::statiskit::Index const & param_03ae26ff6e5c56ac9c1e8dc84d177549_0_type;
            virtual return_type_03ae26ff6e5c56ac9c1e8dc84d177549 extract(param_03ae26ff6e5c56ac9c1e8dc84d177549_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_03ae26ff6e5c56ac9c1e8dc84d177549, class_type, extract, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_2da46638257d59e48fa1636c64d254bf;
            virtual return_type_2da46638257d59e48fa1636c64d254bf get_sample_space() const override { PYBIND11_OVERLOAD_PURE(return_type_2da46638257d59e48fa1636c64d254bf, class_type, get_sample_space, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  return_type_facf1de3504b5543b1eed987285d8673;
            virtual return_type_facf1de3504b5543b1eed987285d8673 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_facf1de3504b5543b1eed987285d8673, class_type, generator, ); };
            typedef ::statiskit::Index  return_type_e5fc456b4a2d5131b0cd3ab814baba49;
            virtual return_type_e5fc456b4a2d5131b0cd3ab814baba49 size() const override { PYBIND11_OVERLOAD(return_type_e5fc456b4a2d5131b0cd3ab814baba49, class_type, size, ); };
    };
}


namespace autowig {
}

void wrapper_d84d3426cce55670b51d351b388a8ae8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > >::Type, struct ::statiskit::MultivariateData > class_d84d3426cce55670b51d351b388a8ae8(module, "_PolymorphicCopy_d84d3426cce55670b51d351b388a8ae8", "");
    class_d84d3426cce55670b51d351b388a8ae8.def(pybind11::init<  >());

}