#include "_core.h"

namespace autowig
{
    typedef ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::QuantitativeUnivariateMixtureDistribution;


        public:
            typedef void  return_type_fe72b6c262c3548dacae3bf46cc847fe;
            typedef ::statiskit::Index const & param_fe72b6c262c3548dacae3bf46cc847fe_0_type;
            typedef struct ::statiskit::ContinuousUnivariateDistribution const & param_fe72b6c262c3548dacae3bf46cc847fe_1_type;
            virtual return_type_fe72b6c262c3548dacae3bf46cc847fe set_observation(param_fe72b6c262c3548dacae3bf46cc847fe_0_type param_0, param_fe72b6c262c3548dacae3bf46cc847fe_1_type param_1) override { PYBIND11_OVERLOAD(return_type_fe72b6c262c3548dacae3bf46cc847fe, class_type, set_observation, param_0, param_1); };

        public:
            typedef double  return_type_32217c345e3d5454a2e46058d702ce84;
            typedef double const & param_32217c345e3d5454a2e46058d702ce84_0_type;
            virtual return_type_32217c345e3d5454a2e46058d702ce84 quantile(param_32217c345e3d5454a2e46058d702ce84_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_32217c345e3d5454a2e46058d702ce84, class_type, quantile, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}


namespace autowig {
}

void wrapper_61733bdc2db95f128686b3292ae9259a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > class_61733bdc2db95f128686b3292ae9259a(module, "_QuantitativeUnivariateMixtureDistribution_61733bdc2db95f128686b3292ae9259a", "");
    class_61733bdc2db95f128686b3292ae9259a.def(pybind11::init<  >());

}