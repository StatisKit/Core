#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::PolymorphicCopy;


        public:
            typedef void  return_type_be0a79cf74985b8a9b7c9f627f3c9346;
            typedef ::statiskit::Index const & param_be0a79cf74985b8a9b7c9f627f3c9346_0_type;
            typedef struct ::statiskit::ContinuousMultivariateDistribution const & param_be0a79cf74985b8a9b7c9f627f3c9346_1_type;
            virtual return_type_be0a79cf74985b8a9b7c9f627f3c9346 set_observation(param_be0a79cf74985b8a9b7c9f627f3c9346_0_type param_0, param_be0a79cf74985b8a9b7c9f627f3c9346_1_type param_1) override { PYBIND11_OVERLOAD(return_type_be0a79cf74985b8a9b7c9f627f3c9346, class_type, set_observation, param_0, param_1); };

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

void wrapper_d09bc728f19c5db5a6f8091c4c6d9f2b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > class_d09bc728f19c5db5a6f8091c4c6d9f2b(module, "_PolymorphicCopy_d09bc728f19c5db5a6f8091c4c6d9f2b", "");
    class_d09bc728f19c5db5a6f8091c4c6d9f2b.def(pybind11::init<  >());

}