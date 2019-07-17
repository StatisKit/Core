#include "_core.h"

struct ::statiskit::UnivariateLocationEstimation::Estimator * (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_6d96ac53d1b95ead90800c8c317b84ac)()= &::statiskit::BinomialDistributionMMEstimation::Estimator::get_location;
void  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_5d577514ebff586cb056a3bcecd2ab4e)(struct ::statiskit::UnivariateLocationEstimation::Estimator const &)= &::statiskit::BinomialDistributionMMEstimation::Estimator::set_location;
struct ::statiskit::UnivariateDispersionEstimation::Estimator * (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_43ba873cf7495e93b13d36b1d62fd2d0)()= &::statiskit::BinomialDistributionMMEstimation::Estimator::get_dispersion;
void  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_33cfeb40eb0552c4b8e77c99cc95009c)(struct ::statiskit::UnivariateDispersionEstimation::Estimator const &)= &::statiskit::BinomialDistributionMMEstimation::Estimator::set_dispersion;

namespace autowig {
}

void wrapper_1581bb259a1355888c0e234a7f9960d9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::BinomialDistributionMMEstimation::Estimator, autowig::HolderType< class ::statiskit::BinomialDistributionMMEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::BinomialDistributionMMEstimation::Estimator, class ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_1581bb259a1355888c0e234a7f9960d9(module, "Estimator", "");
    class_1581bb259a1355888c0e234a7f9960d9.def(pybind11::init<  >());
    class_1581bb259a1355888c0e234a7f9960d9.def(pybind11::init< class ::statiskit::BinomialDistributionMMEstimation::Estimator const & >());
    class_1581bb259a1355888c0e234a7f9960d9.def("get_location", method_pointer_6d96ac53d1b95ead90800c8c317b84ac, pybind11::return_value_policy::reference_internal, "");
    class_1581bb259a1355888c0e234a7f9960d9.def("set_location", method_pointer_5d577514ebff586cb056a3bcecd2ab4e, "");
    class_1581bb259a1355888c0e234a7f9960d9.def("get_dispersion", method_pointer_43ba873cf7495e93b13d36b1d62fd2d0, pybind11::return_value_policy::reference_internal, "");
    class_1581bb259a1355888c0e234a7f9960d9.def("set_dispersion", method_pointer_33cfeb40eb0552c4b8e77c99cc95009c, "");

}