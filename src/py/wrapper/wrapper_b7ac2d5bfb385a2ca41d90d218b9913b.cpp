#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator >::Optimization;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_ffc375e050255b0e93aeb875148628ea;
            typedef struct ::statiskit::MultivariateData const & param_ffc375e050255b0e93aeb875148628ea_0_type;
            typedef unsigned long int const & param_ffc375e050255b0e93aeb875148628ea_1_type;
            virtual return_type_ffc375e050255b0e93aeb875148628ea operator()(param_ffc375e050255b0e93aeb875148628ea_0_type param_0, param_ffc375e050255b0e93aeb875148628ea_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_ffc375e050255b0e93aeb875148628ea, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_f5006c7de7595cf1b83e7502ffda0880;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::data_type const & param_f5006c7de7595cf1b83e7502ffda0880_0_type;
            virtual return_type_f5006c7de7595cf1b83e7502ffda0880 operator()(param_f5006c7de7595cf1b83e7502ffda0880_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f5006c7de7595cf1b83e7502ffda0880, class_type, operator(), param_0); };
    };
}

double const & (::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator >::*method_pointer_6314917e34cc587a8fad9aadf5f80ab2)()const= &::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator >::*method_pointer_a7d817583f465cd18b825cca2c259cfe)(double const &)= &::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator >::*method_pointer_aea6d3368a0b5330a9eb0f0f6df69fd8)()const= &::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator >::*method_pointer_80bf77ae7ebe5e08add4ef8d67f5fad2)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator >::*method_pointer_5e769d7457655b918cae371dc814a99f)()const= &::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::BinomialDistributionEstimation::Estimator >::*method_pointer_e141a7bfd3cc5a039ee00aa0dd6f9b78)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_b7ac2d5bfb385a2ca41d90d218b9913b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::BinomialDistributionEstimation::Estimator > >::Type, struct ::statiskit::BinomialDistributionEstimation::Estimator > class_b7ac2d5bfb385a2ca41d90d218b9913b(module, "_Optimization_b7ac2d5bfb385a2ca41d90d218b9913b", "");
    class_b7ac2d5bfb385a2ca41d90d218b9913b.def(pybind11::init<  >());
    class_b7ac2d5bfb385a2ca41d90d218b9913b.def("get_mindiff", method_pointer_6314917e34cc587a8fad9aadf5f80ab2, pybind11::return_value_policy::copy, "");
    class_b7ac2d5bfb385a2ca41d90d218b9913b.def("set_mindiff", method_pointer_a7d817583f465cd18b825cca2c259cfe, "");
    class_b7ac2d5bfb385a2ca41d90d218b9913b.def("get_minits", method_pointer_aea6d3368a0b5330a9eb0f0f6df69fd8, "");
    class_b7ac2d5bfb385a2ca41d90d218b9913b.def("set_minits", method_pointer_80bf77ae7ebe5e08add4ef8d67f5fad2, "");
    class_b7ac2d5bfb385a2ca41d90d218b9913b.def("get_maxits", method_pointer_5e769d7457655b918cae371dc814a99f, "");
    class_b7ac2d5bfb385a2ca41d90d218b9913b.def("set_maxits", method_pointer_e141a7bfd3cc5a039ee00aa0dd6f9b78, "");

}