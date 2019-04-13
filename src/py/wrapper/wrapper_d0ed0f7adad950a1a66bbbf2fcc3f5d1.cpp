#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_fc52469705645be59b8a970932051267;
            virtual return_type_fc52469705645be59b8a970932051267 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_fc52469705645be59b8a970932051267, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_669da265b4935e44a63e06a9f70d1d32;
            virtual return_type_669da265b4935e44a63e06a9f70d1d32 simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_669da265b4935e44a63e06a9f70d1d32, class_type, simulate, ); };
            typedef double  return_type_852d458d7fba5b81b3cae095814406be;
            typedef double const & param_852d458d7fba5b81b3cae095814406be_0_type;
            virtual return_type_852d458d7fba5b81b3cae095814406be pdf(param_852d458d7fba5b81b3cae095814406be_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_852d458d7fba5b81b3cae095814406be, class_type, pdf, param_0); };
            typedef double  return_type_2c40379c66475e45840820e5dddd4293;
            typedef double const & param_2c40379c66475e45840820e5dddd4293_0_type;
            virtual return_type_2c40379c66475e45840820e5dddd4293 ldf(param_2c40379c66475e45840820e5dddd4293_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_2c40379c66475e45840820e5dddd4293, class_type, ldf, param_0); };
            typedef unsigned int  return_type_d0ecd6cd3a865446a8d90c471aa257a3;
            virtual return_type_d0ecd6cd3a865446a8d90c471aa257a3 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_d0ecd6cd3a865446a8d90c471aa257a3, class_type, get_nb_parameters, ); };
            typedef double  return_type_17d4a13bc764561299d331907516003f;
            virtual return_type_17d4a13bc764561299d331907516003f get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_17d4a13bc764561299d331907516003f, class_type, get_variance, ); };
            typedef double  return_type_cb42091f4cb35419b13eb0e0c27eb470;
            virtual return_type_cb42091f4cb35419b13eb0e0c27eb470 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_cb42091f4cb35419b13eb0e0c27eb470, class_type, get_mean, ); };
            typedef double  return_type_32217c345e3d5454a2e46058d702ce84;
            typedef double const & param_32217c345e3d5454a2e46058d702ce84_0_type;
            virtual return_type_32217c345e3d5454a2e46058d702ce84 quantile(param_32217c345e3d5454a2e46058d702ce84_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_32217c345e3d5454a2e46058d702ce84, class_type, quantile, param_0); };
            typedef double  return_type_3e9327a27cc259a1a813cf253bd84642;
            typedef double const & param_3e9327a27cc259a1a813cf253bd84642_0_type;
            virtual return_type_3e9327a27cc259a1a813cf253bd84642 cdf(param_3e9327a27cc259a1a813cf253bd84642_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_3e9327a27cc259a1a813cf253bd84642, class_type, cdf, param_0); };
            typedef double  return_type_c3090cef11805fc1858df60ff42a7c43;
            typedef struct ::statiskit::UnivariateEvent const * param_c3090cef11805fc1858df60ff42a7c43_0_type;
            typedef bool const & param_c3090cef11805fc1858df60ff42a7c43_1_type;
            virtual return_type_c3090cef11805fc1858df60ff42a7c43 probability(param_c3090cef11805fc1858df60ff42a7c43_0_type param_0, param_c3090cef11805fc1858df60ff42a7c43_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3090cef11805fc1858df60ff42a7c43, class_type, probability, param_0, param_1); };
    };
}


namespace autowig {
}

void wrapper_d0ed0f7adad950a1a66bbbf2fcc3f5d1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::Type, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > class_d0ed0f7adad950a1a66bbbf2fcc3f5d1(module, "_PolymorphicCopy_d0ed0f7adad950a1a66bbbf2fcc3f5d1", "");
    class_d0ed0f7adad950a1a66bbbf2fcc3f5d1.def(pybind11::init<  >());

}