#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::Optimization;


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

double const & (::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::*method_pointer_2a4896d157da5ec4bbe35de1b80e110d)()const= &::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::*method_pointer_32b0d2c3008c537c9c8d671a1db17f32)(double const &)= &::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::*method_pointer_06ca6354446350fe8fce4032c06ed642)()const= &::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::*method_pointer_73bf532da5295f0598a00dd789b42653)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::*method_pointer_6d09aeb68d885198bc9fe38c95284735)()const= &::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::*method_pointer_094ac400f6bc5588a5a7b72c6635a068)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_44ecbd8e3dde5fd9927c4ef097bcbba4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator > >::Type, struct ::statiskit::NegativeBinomialDistributionEstimation::Estimator > class_44ecbd8e3dde5fd9927c4ef097bcbba4(module, "_Optimization_44ecbd8e3dde5fd9927c4ef097bcbba4", "");
    class_44ecbd8e3dde5fd9927c4ef097bcbba4.def(pybind11::init<  >());
    class_44ecbd8e3dde5fd9927c4ef097bcbba4.def("get_mindiff", method_pointer_2a4896d157da5ec4bbe35de1b80e110d, pybind11::return_value_policy::copy, "");
    class_44ecbd8e3dde5fd9927c4ef097bcbba4.def("set_mindiff", method_pointer_32b0d2c3008c537c9c8d671a1db17f32, "");
    class_44ecbd8e3dde5fd9927c4ef097bcbba4.def("get_minits", method_pointer_06ca6354446350fe8fce4032c06ed642, "");
    class_44ecbd8e3dde5fd9927c4ef097bcbba4.def("set_minits", method_pointer_73bf532da5295f0598a00dd789b42653, "");
    class_44ecbd8e3dde5fd9927c4ef097bcbba4.def("get_maxits", method_pointer_6d09aeb68d885198bc9fe38c95284735, "");
    class_44ecbd8e3dde5fd9927c4ef097bcbba4.def("set_maxits", method_pointer_094ac400f6bc5588a5a7b72c6635a068, "");

}