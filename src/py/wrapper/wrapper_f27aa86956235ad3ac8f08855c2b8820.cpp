#include "_core.h"

struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::SplittingDistribution::*method_pointer_3d0a5e25401d5a02a6b475d9f5ce084d)()const= &::statiskit::SplittingDistribution::get_sum;
void  (::statiskit::SplittingDistribution::*method_pointer_208168851a265e90878b4dbc88e72100)(struct ::statiskit::DiscreteUnivariateDistribution const &)= &::statiskit::SplittingDistribution::set_sum;
struct ::statiskit::SingularDistribution * (::statiskit::SplittingDistribution::*method_pointer_b11e42fb740c57c4b06ac9f5bc089afa)()const= &::statiskit::SplittingDistribution::get_singular;
void  (::statiskit::SplittingDistribution::*method_pointer_a1fa1a240cbc549680a711d123c81f59)(struct ::statiskit::SingularDistribution const &)= &::statiskit::SplittingDistribution::set_singular;

namespace autowig {
}

void wrapper_f27aa86956235ad3ac8f08855c2b8820(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SplittingDistribution, autowig::HolderType< class ::statiskit::SplittingDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > > class_f27aa86956235ad3ac8f08855c2b8820(module, "SplittingDistribution", "");
    class_f27aa86956235ad3ac8f08855c2b8820.def(pybind11::init< struct ::statiskit::DiscreteUnivariateDistribution const &, struct ::statiskit::SingularDistribution const & >());
    class_f27aa86956235ad3ac8f08855c2b8820.def(pybind11::init< class ::statiskit::SplittingDistribution const & >());
    class_f27aa86956235ad3ac8f08855c2b8820.def("get_sum", method_pointer_3d0a5e25401d5a02a6b475d9f5ce084d, pybind11::return_value_policy::reference_internal, "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("set_sum", method_pointer_208168851a265e90878b4dbc88e72100, "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("get_singular", method_pointer_b11e42fb740c57c4b06ac9f5bc089afa, pybind11::return_value_policy::reference_internal, "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("set_singular", method_pointer_a1fa1a240cbc549680a711d123c81f59, "");

}