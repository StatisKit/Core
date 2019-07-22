#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateLocationEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateLocationEstimation::MultivariateLocationEstimation;

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  return_type_cb99710039d950ecbfd26547709627ec;
            virtual return_type_cb99710039d950ecbfd26547709627ec copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_cb99710039d950ecbfd26547709627ec, class_type, copy, ); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & return_type_79a5b0a58645590a8356a14195e34da5;
            virtual return_type_79a5b0a58645590a8356a14195e34da5 get_location() const override { PYBIND11_OVERLOAD_PURE(return_type_79a5b0a58645590a8356a14195e34da5, class_type, get_location, ); };
    };
}

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultivariateLocationEstimation::*method_pointer_79a5b0a58645590a8356a14195e34da5)()const= &::statiskit::MultivariateLocationEstimation::get_location;
class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  (::statiskit::MultivariateLocationEstimation::*method_pointer_cb99710039d950ecbfd26547709627ec)()const= &::statiskit::MultivariateLocationEstimation::copy;

namespace autowig {
}

void wrapper_5517439c40d6505682aa2e58ed6cea33(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateLocationEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateLocationEstimation >::Type > class_5517439c40d6505682aa2e58ed6cea33(module, "MultivariateLocationEstimation", "");
    class_5517439c40d6505682aa2e58ed6cea33.def(pybind11::init<  >());
    class_5517439c40d6505682aa2e58ed6cea33.def("get_location", method_pointer_79a5b0a58645590a8356a14195e34da5, pybind11::return_value_policy::copy, "");
    class_5517439c40d6505682aa2e58ed6cea33.def("copy", method_pointer_cb99710039d950ecbfd26547709627ec, "");

}