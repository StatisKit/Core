#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_c68c83f5773a5706b0b93719a1508225;
            virtual return_type_c68c83f5773a5706b0b93719a1508225 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c68c83f5773a5706b0b93719a1508225, class_type, copy, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_4c55f907bce55349844e6cc78c19f098;
            virtual return_type_4c55f907bce55349844e6cc78c19f098 children() const override { PYBIND11_OVERLOAD(return_type_4c55f907bce55349844e6cc78c19f098, class_type, children, ); };
            typedef double  return_type_327da71272ea5094808d7deb45c022e6;
            typedef struct ::statiskit::UnivariateConditionalDistribution const * param_327da71272ea5094808d7deb45c022e6_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_327da71272ea5094808d7deb45c022e6_1_type;
            virtual return_type_327da71272ea5094808d7deb45c022e6 scoring(param_327da71272ea5094808d7deb45c022e6_0_type param_0, param_327da71272ea5094808d7deb45c022e6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_327da71272ea5094808d7deb45c022e6, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_c3d913e3dfc7509f8002a9b8302c9508;
            typedef class ::statiskit::UnivariateConditionalData const & param_c3d913e3dfc7509f8002a9b8302c9508_0_type;
            typedef bool const & param_c3d913e3dfc7509f8002a9b8302c9508_1_type;
            virtual return_type_c3d913e3dfc7509f8002a9b8302c9508 operator()(param_c3d913e3dfc7509f8002a9b8302c9508_0_type param_0, param_c3d913e3dfc7509f8002a9b8302c9508_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c3d913e3dfc7509f8002a9b8302c9508, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::children;
            using class_type::scoring;
            using class_type::identifier;
    };
}


namespace autowig {
}

void wrapper_681ebebfc39f52e7b797a69c6f165cc7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > class_681ebebfc39f52e7b797a69c6f165cc7(module, "_PolymorphicCopy_681ebebfc39f52e7b797a69c6f165cc7", "");
    class_681ebebfc39f52e7b797a69c6f165cc7.def(pybind11::init<  >());
    class_681ebebfc39f52e7b797a69c6f165cc7.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}