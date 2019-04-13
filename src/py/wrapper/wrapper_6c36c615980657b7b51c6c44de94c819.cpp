#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  return_type_61603fcc9028554ca7ca4d0e23c17a66;
            virtual return_type_61603fcc9028554ca7ca4d0e23c17a66 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_61603fcc9028554ca7ca4d0e23c17a66, class_type, copy, ); };
            typedef void  return_type_aa55c43f01ef52f5ba9860c09e507b24;
            typedef ::statiskit::Index const & param_aa55c43f01ef52f5ba9860c09e507b24_0_type;
            typedef struct ::statiskit::MultivariateDistribution const & param_aa55c43f01ef52f5ba9860c09e507b24_1_type;
            virtual return_type_aa55c43f01ef52f5ba9860c09e507b24 set_observation(param_aa55c43f01ef52f5ba9860c09e507b24_0_type param_0, param_aa55c43f01ef52f5ba9860c09e507b24_1_type param_1) override { PYBIND11_OVERLOAD(return_type_aa55c43f01ef52f5ba9860c09e507b24, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_6e99058bcb4a57cc9521a3183f72ee79;
            virtual return_type_6e99058bcb4a57cc9521a3183f72ee79 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_6e99058bcb4a57cc9521a3183f72ee79, class_type, get_nb_parameters, ); };
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


namespace autowig {
}

void wrapper_6c36c615980657b7b51c6c44de94c819(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > class_6c36c615980657b7b51c6c44de94c819(module, "_PolymorphicCopy_6c36c615980657b7b51c6c44de94c819", "");
    class_6c36c615980657b7b51c6c44de94c819.def(pybind11::init<  >());

}