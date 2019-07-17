#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_be440bc3a52251dfbc42d722b716ef3f;
            typedef struct ::statiskit::SingularDistribution const * param_be440bc3a52251dfbc42d722b716ef3f_0_type;
            typedef struct ::statiskit::MultivariateData const & param_be440bc3a52251dfbc42d722b716ef3f_1_type;
            virtual return_type_be440bc3a52251dfbc42d722b716ef3f scoring(param_be440bc3a52251dfbc42d722b716ef3f_0_type param_0, param_be440bc3a52251dfbc42d722b716ef3f_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_be440bc3a52251dfbc42d722b716ef3f, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_e63871509e675384a85dc2f7ea740325;
            typedef struct ::statiskit::MultivariateData const & param_e63871509e675384a85dc2f7ea740325_0_type;
            typedef bool const & param_e63871509e675384a85dc2f7ea740325_1_type;
            virtual return_type_e63871509e675384a85dc2f7ea740325 operator()(param_e63871509e675384a85dc2f7ea740325_0_type param_0, param_e63871509e675384a85dc2f7ea740325_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_e63871509e675384a85dc2f7ea740325, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_1b58fb67872859e3906ec2e648200d3c;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::data_type const & param_1b58fb67872859e3906ec2e648200d3c_0_type;
            virtual return_type_1b58fb67872859e3906ec2e648200d3c operator()(param_1b58fb67872859e3906ec2e648200d3c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_1b58fb67872859e3906ec2e648200d3c, class_type, operator(), param_0); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_df673121ff9a5ed3a03ae1633aac43b7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::CriterionEstimator, class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator > >::Type, class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator > class_df673121ff9a5ed3a03ae1633aac43b7(module, "_PolymorphicCopy_df673121ff9a5ed3a03ae1633aac43b7", "");
    class_df673121ff9a5ed3a03ae1633aac43b7.def(pybind11::init<  >());
    class_df673121ff9a5ed3a03ae1633aac43b7.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*) (struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}