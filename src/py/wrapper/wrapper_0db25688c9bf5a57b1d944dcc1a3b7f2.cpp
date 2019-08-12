#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::UnivariateFrequencyDistribution;


        public:
            typedef double  return_type_c6a8fd2e5dc454c89e463671fdf91f3e;
            virtual return_type_c6a8fd2e5dc454c89e463671fdf91f3e get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_c6a8fd2e5dc454c89e463671fdf91f3e, class_type, get_variance, ); };

        public:
            typedef double  return_type_9fdf92df3e8c5e0e85306b85eb662025;
            virtual return_type_9fdf92df3e8c5e0e85306b85eb662025 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_9fdf92df3e8c5e0e85306b85eb662025, class_type, get_mean, ); };

        public:
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };

        public:
            typedef double  return_type_b8cb3c3bef9a57b0b9e80ef518f215b7;
            typedef int const & param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type;
            virtual return_type_b8cb3c3bef9a57b0b9e80ef518f215b7 cdf(param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_b8cb3c3bef9a57b0b9e80ef518f215b7, class_type, cdf, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}

class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > >  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_ff0fdbf1911859b386bd2e6729ed5dab)()const= &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_values;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_8242d0fe52705f359e32b878263759b8)()const= &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_pi;
void  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_3d5a80eee94a5718ad99cdb71df3839c)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_pi;

namespace autowig {
}

void wrapper_0db25688c9bf5a57b1d944dcc1a3b7f2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, struct ::statiskit::DiscreteUnivariateDistribution > class_0db25688c9bf5a57b1d944dcc1a3b7f2(module, "_UnivariateFrequencyDistribution_0db25688c9bf5a57b1d944dcc1a3b7f2", "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def(pybind11::init<  >());
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("get_values", method_pointer_ff0fdbf1911859b386bd2e6729ed5dab, "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("get_pi", method_pointer_8242d0fe52705f359e32b878263759b8, pybind11::return_value_policy::copy, "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("set_pi", method_pointer_3d5a80eee94a5718ad99cdb71df3839c, "");

}