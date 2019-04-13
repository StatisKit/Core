#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateLocationEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > >  return_type_8c923ab987815d75950c21bd5ebe0e9a;
            virtual return_type_8c923ab987815d75950c21bd5ebe0e9a copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8c923ab987815d75950c21bd5ebe0e9a, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  return_type_e9ba7deeca0056cb9754cfd757b7c670;
            typedef struct ::statiskit::MultivariateData const & param_e9ba7deeca0056cb9754cfd757b7c670_0_type;
            virtual return_type_e9ba7deeca0056cb9754cfd757b7c670 operator()(param_e9ba7deeca0056cb9754cfd757b7c670_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e9ba7deeca0056cb9754cfd757b7c670, class_type, operator(), param_0); };
    };
}

class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  (::statiskit::MultivariateLocationEstimation::Estimator::*method_pointer_e9ba7deeca0056cb9754cfd757b7c670)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MultivariateLocationEstimation::Estimator::operator();
class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > >  (::statiskit::MultivariateLocationEstimation::Estimator::*method_pointer_8c923ab987815d75950c21bd5ebe0e9a)()const= &::statiskit::MultivariateLocationEstimation::Estimator::copy;

namespace autowig {
}

void wrapper_176ad7b821255b478820451a70624393(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateLocationEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateLocationEstimation::Estimator >::Type > class_176ad7b821255b478820451a70624393(module, "Estimator", "");
    class_176ad7b821255b478820451a70624393.def("__call__", method_pointer_e9ba7deeca0056cb9754cfd757b7c670, "");
    class_176ad7b821255b478820451a70624393.def("copy", method_pointer_8c923ab987815d75950c21bd5ebe0e9a, "");

}