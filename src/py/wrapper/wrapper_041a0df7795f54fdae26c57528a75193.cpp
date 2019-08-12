#include "_core.h"

double const & (::statiskit::GompertzDistribution::*method_pointer_cd9ceb453a0d59ddb9c857a5fce86db9)()const= &::statiskit::GompertzDistribution::get_mu;
void  (::statiskit::GompertzDistribution::*method_pointer_1f05510c54595553b137f6177d8c1e1c)(double const &)= &::statiskit::GompertzDistribution::set_mu;
double const & (::statiskit::GompertzDistribution::*method_pointer_33b2a47f406f5a4abd3d791e5c2d4b37)()const= &::statiskit::GompertzDistribution::get_sigma;
void  (::statiskit::GompertzDistribution::*method_pointer_8e433900e1b456eeab462dcdf31850bd)(double const &)= &::statiskit::GompertzDistribution::set_sigma;

namespace autowig {
}

void wrapper_041a0df7795f54fdae26c57528a75193(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::GompertzDistribution, autowig::HolderType< class ::statiskit::GompertzDistribution >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::GompertzDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_041a0df7795f54fdae26c57528a75193(module, "GompertzDistribution", "This class GompertzDistribution represents a Gumbel distribution\n(minimum).\n\nA random component :math:`X` is said to folloow a Gumbel distribution\n(minimum) if :math:`Y=-X` follows a Gumbel distribution (maximum). The\nGumbel distribution (minimum) is an univariate continuous distribution.\nIt is also called extreme value type I distribution (minimum). The\nsupport is the set of real values :math:`\\mathbb{R}`. @see\nstatiskit::GumbelMaxDistribution\n\n");
    class_041a0df7795f54fdae26c57528a75193.def(pybind11::init<  >());
    class_041a0df7795f54fdae26c57528a75193.def(pybind11::init< double const &, double const & >());
    class_041a0df7795f54fdae26c57528a75193.def(pybind11::init< class ::statiskit::GompertzDistribution const & >());
    class_041a0df7795f54fdae26c57528a75193.def("get_mu", method_pointer_cd9ceb453a0d59ddb9c857a5fce86db9, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_041a0df7795f54fdae26c57528a75193.def("set_mu", method_pointer_1f05510c54595553b137f6177d8c1e1c, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_041a0df7795f54fdae26c57528a75193.def("get_sigma", method_pointer_33b2a47f406f5a4abd3d791e5c2d4b37, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_041a0df7795f54fdae26c57528a75193.def("set_sigma", method_pointer_8e433900e1b456eeab462dcdf31850bd, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}