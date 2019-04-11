#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_aadfe73fd9155a8e9db0f0d0e48799bc;
            typedef struct ::statiskit::MultivariateDistribution const * param_aadfe73fd9155a8e9db0f0d0e48799bc_0_type;
            typedef struct ::statiskit::MultivariateData const & param_aadfe73fd9155a8e9db0f0d0e48799bc_1_type;
            virtual return_type_aadfe73fd9155a8e9db0f0d0e48799bc scoring(param_aadfe73fd9155a8e9db0f0d0e48799bc_0_type param_0, param_aadfe73fd9155a8e9db0f0d0e48799bc_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_aadfe73fd9155a8e9db0f0d0e48799bc, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_20397b66478a59f481c4e33cec98b652;
            virtual return_type_20397b66478a59f481c4e33cec98b652 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_20397b66478a59f481c4e33cec98b652, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_3d106d53e52b5f76b1661aaf45332fdc)()const= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::MultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_c5573a36cd255e53ab0672174b4c832d)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_8efc2bfaeba458bb82dbf642db09164c)(::statiskit::Index const &, struct ::statiskit::MultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_c634120ddeca53f8ba4c707c3b2db56e)(struct ::statiskit::MultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_7b06d63408b65cdbbddf887e73437104)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_e04333cf88f85b74a12abe551bc271c3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::MultivariateDistributionEstimation::Estimator > class_e04333cf88f85b74a12abe551bc271c3(module, "Estimator", "");
    class_e04333cf88f85b74a12abe551bc271c3.def("__len__", method_pointer_3d106d53e52b5f76b1661aaf45332fdc, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("get_estimator", method_pointer_c5573a36cd255e53ab0672174b4c832d, pybind11::return_value_policy::reference_internal, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("set_estimator", method_pointer_8efc2bfaeba458bb82dbf642db09164c, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("add_estimator", method_pointer_c634120ddeca53f8ba4c707c3b2db56e, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("remove_estimator", method_pointer_7b06d63408b65cdbbddf887e73437104, "");
    class_e04333cf88f85b74a12abe551bc271c3.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}