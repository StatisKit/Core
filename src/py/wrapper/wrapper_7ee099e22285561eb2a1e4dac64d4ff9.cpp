#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_327da71272ea5094808d7deb45c022e6;
            typedef struct ::statiskit::UnivariateConditionalDistribution const * param_327da71272ea5094808d7deb45c022e6_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_327da71272ea5094808d7deb45c022e6_1_type;
            virtual return_type_327da71272ea5094808d7deb45c022e6 scoring(param_327da71272ea5094808d7deb45c022e6_0_type param_0, param_327da71272ea5094808d7deb45c022e6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_327da71272ea5094808d7deb45c022e6, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_1120b1a3d74551f599e45fac9225479d)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::size;
struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_597dbbe845ae5fc9ad116e944049585e)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_797fcbeb32a75967b3acd8939287f27a)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_140b0ba608935d5b9904110ae815942c)(struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_9556611bcc2f52ad9b6ae596b8b387d7)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_7ee099e22285561eb2a1e4dac64d4ff9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator > class_7ee099e22285561eb2a1e4dac64d4ff9(module, "Estimator", "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("__len__", method_pointer_1120b1a3d74551f599e45fac9225479d, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("get_estimator", method_pointer_597dbbe845ae5fc9ad116e944049585e, pybind11::return_value_policy::reference_internal, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("set_estimator", method_pointer_797fcbeb32a75967b3acd8939287f27a, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("add_estimator", method_pointer_140b0ba608935d5b9904110ae815942c, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("remove_estimator", method_pointer_9556611bcc2f52ad9b6ae596b8b387d7, "");
    class_7ee099e22285561eb2a1e4dac64d4ff9.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator::*) (struct ::statiskit::UnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::scoring), "");

}