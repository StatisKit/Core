#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateConditionalDistributionEstimation::MultivariateConditionalDistributionEstimation;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  return_type_d983a7f463755e8dbd136e8296970fe7;
            virtual return_type_d983a7f463755e8dbd136e8296970fe7 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_d983a7f463755e8dbd136e8296970fe7, class_type, copy, ); };
            typedef ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * return_type_84032d21ab6f50bd8e28510f7cd5494f;
            virtual return_type_84032d21ab6f50bd8e28510f7cd5494f get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_84032d21ab6f50bd8e28510f7cd5494f, class_type, get_estimated, ); };
    };
}

::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * (::statiskit::MultivariateConditionalDistributionEstimation::*method_pointer_84032d21ab6f50bd8e28510f7cd5494f)()const= &::statiskit::MultivariateConditionalDistributionEstimation::get_estimated;
class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  (::statiskit::MultivariateConditionalDistributionEstimation::*method_pointer_d983a7f463755e8dbd136e8296970fe7)()const= &::statiskit::MultivariateConditionalDistributionEstimation::copy;

namespace autowig {
}

void wrapper_b9daedbb8a1d5864bc019efa0a0d17df(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type > class_b9daedbb8a1d5864bc019efa0a0d17df(module, "MultivariateConditionalDistributionEstimation", "");
    class_b9daedbb8a1d5864bc019efa0a0d17df.def("get_estimated", method_pointer_84032d21ab6f50bd8e28510f7cd5494f, pybind11::return_value_policy::reference_internal, "");
    class_b9daedbb8a1d5864bc019efa0a0d17df.def("copy", method_pointer_d983a7f463755e8dbd136e8296970fe7, "");

}