#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::SingularDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::MixtureDistribution;


        public:
            typedef void  return_type_68960ed00cc65811a690382a0d67ba31;
            typedef ::statiskit::Index const & param_68960ed00cc65811a690382a0d67ba31_0_type;
            typedef struct ::statiskit::SingularDistribution const & param_68960ed00cc65811a690382a0d67ba31_1_type;
            virtual return_type_68960ed00cc65811a690382a0d67ba31 set_observation(param_68960ed00cc65811a690382a0d67ba31_0_type param_0, param_68960ed00cc65811a690382a0d67ba31_1_type param_1) override { PYBIND11_OVERLOAD(return_type_68960ed00cc65811a690382a0d67ba31, class_type, set_observation, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  return_type_807318768a675f8fa96d2eb54a36c4df;
            virtual return_type_807318768a675f8fa96d2eb54a36c4df copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_807318768a675f8fa96d2eb54a36c4df, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_48a21906343659d38a01df937deeb28c;
            typedef unsigned int  param_48a21906343659d38a01df937deeb28c_0_type;
            virtual return_type_48a21906343659d38a01df937deeb28c simulate(param_48a21906343659d38a01df937deeb28c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48a21906343659d38a01df937deeb28c, class_type, simulate, param_0); };

        public:
            typedef double  return_type_acdea368f48f572bb000ce0a3e887539;
            typedef struct ::statiskit::MultivariateEvent const * param_acdea368f48f572bb000ce0a3e887539_0_type;
            typedef bool const & param_acdea368f48f572bb000ce0a3e887539_1_type;
            virtual return_type_acdea368f48f572bb000ce0a3e887539 probability(param_acdea368f48f572bb000ce0a3e887539_0_type param_0, param_acdea368f48f572bb000ce0a3e887539_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_acdea368f48f572bb000ce0a3e887539, class_type, probability, param_0, param_1); };

        public:
            typedef ::statiskit::Index  return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901;
            virtual return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901 get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_f29a9062a3a352369fcb0522a15b8cf3)()const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::get_nb_states;
struct ::statiskit::SingularDistribution const * (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_6fec79f58d915ece83cbb6574ebbe8d1)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_68960ed00cc65811a690382a0d67ba31)(::statiskit::Index const &, struct ::statiskit::SingularDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_7963c44546715eb0ab2c51bc5d9508e2)()const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_5b390b67e10f5171aad53ac4b34b9aad)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_422b9d66f2f95daa938ac7924ebeac4d)(struct ::statiskit::MultivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_8b660503f42355aface44a6b269d2198)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::assignment;
class ::std::vector< statiskit::Index, class ::std::allocator< statiskit::Index > >  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_2402a3a010375f17bc28753344cae909)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_7371ce416e5556a6b595feb14bf9b48b)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::SingularDistribution >::*method_pointer_49ba69a598e250d89edd74201e72a6f0)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >::uncertainty;

namespace autowig {
}

void wrapper_13232a7341945cd08787bdf29befb389(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > >::Type, struct ::statiskit::SingularDistribution > class_13232a7341945cd08787bdf29befb389(module, "_MixtureDistribution_13232a7341945cd08787bdf29befb389", "");
    class_13232a7341945cd08787bdf29befb389.def(pybind11::init<  >());
    class_13232a7341945cd08787bdf29befb389.def("get_nb_states", method_pointer_f29a9062a3a352369fcb0522a15b8cf3, "");
    class_13232a7341945cd08787bdf29befb389.def("get_observation", method_pointer_6fec79f58d915ece83cbb6574ebbe8d1, pybind11::return_value_policy::reference_internal, "");
    class_13232a7341945cd08787bdf29befb389.def("set_observation", method_pointer_68960ed00cc65811a690382a0d67ba31, "");
    class_13232a7341945cd08787bdf29befb389.def("get_pi", method_pointer_7963c44546715eb0ab2c51bc5d9508e2, pybind11::return_value_policy::copy, "");
    class_13232a7341945cd08787bdf29befb389.def("set_pi", method_pointer_5b390b67e10f5171aad53ac4b34b9aad, "");
    class_13232a7341945cd08787bdf29befb389.def("posterior", method_pointer_422b9d66f2f95daa938ac7924ebeac4d, "");
    class_13232a7341945cd08787bdf29befb389.def("assignment", method_pointer_8b660503f42355aface44a6b269d2198, "");
    class_13232a7341945cd08787bdf29befb389.def("assignment", method_pointer_2402a3a010375f17bc28753344cae909, "");
    class_13232a7341945cd08787bdf29befb389.def("uncertainty", method_pointer_7371ce416e5556a6b595feb14bf9b48b, "");
    class_13232a7341945cd08787bdf29befb389.def("uncertainty", method_pointer_49ba69a598e250d89edd74201e72a6f0, "");

}