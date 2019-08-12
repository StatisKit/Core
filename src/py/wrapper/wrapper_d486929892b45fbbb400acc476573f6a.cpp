#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator >::Optimization;


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

double const & (::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator >::*method_pointer_abe2bf427d8d5a22b94a18cea79ed6c2)()const= &::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator >::*method_pointer_a8d7933629fe523ab55013126bc98153)(double const &)= &::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator >::*method_pointer_27ca091c8fd45614ab396f7b81f41ab9)()const= &::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator >::*method_pointer_f91fcee5c6b65b71813c043310c27dee)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator >::*method_pointer_c4fda11f266f5dbcbf90f943dde68117)()const= &::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::LogarithmicDistributionEstimation::Estimator >::*method_pointer_ec32b5cab7025e248a6dde2ff4a11f14)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_d486929892b45fbbb400acc476573f6a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::LogarithmicDistributionEstimation::Estimator > >::Type, struct ::statiskit::LogarithmicDistributionEstimation::Estimator > class_d486929892b45fbbb400acc476573f6a(module, "_Optimization_d486929892b45fbbb400acc476573f6a", "");
    class_d486929892b45fbbb400acc476573f6a.def(pybind11::init<  >());
    class_d486929892b45fbbb400acc476573f6a.def("get_mindiff", method_pointer_abe2bf427d8d5a22b94a18cea79ed6c2, pybind11::return_value_policy::copy, "");
    class_d486929892b45fbbb400acc476573f6a.def("set_mindiff", method_pointer_a8d7933629fe523ab55013126bc98153, "");
    class_d486929892b45fbbb400acc476573f6a.def("get_minits", method_pointer_27ca091c8fd45614ab396f7b81f41ab9, "");
    class_d486929892b45fbbb400acc476573f6a.def("set_minits", method_pointer_f91fcee5c6b65b71813c043310c27dee, "");
    class_d486929892b45fbbb400acc476573f6a.def("get_maxits", method_pointer_c4fda11f266f5dbcbf90f943dde68117, "");
    class_d486929892b45fbbb400acc476573f6a.def("set_maxits", method_pointer_ec32b5cab7025e248a6dde2ff4a11f14, "");

}