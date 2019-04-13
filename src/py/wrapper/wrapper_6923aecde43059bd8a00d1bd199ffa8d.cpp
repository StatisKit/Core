#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::MixtureDistribution;

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
            typedef double  return_type_30c20faf3f5a515d9541c73f1eb020df;
            typedef double const & param_30c20faf3f5a515d9541c73f1eb020df_0_type;
            virtual return_type_30c20faf3f5a515d9541c73f1eb020df pdf(param_30c20faf3f5a515d9541c73f1eb020df_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_30c20faf3f5a515d9541c73f1eb020df, class_type, pdf, param_0); };
            typedef double  return_type_2843df1d3dc6596aaccccc3a0dd5da36;
            typedef double const & param_2843df1d3dc6596aaccccc3a0dd5da36_0_type;
            virtual return_type_2843df1d3dc6596aaccccc3a0dd5da36 ldf(param_2843df1d3dc6596aaccccc3a0dd5da36_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_2843df1d3dc6596aaccccc3a0dd5da36, class_type, ldf, param_0); };
            typedef double  return_type_c3090cef11805fc1858df60ff42a7c43;
            typedef struct ::statiskit::UnivariateEvent const * param_c3090cef11805fc1858df60ff42a7c43_0_type;
            typedef bool const & param_c3090cef11805fc1858df60ff42a7c43_1_type;
            virtual return_type_c3090cef11805fc1858df60ff42a7c43 probability(param_c3090cef11805fc1858df60ff42a7c43_0_type param_0, param_c3090cef11805fc1858df60ff42a7c43_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3090cef11805fc1858df60ff42a7c43, class_type, probability, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_320fcafd931d58898fc5be99cb1979fe;
            virtual return_type_320fcafd931d58898fc5be99cb1979fe simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_320fcafd931d58898fc5be99cb1979fe, class_type, simulate, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_2a504856d2c858cca8491fe9463d0520)()const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_nb_states;
struct ::statiskit::ContinuousUnivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_44658d1974bf53e8a85fea9cdfa12d12)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_fe72b6c262c3548dacae3bf46cc847fe)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_c8a88e488e405d65a5050e025ffcdfed)()const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_1157cb20a6ba50f4ac122a4073e4d233)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_33dc9480a07659b98c327385a72a25fd)(struct ::statiskit::UnivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_b74fe6a6e4715bb59583c5934d1296a1)(struct ::statiskit::UnivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::assignment;
class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_217ee43044b0593682e33e25cbb132fe)(struct ::statiskit::UnivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_e300d1f555145a39b36187e8d3d9f24b)(struct ::statiskit::UnivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_7219e901927a56de8ce0b8348229839c)(struct ::statiskit::UnivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::uncertainty;

namespace autowig {
}

void wrapper_6923aecde43059bd8a00d1bd199ffa8d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, struct ::statiskit::ContinuousUnivariateDistribution > class_6923aecde43059bd8a00d1bd199ffa8d(module, "_MixtureDistribution_6923aecde43059bd8a00d1bd199ffa8d", "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def(pybind11::init<  >());
    class_6923aecde43059bd8a00d1bd199ffa8d.def("get_nb_states", method_pointer_2a504856d2c858cca8491fe9463d0520, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("get_observation", method_pointer_44658d1974bf53e8a85fea9cdfa12d12, pybind11::return_value_policy::reference_internal, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("set_observation", method_pointer_fe72b6c262c3548dacae3bf46cc847fe, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("get_pi", method_pointer_c8a88e488e405d65a5050e025ffcdfed, pybind11::return_value_policy::copy, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("set_pi", method_pointer_1157cb20a6ba50f4ac122a4073e4d233, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("posterior", method_pointer_33dc9480a07659b98c327385a72a25fd, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("assignment", method_pointer_b74fe6a6e4715bb59583c5934d1296a1, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("assignment", method_pointer_217ee43044b0593682e33e25cbb132fe, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("uncertainty", method_pointer_e300d1f555145a39b36187e8d3d9f24b, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("uncertainty", method_pointer_7219e901927a56de8ce0b8348229839c, "");

}