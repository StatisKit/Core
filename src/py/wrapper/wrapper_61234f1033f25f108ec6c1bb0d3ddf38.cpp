#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::UnivariateMixtureDistribution;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_0c52a93175f252e4abcc2a235d235887;
            virtual return_type_0c52a93175f252e4abcc2a235d235887 simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_0c52a93175f252e4abcc2a235d235887, class_type, simulate, ); };
            typedef double  return_type_62bf6274ec765d95bb7ed99f9665158b;
            typedef double const & param_62bf6274ec765d95bb7ed99f9665158b_0_type;
            virtual return_type_62bf6274ec765d95bb7ed99f9665158b pdf(param_62bf6274ec765d95bb7ed99f9665158b_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_62bf6274ec765d95bb7ed99f9665158b, class_type, pdf, param_0); };
            typedef double  return_type_c2f2633e3385585c93829c94dc639f88;
            typedef double const & param_c2f2633e3385585c93829c94dc639f88_0_type;
            virtual return_type_c2f2633e3385585c93829c94dc639f88 ldf(param_c2f2633e3385585c93829c94dc639f88_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_c2f2633e3385585c93829c94dc639f88, class_type, ldf, param_0); };
            typedef void  return_type_fe72b6c262c3548dacae3bf46cc847fe;
            typedef ::statiskit::Index const & param_fe72b6c262c3548dacae3bf46cc847fe_0_type;
            typedef struct ::statiskit::ContinuousUnivariateDistribution const & param_fe72b6c262c3548dacae3bf46cc847fe_1_type;
            virtual return_type_fe72b6c262c3548dacae3bf46cc847fe set_observation(param_fe72b6c262c3548dacae3bf46cc847fe_0_type param_0, param_fe72b6c262c3548dacae3bf46cc847fe_1_type param_1) override { PYBIND11_OVERLOAD(return_type_fe72b6c262c3548dacae3bf46cc847fe, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_043c7276ccec54e889284f954f337b87;
            virtual return_type_043c7276ccec54e889284f954f337b87 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_043c7276ccec54e889284f954f337b87, class_type, get_nb_parameters, ); };
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