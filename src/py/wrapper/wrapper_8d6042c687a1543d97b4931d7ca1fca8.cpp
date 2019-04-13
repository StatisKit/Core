#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::MixtureDistribution;

            typedef void  return_type_d15c4654ed8057b88112aca660e855c0;
            typedef ::statiskit::Index const & param_d15c4654ed8057b88112aca660e855c0_0_type;
            typedef struct ::statiskit::DiscreteMultivariateDistribution const & param_d15c4654ed8057b88112aca660e855c0_1_type;
            virtual return_type_d15c4654ed8057b88112aca660e855c0 set_observation(param_d15c4654ed8057b88112aca660e855c0_0_type param_0, param_d15c4654ed8057b88112aca660e855c0_1_type param_1) override { PYBIND11_OVERLOAD(return_type_d15c4654ed8057b88112aca660e855c0, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_a5eee15fa89057319b8035eaa5bfa737;
            virtual return_type_a5eee15fa89057319b8035eaa5bfa737 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_a5eee15fa89057319b8035eaa5bfa737, class_type, get_nb_parameters, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  return_type_bfcc78e34f6259b6a33f959f459c73aa;
            virtual return_type_bfcc78e34f6259b6a33f959f459c73aa copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bfcc78e34f6259b6a33f959f459c73aa, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_4ea4050829d754ffad293bbb7a971a31;
            virtual return_type_4ea4050829d754ffad293bbb7a971a31 simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4ea4050829d754ffad293bbb7a971a31, class_type, simulate, ); };
            typedef double  return_type_1b1aa04affe25769a45aa61f808a0a19;
            typedef struct ::statiskit::MultivariateEvent const * param_1b1aa04affe25769a45aa61f808a0a19_0_type;
            typedef bool const & param_1b1aa04affe25769a45aa61f808a0a19_1_type;
            virtual return_type_1b1aa04affe25769a45aa61f808a0a19 probability(param_1b1aa04affe25769a45aa61f808a0a19_0_type param_0, param_1b1aa04affe25769a45aa61f808a0a19_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_1b1aa04affe25769a45aa61f808a0a19, class_type, probability, param_0, param_1); };
            typedef ::statiskit::Index  return_type_6bbdbd5137365f409e51be059aaa5dec;
            virtual return_type_6bbdbd5137365f409e51be059aaa5dec get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_6bbdbd5137365f409e51be059aaa5dec, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_a84f48080c9e51648e06a3d2a7efeaed)()const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_nb_states;
struct ::statiskit::DiscreteMultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_466bff1d08ef51beacbfda3368e92ee8)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_d15c4654ed8057b88112aca660e855c0)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_2b49ca2193805fee9ca87248802050e0)()const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_07e0018ec5b751b7bba04dbd50815753)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_2cd6c078416e568799bab23dfb509e2f)(struct ::statiskit::MultivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_b228d8d88e9b5bb4b32da69c87abc7dc)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::assignment;
class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_f9d07f1dafa95a2582d11d0afb166d3a)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_5ec1f291269a5a61a3a8ad54a8af8fad)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_ad794feca936536a9d56d44c7b798eb2)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::uncertainty;

namespace autowig {
}

void wrapper_8d6042c687a1543d97b4931d7ca1fca8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, struct ::statiskit::DiscreteMultivariateDistribution > class_8d6042c687a1543d97b4931d7ca1fca8(module, "_MixtureDistribution_8d6042c687a1543d97b4931d7ca1fca8", "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def(pybind11::init<  >());
    class_8d6042c687a1543d97b4931d7ca1fca8.def("get_nb_states", method_pointer_a84f48080c9e51648e06a3d2a7efeaed, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("get_observation", method_pointer_466bff1d08ef51beacbfda3368e92ee8, pybind11::return_value_policy::reference_internal, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("set_observation", method_pointer_d15c4654ed8057b88112aca660e855c0, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("get_pi", method_pointer_2b49ca2193805fee9ca87248802050e0, pybind11::return_value_policy::copy, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("set_pi", method_pointer_07e0018ec5b751b7bba04dbd50815753, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("posterior", method_pointer_2cd6c078416e568799bab23dfb509e2f, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("assignment", method_pointer_b228d8d88e9b5bb4b32da69c87abc7dc, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("assignment", method_pointer_f9d07f1dafa95a2582d11d0afb166d3a, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("uncertainty", method_pointer_5ec1f291269a5a61a3a8ad54a8af8fad, "");
    class_8d6042c687a1543d97b4931d7ca1fca8.def("uncertainty", method_pointer_ad794feca936536a9d56d44c7b798eb2, "");

}