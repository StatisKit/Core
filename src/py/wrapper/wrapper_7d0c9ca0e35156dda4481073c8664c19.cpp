#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::MixtureDistribution;

            typedef void  return_type_246a8d3423cf5748b68f545f10de89b7;
            typedef ::statiskit::Index const & param_246a8d3423cf5748b68f545f10de89b7_0_type;
            typedef struct ::statiskit::DiscreteUnivariateDistribution const & param_246a8d3423cf5748b68f545f10de89b7_1_type;
            virtual return_type_246a8d3423cf5748b68f545f10de89b7 set_observation(param_246a8d3423cf5748b68f545f10de89b7_0_type param_0, param_246a8d3423cf5748b68f545f10de89b7_1_type param_1) override { PYBIND11_OVERLOAD(return_type_246a8d3423cf5748b68f545f10de89b7, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_f927fce3d16b5492bcef59bbf039772b;
            virtual return_type_f927fce3d16b5492bcef59bbf039772b get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_f927fce3d16b5492bcef59bbf039772b, class_type, get_nb_parameters, ); };
            typedef double  return_type_c6a8fd2e5dc454c89e463671fdf91f3e;
            virtual return_type_c6a8fd2e5dc454c89e463671fdf91f3e get_variance() const override { PYBIND11_OVERLOAD_PURE(return_type_c6a8fd2e5dc454c89e463671fdf91f3e, class_type, get_variance, ); };
            typedef double  return_type_9fdf92df3e8c5e0e85306b85eb662025;
            virtual return_type_9fdf92df3e8c5e0e85306b85eb662025 get_mean() const override { PYBIND11_OVERLOAD_PURE(return_type_9fdf92df3e8c5e0e85306b85eb662025, class_type, get_mean, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_9b1e41d78cb15fb485b076a8136faf6b;
            virtual return_type_9b1e41d78cb15fb485b076a8136faf6b simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_9b1e41d78cb15fb485b076a8136faf6b, class_type, simulate, ); };
            typedef int  return_type_0f752a27239a55e4a5244da5bea67286;
            typedef double const & param_0f752a27239a55e4a5244da5bea67286_0_type;
            virtual return_type_0f752a27239a55e4a5244da5bea67286 quantile(param_0f752a27239a55e4a5244da5bea67286_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_0f752a27239a55e4a5244da5bea67286, class_type, quantile, param_0); };
            typedef double  return_type_b8cb3c3bef9a57b0b9e80ef518f215b7;
            typedef int const & param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type;
            virtual return_type_b8cb3c3bef9a57b0b9e80ef518f215b7 cdf(param_b8cb3c3bef9a57b0b9e80ef518f215b7_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_b8cb3c3bef9a57b0b9e80ef518f215b7, class_type, cdf, param_0); };
            typedef double  return_type_e743676180d85397828cc79f44d4d185;
            typedef int const & param_e743676180d85397828cc79f44d4d185_0_type;
            virtual return_type_e743676180d85397828cc79f44d4d185 pdf(param_e743676180d85397828cc79f44d4d185_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e743676180d85397828cc79f44d4d185, class_type, pdf, param_0); };
            typedef double  return_type_e31fb7a7a5b852af9574d7d8bac3da21;
            typedef int const & param_e31fb7a7a5b852af9574d7d8bac3da21_0_type;
            virtual return_type_e31fb7a7a5b852af9574d7d8bac3da21 ldf(param_e31fb7a7a5b852af9574d7d8bac3da21_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e31fb7a7a5b852af9574d7d8bac3da21, class_type, ldf, param_0); };
            typedef double  return_type_c3377d2e9b535f76985d786c2f3a6fe0;
            typedef struct ::statiskit::UnivariateEvent const * param_c3377d2e9b535f76985d786c2f3a6fe0_0_type;
            typedef bool const & param_c3377d2e9b535f76985d786c2f3a6fe0_1_type;
            virtual return_type_c3377d2e9b535f76985d786c2f3a6fe0 probability(param_c3377d2e9b535f76985d786c2f3a6fe0_0_type param_0, param_c3377d2e9b535f76985d786c2f3a6fe0_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c3377d2e9b535f76985d786c2f3a6fe0, class_type, probability, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_53a1ee3f2d3855c880f2c08bcae5c0ae)()const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_nb_states;
struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_4a38963b449e5930b798825c4b60941a)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_246a8d3423cf5748b68f545f10de89b7)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_4a30aea4a63c5f25b68ece79845270e4)()const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_7d8c2a10d3c05b92ac6405acab6c0f44)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_2fb11bb0a2485540a23ef1fb88f9ee3a)(struct ::statiskit::UnivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_23361478d0755a63b1f88ffcadd164e4)(struct ::statiskit::UnivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::assignment;
class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_53b7d3603a8754c6ad42211b2b9d9e7d)(struct ::statiskit::UnivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_a3ff30a188f45403b73a68db67aa2b5e)(struct ::statiskit::UnivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_da2a6ab77d635d259b7452eed4ed7fd1)(struct ::statiskit::UnivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::uncertainty;

namespace autowig {
}

void wrapper_7d0c9ca0e35156dda4481073c8664c19(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, struct ::statiskit::DiscreteUnivariateDistribution > class_7d0c9ca0e35156dda4481073c8664c19(module, "_MixtureDistribution_7d0c9ca0e35156dda4481073c8664c19", "");
    class_7d0c9ca0e35156dda4481073c8664c19.def(pybind11::init<  >());
    class_7d0c9ca0e35156dda4481073c8664c19.def("get_nb_states", method_pointer_53a1ee3f2d3855c880f2c08bcae5c0ae, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("get_observation", method_pointer_4a38963b449e5930b798825c4b60941a, pybind11::return_value_policy::reference_internal, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("set_observation", method_pointer_246a8d3423cf5748b68f545f10de89b7, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("get_pi", method_pointer_4a30aea4a63c5f25b68ece79845270e4, pybind11::return_value_policy::copy, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("set_pi", method_pointer_7d8c2a10d3c05b92ac6405acab6c0f44, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("posterior", method_pointer_2fb11bb0a2485540a23ef1fb88f9ee3a, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("assignment", method_pointer_23361478d0755a63b1f88ffcadd164e4, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("assignment", method_pointer_53b7d3603a8754c6ad42211b2b9d9e7d, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("uncertainty", method_pointer_a3ff30a188f45403b73a68db67aa2b5e, "");
    class_7d0c9ca0e35156dda4481073c8664c19.def("uncertainty", method_pointer_da2a6ab77d635d259b7452eed4ed7fd1, "");

}