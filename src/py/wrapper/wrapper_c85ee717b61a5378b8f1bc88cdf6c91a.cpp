#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateLocationEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateLocationEstimation::UnivariateLocationEstimation;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  return_type_f62d06e83b8a572c85ec833896347ff2;
            virtual return_type_f62d06e83b8a572c85ec833896347ff2 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f62d06e83b8a572c85ec833896347ff2, class_type, copy, ); };

        public:
            typedef double const & return_type_9dde6f7d86c45ddd8e7676fbf005dcc2;
            virtual return_type_9dde6f7d86c45ddd8e7676fbf005dcc2 get_location() const override { PYBIND11_OVERLOAD_PURE(return_type_9dde6f7d86c45ddd8e7676fbf005dcc2, class_type, get_location, ); };
    };
}

double const & (::statiskit::UnivariateLocationEstimation::*method_pointer_9dde6f7d86c45ddd8e7676fbf005dcc2)()const= &::statiskit::UnivariateLocationEstimation::get_location;
class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  (::statiskit::UnivariateLocationEstimation::*method_pointer_f62d06e83b8a572c85ec833896347ff2)()const= &::statiskit::UnivariateLocationEstimation::copy;

namespace autowig {
}

void wrapper_c85ee717b61a5378b8f1bc88cdf6c91a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateLocationEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateLocationEstimation >::Type > class_c85ee717b61a5378b8f1bc88cdf6c91a(module, "UnivariateLocationEstimation", "");
    class_c85ee717b61a5378b8f1bc88cdf6c91a.def(pybind11::init<  >());
    class_c85ee717b61a5378b8f1bc88cdf6c91a.def("get_location", method_pointer_9dde6f7d86c45ddd8e7676fbf005dcc2, pybind11::return_value_policy::copy, "");
    class_c85ee717b61a5378b8f1bc88cdf6c91a.def("copy", method_pointer_f62d06e83b8a572c85ec833896347ff2, "");

}