#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::MixtureDistribution;


        public:
            typedef void  return_type_b53a6340c14552d5865d67a55ffa953b;
            typedef ::statiskit::Index const & param_b53a6340c14552d5865d67a55ffa953b_0_type;
            typedef struct ::statiskit::CategoricalMultivariateDistribution const & param_b53a6340c14552d5865d67a55ffa953b_1_type;
            virtual return_type_b53a6340c14552d5865d67a55ffa953b set_observation(param_b53a6340c14552d5865d67a55ffa953b_0_type param_0, param_b53a6340c14552d5865d67a55ffa953b_1_type param_1) override { PYBIND11_OVERLOAD(return_type_b53a6340c14552d5865d67a55ffa953b, class_type, set_observation, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  return_type_bfcc78e34f6259b6a33f959f459c73aa;
            virtual return_type_bfcc78e34f6259b6a33f959f459c73aa copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bfcc78e34f6259b6a33f959f459c73aa, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_4ea4050829d754ffad293bbb7a971a31;
            virtual return_type_4ea4050829d754ffad293bbb7a971a31 simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4ea4050829d754ffad293bbb7a971a31, class_type, simulate, ); };

        public:
            typedef double  return_type_1b1aa04affe25769a45aa61f808a0a19;
            typedef struct ::statiskit::MultivariateEvent const * param_1b1aa04affe25769a45aa61f808a0a19_0_type;
            typedef bool const & param_1b1aa04affe25769a45aa61f808a0a19_1_type;
            virtual return_type_1b1aa04affe25769a45aa61f808a0a19 probability(param_1b1aa04affe25769a45aa61f808a0a19_0_type param_0, param_1b1aa04affe25769a45aa61f808a0a19_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_1b1aa04affe25769a45aa61f808a0a19, class_type, probability, param_0, param_1); };

        public:
            typedef ::statiskit::Index  return_type_6bbdbd5137365f409e51be059aaa5dec;
            virtual return_type_6bbdbd5137365f409e51be059aaa5dec get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_6bbdbd5137365f409e51be059aaa5dec, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_23bbb2ea83bb5e62a3af21e8a9994303)()const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_nb_states;
struct ::statiskit::CategoricalMultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_e9c2029eacbe535891524cc513f9a7d1)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_b53a6340c14552d5865d67a55ffa953b)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_93cae38f6e695dedba0f0a5d1d3ffee2)()const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_6800c3ec1e5c5f249d955d569fcf0e5f)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_751325880b50538aad1c4cd8df410258)(struct ::statiskit::MultivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_62c3d770ba2e54f28be03db03701fd0e)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::assignment;
class ::std::vector< statiskit::Index, class ::std::allocator< statiskit::Index > >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_330bf5a374735b7ea0f7d833524f0a5b)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_04a46ebfe9ff5acea85c197697fb2e98)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_6d50dd7acd8d5577a073436325d17eab)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::uncertainty;

namespace autowig {
}

void wrapper_dcb42c58c45353839bf4d081d804b14c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, struct ::statiskit::CategoricalMultivariateDistribution > class_dcb42c58c45353839bf4d081d804b14c(module, "_MixtureDistribution_dcb42c58c45353839bf4d081d804b14c", "");
    class_dcb42c58c45353839bf4d081d804b14c.def(pybind11::init<  >());
    class_dcb42c58c45353839bf4d081d804b14c.def("get_nb_states", method_pointer_23bbb2ea83bb5e62a3af21e8a9994303, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("get_observation", method_pointer_e9c2029eacbe535891524cc513f9a7d1, pybind11::return_value_policy::reference_internal, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("set_observation", method_pointer_b53a6340c14552d5865d67a55ffa953b, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("get_pi", method_pointer_93cae38f6e695dedba0f0a5d1d3ffee2, pybind11::return_value_policy::copy, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("set_pi", method_pointer_6800c3ec1e5c5f249d955d569fcf0e5f, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("posterior", method_pointer_751325880b50538aad1c4cd8df410258, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("assignment", method_pointer_62c3d770ba2e54f28be03db03701fd0e, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("assignment", method_pointer_330bf5a374735b7ea0f7d833524f0a5b, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("uncertainty", method_pointer_04a46ebfe9ff5acea85c197697fb2e98, "");
    class_dcb42c58c45353839bf4d081d804b14c.def("uncertainty", method_pointer_6d50dd7acd8d5577a073436325d17eab, "");

}