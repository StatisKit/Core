#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::NominalDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::NominalDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::distribution_type * return_type_66f3e21cd67a5feab63c9578335a2d04;
            typedef class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & param_66f3e21cd67a5feab63c9578335a2d04_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_66f3e21cd67a5feab63c9578335a2d04_1_type;
            virtual return_type_66f3e21cd67a5feab63c9578335a2d04 create(param_66f3e21cd67a5feab63c9578335a2d04_0_type param_0, param_66f3e21cd67a5feab63c9578335a2d04_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_66f3e21cd67a5feab63c9578335a2d04, class_type, create, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_ffc375e050255b0e93aeb875148628ea;
            typedef struct ::statiskit::MultivariateData const & param_ffc375e050255b0e93aeb875148628ea_0_type;
            typedef unsigned long int const & param_ffc375e050255b0e93aeb875148628ea_1_type;
            virtual return_type_ffc375e050255b0e93aeb875148628ea operator()(param_ffc375e050255b0e93aeb875148628ea_0_type param_0, param_ffc375e050255b0e93aeb875148628ea_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_ffc375e050255b0e93aeb875148628ea, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::create;
    };
}


namespace autowig {
}

void wrapper_4045395044115f8ca0008a4001f465bf(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::NominalDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::NominalDistributionEstimator, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > class_4045395044115f8ca0008a4001f465bf(module, "_PolymorphicCopy_4045395044115f8ca0008a4001f465bf", "");
    class_4045395044115f8ca0008a4001f465bf.def(pybind11::init<  >());
    class_4045395044115f8ca0008a4001f465bf.def("_create", static_cast< ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::distribution_type * (::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*) (class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::create), pybind11::return_value_policy::reference_internal, "");

}