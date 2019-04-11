#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::PolymorphicCopy;


        public:
            typedef void  return_type_b53a6340c14552d5865d67a55ffa953b;
            typedef ::statiskit::Index const & param_b53a6340c14552d5865d67a55ffa953b_0_type;
            typedef struct ::statiskit::CategoricalMultivariateDistribution const & param_b53a6340c14552d5865d67a55ffa953b_1_type;
            virtual return_type_b53a6340c14552d5865d67a55ffa953b set_observation(param_b53a6340c14552d5865d67a55ffa953b_0_type param_0, param_b53a6340c14552d5865d67a55ffa953b_1_type param_1) override { PYBIND11_OVERLOAD(return_type_b53a6340c14552d5865d67a55ffa953b, class_type, set_observation, param_0, param_1); };

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


namespace autowig {
}

void wrapper_a3883be24c8c5dd1bcba4dff4ebd0c4f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > class_a3883be24c8c5dd1bcba4dff4ebd0c4f(module, "_PolymorphicCopy_a3883be24c8c5dd1bcba4dff4ebd0c4f", "");
    class_a3883be24c8c5dd1bcba4dff4ebd0c4f.def(pybind11::init<  >());

}