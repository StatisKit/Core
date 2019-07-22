#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateDistributionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateDistributionEstimation::Estimator::Estimator;

            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_47877b68ac8c5802b57686bea7f9f547;
            typedef struct ::statiskit::MultivariateData const & param_47877b68ac8c5802b57686bea7f9f547_0_type;
            typedef ::statiskit::Index const & param_47877b68ac8c5802b57686bea7f9f547_1_type;
            virtual return_type_47877b68ac8c5802b57686bea7f9f547 operator()(param_47877b68ac8c5802b57686bea7f9f547_0_type param_0, param_47877b68ac8c5802b57686bea7f9f547_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_47877b68ac8c5802b57686bea7f9f547, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_f5006c7de7595cf1b83e7502ffda0880;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::data_type const & param_f5006c7de7595cf1b83e7502ffda0880_0_type;
            virtual return_type_f5006c7de7595cf1b83e7502ffda0880 operator()(param_f5006c7de7595cf1b83e7502ffda0880_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f5006c7de7595cf1b83e7502ffda0880, class_type, operator(), param_0); };
    };
}

class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  (::statiskit::UnivariateDistributionEstimation::Estimator::*method_pointer_47877b68ac8c5802b57686bea7f9f547)(struct ::statiskit::MultivariateData const &, ::statiskit::Index const &)const= &::statiskit::UnivariateDistributionEstimation::Estimator::operator();

namespace autowig {
}

void wrapper_41e812da3d3654cd9fb33041c3acf25f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateDistributionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > class_41e812da3d3654cd9fb33041c3acf25f(module, "Estimator", "");
    class_41e812da3d3654cd9fb33041c3acf25f.def(pybind11::init<  >());
    class_41e812da3d3654cd9fb33041c3acf25f.def("__call__", method_pointer_47877b68ac8c5802b57686bea7f9f547, "");

}