#include "_core.h"

namespace autowig
{
    typedef ::statiskit::SingularDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::SingularDistribution::SingularDistribution;

            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  return_type_807318768a675f8fa96d2eb54a36c4df;
            virtual return_type_807318768a675f8fa96d2eb54a36c4df copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_807318768a675f8fa96d2eb54a36c4df, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_48a21906343659d38a01df937deeb28c;
            typedef unsigned int  param_48a21906343659d38a01df937deeb28c_0_type;
            virtual return_type_48a21906343659d38a01df937deeb28c simulate(param_48a21906343659d38a01df937deeb28c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_48a21906343659d38a01df937deeb28c, class_type, simulate, param_0); };
            typedef double  return_type_acdea368f48f572bb000ce0a3e887539;
            typedef struct ::statiskit::MultivariateEvent const * param_acdea368f48f572bb000ce0a3e887539_0_type;
            typedef bool const & param_acdea368f48f572bb000ce0a3e887539_1_type;
            virtual return_type_acdea368f48f572bb000ce0a3e887539 probability(param_acdea368f48f572bb000ce0a3e887539_0_type param_0, param_acdea368f48f572bb000ce0a3e887539_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_acdea368f48f572bb000ce0a3e887539, class_type, probability, param_0, param_1); };
            typedef unsigned int  return_type_2c1d7ed64e3e5d1aa53e91bf74bfffd9;
            virtual return_type_2c1d7ed64e3e5d1aa53e91bf74bfffd9 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_2c1d7ed64e3e5d1aa53e91bf74bfffd9, class_type, get_nb_parameters, ); };
            typedef ::statiskit::Index  return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901;
            virtual return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901 get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_0d6cc8e9b1fb50da9e07aa24ca7b9901, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::SingularDistribution::*method_pointer_0d6cc8e9b1fb50da9e07aa24ca7b9901)()const= &::statiskit::SingularDistribution::get_nb_components;
unsigned int  (::statiskit::SingularDistribution::*method_pointer_2c1d7ed64e3e5d1aa53e91bf74bfffd9)()const= &::statiskit::SingularDistribution::get_nb_parameters;
double  (::statiskit::SingularDistribution::*method_pointer_acdea368f48f572bb000ce0a3e887539)(struct ::statiskit::MultivariateEvent const *, bool const &)const= &::statiskit::SingularDistribution::probability;
double  (::statiskit::SingularDistribution::*method_pointer_9d50c70c78205c91abef868dba68faaf)(struct ::statiskit::MultivariateData const &)const= &::statiskit::SingularDistribution::loglikelihood;
class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::SingularDistribution::*method_pointer_48a21906343659d38a01df937deeb28c)(unsigned int )const= &::statiskit::SingularDistribution::simulate;
class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  (::statiskit::SingularDistribution::*method_pointer_807318768a675f8fa96d2eb54a36c4df)()const= &::statiskit::SingularDistribution::copy;

namespace autowig {
}

void wrapper_76d258d0b30f5e3a94d02ba97954104b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::SingularDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::SingularDistribution >::Type > class_76d258d0b30f5e3a94d02ba97954104b(module, "SingularDistribution", "");
    class_76d258d0b30f5e3a94d02ba97954104b.def(pybind11::init<  >());
    class_76d258d0b30f5e3a94d02ba97954104b.def("get_nb_components", method_pointer_0d6cc8e9b1fb50da9e07aa24ca7b9901, "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("get_nb_parameters", method_pointer_2c1d7ed64e3e5d1aa53e91bf74bfffd9, "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("probability", method_pointer_acdea368f48f572bb000ce0a3e887539, "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("loglikelihood", method_pointer_9d50c70c78205c91abef868dba68faaf, "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("simulate", method_pointer_48a21906343659d38a01df937deeb28c, "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("copy", method_pointer_807318768a675f8fa96d2eb54a36c4df, "");

}