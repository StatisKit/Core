#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  return_type_d1b9702be8e75e50b289d463019d92e6;
            virtual return_type_d1b9702be8e75e50b289d463019d92e6 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_d1b9702be8e75e50b289d463019d92e6, class_type, copy, ); };
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


namespace autowig {
}

void wrapper_0281a28ebbe655cabfc3d1baabb16b6c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type, struct ::statiskit::SingularDistribution > class_0281a28ebbe655cabfc3d1baabb16b6c(module, "_PolymorphicCopy_0281a28ebbe655cabfc3d1baabb16b6c", "");
    class_0281a28ebbe655cabfc3d1baabb16b6c.def(pybind11::init<  >());

}