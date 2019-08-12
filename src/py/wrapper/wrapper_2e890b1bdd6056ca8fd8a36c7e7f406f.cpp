#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator > >::PolymorphicCopy;


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


namespace autowig {
}

void wrapper_2e890b1bdd6056ca8fd8a36c7e7f406f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::LogarithmicDistributionMLEstimation::Estimator, class ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator > > >::Type, class ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator > > class_2e890b1bdd6056ca8fd8a36c7e7f406f(module, "_PolymorphicCopy_2e890b1bdd6056ca8fd8a36c7e7f406f", "");
    class_2e890b1bdd6056ca8fd8a36c7e7f406f.def(pybind11::init<  >());

}