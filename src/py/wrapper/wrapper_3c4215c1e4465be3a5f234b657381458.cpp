#include "_core.h"

namespace autowig
{
    typedef ::statiskit::SingularDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:

            typedef ::statiskit::SingularDistributionEstimation::estimated_type const * return_type_5a217a5a2172529fb9cae0338394139f;
            virtual return_type_5a217a5a2172529fb9cae0338394139f get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_5a217a5a2172529fb9cae0338394139f, class_type, get_estimated, ); };
    };
}

::statiskit::SingularDistributionEstimation::estimated_type const * (::statiskit::SingularDistributionEstimation::*method_pointer_5a217a5a2172529fb9cae0338394139f)()const= &::statiskit::SingularDistributionEstimation::get_estimated;

namespace autowig {
}

void wrapper_3c4215c1e4465be3a5f234b657381458(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::SingularDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::SingularDistributionEstimation >::Type > class_3c4215c1e4465be3a5f234b657381458(module, "SingularDistributionEstimation", "");
    class_3c4215c1e4465be3a5f234b657381458.def("get_estimated", method_pointer_5a217a5a2172529fb9cae0338394139f, pybind11::return_value_policy::reference_internal, "");

}