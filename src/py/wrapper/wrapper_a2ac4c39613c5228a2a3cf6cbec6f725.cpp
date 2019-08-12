#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::PolymorphicCopy;


        protected:
            typedef double  return_type_423a329439525170b30010c9b298154b;
            typedef struct ::statiskit::CategoricalUnivariateDistribution const * param_423a329439525170b30010c9b298154b_0_type;
            typedef struct ::statiskit::UnivariateData const & param_423a329439525170b30010c9b298154b_1_type;
            virtual return_type_423a329439525170b30010c9b298154b scoring(param_423a329439525170b30010c9b298154b_0_type param_0, param_423a329439525170b30010c9b298154b_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_423a329439525170b30010c9b298154b, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_ffc375e050255b0e93aeb875148628ea;
            typedef struct ::statiskit::MultivariateData const & param_ffc375e050255b0e93aeb875148628ea_0_type;
            typedef unsigned long int const & param_ffc375e050255b0e93aeb875148628ea_1_type;
            virtual return_type_ffc375e050255b0e93aeb875148628ea operator()(param_ffc375e050255b0e93aeb875148628ea_0_type param_0, param_ffc375e050255b0e93aeb875148628ea_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_ffc375e050255b0e93aeb875148628ea, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}


namespace autowig {
}

void wrapper_a2ac4c39613c5228a2a3cf6cbec6f725(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > class_a2ac4c39613c5228a2a3cf6cbec6f725(module, "_PolymorphicCopy_a2ac4c39613c5228a2a3cf6cbec6f725", "");
    class_a2ac4c39613c5228a2a3cf6cbec6f725.def(pybind11::init<  >());
    class_a2ac4c39613c5228a2a3cf6cbec6f725.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::CategoricalUnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}