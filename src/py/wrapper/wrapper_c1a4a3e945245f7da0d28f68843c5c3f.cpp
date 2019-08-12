#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::Estimator;


        protected:
            typedef double  return_type_423a329439525170b30010c9b298154b;
            typedef struct ::statiskit::CategoricalUnivariateDistribution const * param_423a329439525170b30010c9b298154b_0_type;
            typedef struct ::statiskit::UnivariateData const & param_423a329439525170b30010c9b298154b_1_type;
            virtual return_type_423a329439525170b30010c9b298154b scoring(param_423a329439525170b30010c9b298154b_0_type param_0, param_423a329439525170b30010c9b298154b_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_423a329439525170b30010c9b298154b, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };

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

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_5733fa6715045753802e5b329dfd342c)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::size;
class ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_5c6e3603003055e184dc97e3571818de)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_98ab79f6472b5123be019c48c7ff522b)(::statiskit::Index const &, class ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_489cd9df2ea35a179bebc7028e9e8037)(class ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_645475d2843859e59c344715df5469d7)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_c1a4a3e945245f7da0d28f68843c5c3f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > class_c1a4a3e945245f7da0d28f68843c5c3f(module, "Estimator", "");
    class_c1a4a3e945245f7da0d28f68843c5c3f.def(pybind11::init<  >());
    class_c1a4a3e945245f7da0d28f68843c5c3f.def("__len__", method_pointer_5733fa6715045753802e5b329dfd342c, "");
    class_c1a4a3e945245f7da0d28f68843c5c3f.def("get_estimator", method_pointer_5c6e3603003055e184dc97e3571818de, pybind11::return_value_policy::reference_internal, "");
    class_c1a4a3e945245f7da0d28f68843c5c3f.def("set_estimator", method_pointer_98ab79f6472b5123be019c48c7ff522b, "");
    class_c1a4a3e945245f7da0d28f68843c5c3f.def("add_estimator", method_pointer_489cd9df2ea35a179bebc7028e9e8037, "");
    class_c1a4a3e945245f7da0d28f68843c5c3f.def("remove_estimator", method_pointer_645475d2843859e59c344715df5469d7, "");
    class_c1a4a3e945245f7da0d28f68843c5c3f.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::CategoricalUnivariateDistribution const *, struct ::statiskit::UnivariateData const &) const >(&autowig::Publicist::scoring), "");

}