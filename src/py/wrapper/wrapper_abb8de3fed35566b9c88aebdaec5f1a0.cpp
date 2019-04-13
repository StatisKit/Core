#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  return_type_5ffb2d1e87a256369b8d70fb5cea4fb5;
            virtual return_type_5ffb2d1e87a256369b8d70fb5cea4fb5 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_5ffb2d1e87a256369b8d70fb5cea4fb5, class_type, copy, ); };
            typedef void  return_type_68960ed00cc65811a690382a0d67ba31;
            typedef ::statiskit::Index const & param_68960ed00cc65811a690382a0d67ba31_0_type;
            typedef struct ::statiskit::SingularDistribution const & param_68960ed00cc65811a690382a0d67ba31_1_type;
            virtual return_type_68960ed00cc65811a690382a0d67ba31 set_observation(param_68960ed00cc65811a690382a0d67ba31_0_type param_0, param_68960ed00cc65811a690382a0d67ba31_1_type param_1) override { PYBIND11_OVERLOAD(return_type_68960ed00cc65811a690382a0d67ba31, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_9126658cc9765bad8e36a6634f617e9c;
            virtual return_type_9126658cc9765bad8e36a6634f617e9c get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_9126658cc9765bad8e36a6634f617e9c, class_type, get_nb_parameters, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_48a21906343659d38a01df937deeb28c;
            typedef unsigned int  param_48a21906343659d38a01df937deeb28c_0_type;
            virtual return_type_48a21906343659d38a01df937deeb28c simulate(param_48a21906343659d38a01df937deeb28c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48a21906343659d38a01df937deeb28c, class_type, simulate, param_0); };
            typedef double  return_type_acdea368f48f572bb000ce0a3e887539;
            typedef struct ::statiskit::MultivariateEvent const * param_acdea368f48f572bb000ce0a3e887539_0_type;
            typedef bool const & param_acdea368f48f572bb000ce0a3e887539_1_type;
            virtual return_type_acdea368f48f572bb000ce0a3e887539 probability(param_acdea368f48f572bb000ce0a3e887539_0_type param_0, param_acdea368f48f572bb000ce0a3e887539_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_acdea368f48f572bb000ce0a3e887539, class_type, probability, param_0, param_1); };
            typedef ::statiskit::Index  return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901;
            virtual return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901 get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901, class_type, get_nb_components, ); };
    };
}


namespace autowig {
}

void wrapper_abb8de3fed35566b9c88aebdaec5f1a0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > class_abb8de3fed35566b9c88aebdaec5f1a0(module, "_PolymorphicCopy_abb8de3fed35566b9c88aebdaec5f1a0", "");
    class_abb8de3fed35566b9c88aebdaec5f1a0.def(pybind11::init<  >());

}