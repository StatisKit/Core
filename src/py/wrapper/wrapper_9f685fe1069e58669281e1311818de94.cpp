#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator >::PolymorphicCopy;


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

void wrapper_9f685fe1069e58669281e1311818de94(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateHistogramDistributionIrregularEstimation::Estimator, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator > >::Type, struct ::statiskit::UnivariateHistogramDistributionEstimation::Estimator > class_9f685fe1069e58669281e1311818de94(module, "_PolymorphicCopy_9f685fe1069e58669281e1311818de94", "");
    class_9f685fe1069e58669281e1311818de94.def(pybind11::init<  >());

}