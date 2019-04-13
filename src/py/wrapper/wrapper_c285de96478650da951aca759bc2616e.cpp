#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_a4b7a69c09035fa9b547fc42980b79e0;
            virtual return_type_a4b7a69c09035fa9b547fc42980b79e0 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_a4b7a69c09035fa9b547fc42980b79e0, class_type, copy, ); };
            typedef double  return_type_f235f53d7b8f5b4fbad21d4284b2f2d8;
            virtual return_type_f235f53d7b8f5b4fbad21d4284b2f2d8 get_variance() const override { PYBIND11_OVERLOAD(return_type_f235f53d7b8f5b4fbad21d4284b2f2d8, class_type, get_variance, ); };
            typedef double  return_type_fe2975161b6758f3bc67e5c9cf1c912d;
            virtual return_type_fe2975161b6758f3bc67e5c9cf1c912d get_mean() const override { PYBIND11_OVERLOAD(return_type_fe2975161b6758f3bc67e5c9cf1c912d, class_type, get_mean, ); };
            typedef double  return_type_13b291014f9656599dba7f710c381612;
            typedef double const & param_13b291014f9656599dba7f710c381612_0_type;
            virtual return_type_13b291014f9656599dba7f710c381612 cdf(param_13b291014f9656599dba7f710c381612_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_13b291014f9656599dba7f710c381612, class_type, cdf, param_0); };
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
            typedef double  return_type_32217c345e3d5454a2e46058d702ce84;
            typedef double const & param_32217c345e3d5454a2e46058d702ce84_0_type;
            virtual return_type_32217c345e3d5454a2e46058d702ce84 quantile(param_32217c345e3d5454a2e46058d702ce84_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_32217c345e3d5454a2e46058d702ce84, class_type, quantile, param_0); };
            typedef double  return_type_c3090cef11805fc1858df60ff42a7c43;
            typedef struct ::statiskit::UnivariateEvent const * param_c3090cef11805fc1858df60ff42a7c43_0_type;
            typedef bool const & param_c3090cef11805fc1858df60ff42a7c43_1_type;
            virtual return_type_c3090cef11805fc1858df60ff42a7c43 probability(param_c3090cef11805fc1858df60ff42a7c43_0_type param_0, param_c3090cef11805fc1858df60ff42a7c43_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3090cef11805fc1858df60ff42a7c43, class_type, probability, param_0, param_1); };
    };
}


namespace autowig {
}

void wrapper_c285de96478650da951aca759bc2616e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::Type, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > class_c285de96478650da951aca759bc2616e(module, "_PolymorphicCopy_c285de96478650da951aca759bc2616e", "");
    class_c285de96478650da951aca759bc2616e.def(pybind11::init<  >());

}