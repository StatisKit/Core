#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::UnivariateMixtureDistribution;


        public:
            typedef void  return_type_fe72b6c262c3548dacae3bf46cc847fe;
            typedef ::statiskit::Index const & param_fe72b6c262c3548dacae3bf46cc847fe_0_type;
            typedef struct ::statiskit::ContinuousUnivariateDistribution const & param_fe72b6c262c3548dacae3bf46cc847fe_1_type;
            virtual return_type_fe72b6c262c3548dacae3bf46cc847fe set_observation(param_fe72b6c262c3548dacae3bf46cc847fe_0_type param_0, param_fe72b6c262c3548dacae3bf46cc847fe_1_type param_1) override { PYBIND11_OVERLOAD(return_type_fe72b6c262c3548dacae3bf46cc847fe, class_type, set_observation, param_0, param_1); };

        public:
            typedef double  return_type_17d4a13bc764561299d331907516003f;
            virtual return_type_17d4a13bc764561299d331907516003f get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_17d4a13bc764561299d331907516003f, class_type, get_variance, ); };

        public:
            typedef double  return_type_cb42091f4cb35419b13eb0e0c27eb470;
            virtual return_type_cb42091f4cb35419b13eb0e0c27eb470 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_cb42091f4cb35419b13eb0e0c27eb470, class_type, get_mean, ); };

        public:
            typedef double  return_type_32217c345e3d5454a2e46058d702ce84;
            typedef double const & param_32217c345e3d5454a2e46058d702ce84_0_type;
            virtual return_type_32217c345e3d5454a2e46058d702ce84 quantile(param_32217c345e3d5454a2e46058d702ce84_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_32217c345e3d5454a2e46058d702ce84, class_type, quantile, param_0); };

        public:
            typedef double  return_type_3e9327a27cc259a1a813cf253bd84642;
            typedef double const & param_3e9327a27cc259a1a813cf253bd84642_0_type;
            virtual return_type_3e9327a27cc259a1a813cf253bd84642 cdf(param_3e9327a27cc259a1a813cf253bd84642_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_3e9327a27cc259a1a813cf253bd84642, class_type, cdf, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}


namespace autowig {
}

void wrapper_61234f1033f25f108ec6c1bb0d3ddf38(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > class_61234f1033f25f108ec6c1bb0d3ddf38(module, "_UnivariateMixtureDistribution_61234f1033f25f108ec6c1bb0d3ddf38", "");
    class_61234f1033f25f108ec6c1bb0d3ddf38.def(pybind11::init<  >());

}