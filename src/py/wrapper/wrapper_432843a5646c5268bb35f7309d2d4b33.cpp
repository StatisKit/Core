#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:


        protected:
            typedef double  return_type_eb86c0375a50572bbae183092f4fdcaa;
            typedef struct ::statiskit::MultivariateDistribution const * param_eb86c0375a50572bbae183092f4fdcaa_0_type;
            typedef struct ::statiskit::MultivariateData const & param_eb86c0375a50572bbae183092f4fdcaa_1_type;
            virtual return_type_eb86c0375a50572bbae183092f4fdcaa scoring(param_eb86c0375a50572bbae183092f4fdcaa_0_type param_0, param_eb86c0375a50572bbae183092f4fdcaa_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_eb86c0375a50572bbae183092f4fdcaa, class_type, scoring, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  return_type_20397b66478a59f481c4e33cec98b652;
            virtual return_type_20397b66478a59f481c4e33cec98b652 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_20397b66478a59f481c4e33cec98b652, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_807c80fd452557d9b51fc9ba6fe0fb51)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::size;
struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator * (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_3331f973eb6f54cfbc3a92ac3b1ce848)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_844a99ccd8035b3e821357f54f18b079)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_2ed566579fdf57c184b491616d1dff20)(struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_c5fa489625b75bf18853395363cbdd64)(::statiskit::Index const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_432843a5646c5268bb35f7309d2d4b33(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > class_432843a5646c5268bb35f7309d2d4b33(module, "Estimator", "");
    class_432843a5646c5268bb35f7309d2d4b33.def("__len__", method_pointer_807c80fd452557d9b51fc9ba6fe0fb51, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("get_estimator", method_pointer_3331f973eb6f54cfbc3a92ac3b1ce848, pybind11::return_value_policy::reference_internal, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("set_estimator", method_pointer_844a99ccd8035b3e821357f54f18b079, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("add_estimator", method_pointer_2ed566579fdf57c184b491616d1dff20, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("remove_estimator", method_pointer_c5fa489625b75bf18853395363cbdd64, "");
    class_432843a5646c5268bb35f7309d2d4b33.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*) (struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}